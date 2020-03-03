#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    first = new book;
    frst = first;
    ui->setupUi(this);
    ui->table->setModel(&tmodel);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_add_clicked()
{
    frst->id = iter_item;
    frst->name = ui->name->toPlainText();
    frst->author = ui->author->toPlainText();
    frst->year = ui->year->toPlainText();
    book *scnd = new book;
    frst->next = scnd;
    scnd->next = nullptr;
    frst = scnd;
    tmodel.dataset.replace(iter_item, {ui->name->toPlainText(),ui->author->toPlainText(),ui->year->toPlainText()});
    iter_item++;
//    ui->label->setText(QString(tmodel.dataset.length()));
    ui->table->setModel(&tmodel);
}

void MainWindow::on_btn_delete_clicked()
{
    frst = first;
    while (frst->next != nullptr) {
        if (frst->author == ui->del_author->toPlainText()){
            ui->table->hideRow(frst->id);
            book * conn = frst->next->next;
            delete frst->next;
            frst->next = conn;
            frst = frst->next;
        }
        frst = frst->next;
    }
    iter_item = 0;
    while (frst->next != nullptr){
        tmodel.dataset.replace(iter_item, {frst->name,frst->author,frst->year});
        iter_item++;
        frst = frst->next;
    }
    ui->label->setText(QString(tmodel.dataset.size()));
    iter_item = tmodel.dataset.size();
}
