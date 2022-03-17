#include "mainwindow_pnr.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow_PNR w;
    w.show();
    return a.exec();
}
