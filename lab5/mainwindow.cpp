#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "customtablemodel.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->tableCols = 3;
    this->currIndex = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createTableView(){
    CustomTableModel *model = new CustomTableModel(this->Matrix, this->tableCols, this->Matrix.size());
    ui->table->setModel(model);
}

void MainWindow::setDefaultMatrix(){
    this->tableRows = 1;
    QList<QString>buff;

    for(int j = 0; j < this->tableCols; j++){
            buff.append("Значение");
        }

        this->Matrix.append(buff);
        buff.clear();
}

void MainWindow::createDefaultTableView(){
    this->setDefaultMatrix();
    CustomTableModel *model = new CustomTableModel(this->Matrix, this->tableCols, this->Matrix.size());
    ui->table->setModel(model);
}

void MainWindow::errorMessage(){
    QMessageBox *msg = new QMessageBox;
    msg->setText("Внимание");
    msg->setInformativeText("В таблице нет записей!");
    msg->setStandardButtons(QMessageBox::Cancel);
    msg->exec();
}

void MainWindow::on_btn_add_clicked()
{
    QList<QString>row;
    row.append(ui->name->toPlainText());
    row.append(ui->author->toPlainText());
    row.append(ui->year->toPlainText());
    this->tableRows++;
    this->Matrix.append(row);
    this->createTableView();
}

void MainWindow::on_btn_delete_clicked()
{
    if(this->tableRows <= 0) this->errorMessage();
        else{

            for (int i = 0; i < this->Matrix.size(); i++){
                if (this->Matrix[i][1] == ui->del_author->toPlainText()) {
                    this->Matrix.removeAt(i);
                    i--;
                }
            }
            this->tableRows = this->Matrix.size();
            this->createTableView();
        }

    // переработать функцию.
}
