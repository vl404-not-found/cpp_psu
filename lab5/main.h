//
// Created by vlad on 29.02.2020.
//

#ifndef CPP_PSU_MAIN_H
#define CPP_PSU_MAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif //CPP_PSU_MAIN_H
