/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QTableView *table;
    QFormLayout *formLayout;
    QTextEdit *name;
    QTextEdit *author;
    QTextEdit *year;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_add;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QPushButton *btn_delete;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(804, 822);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(800, 16777215));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        table = new QTableView(centralwidget);
        table->setObjectName(QString::fromUtf8("table"));

        verticalLayout_3->addWidget(table);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        name = new QTextEdit(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, name);

        author = new QTextEdit(centralwidget);
        author->setObjectName(QString::fromUtf8("author"));

        formLayout->setWidget(1, QFormLayout::FieldRole, author);

        year = new QTextEdit(centralwidget);
        year->setObjectName(QString::fromUtf8("year"));

        formLayout->setWidget(2, QFormLayout::LabelRole, year);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        verticalLayout->addWidget(btn_add);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);

        btn_delete = new QPushButton(centralwidget);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));

        horizontalLayout->addWidget(btn_delete);


        verticalLayout->addLayout(horizontalLayout);


        formLayout->setLayout(2, QFormLayout::FieldRole, verticalLayout);


        verticalLayout_3->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(btn_add, SIGNAL(clicked()), author, SLOT(clear()));
        QObject::connect(btn_add, SIGNAL(clicked()), name, SLOT(clear()));
        QObject::connect(btn_add, SIGNAL(clicked()), year, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(whatsthis)
        name->setWhatsThis(QCoreApplication::translate("MainWindow", "name", nullptr));
#endif // QT_CONFIG(whatsthis)
        name->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        author->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        year->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\264 \320\275\320\260\320\277\320\270\321\201\320\260\320\275\320\270\321\217", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200 \320\272\320\275\320\270\320\263\320\270 \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\275\320\260\320\264\320\276 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
