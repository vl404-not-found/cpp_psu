#include "mainwindow.h"
#include <QApplication>
#include <windows.h>

int main(int argc, char *argv[]){
    ShowWindow(GetConsoleWindow(),HIDE_WINDOW);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return QApplication::exec();
}
