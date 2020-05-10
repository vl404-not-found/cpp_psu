//
// Created by vlad on 10.05.2020.
//
#ifndef PROJECTX_MAINWINDOW_H
#define PROJECTX_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui{};
};


#endif //PROJECTX_MAINWINDOW_H
