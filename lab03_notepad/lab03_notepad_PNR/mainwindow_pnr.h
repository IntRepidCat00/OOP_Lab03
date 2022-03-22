#ifndef MAINWINDOW_PNR_H
#define MAINWINDOW_PNR_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QFontDialog>
#include <QTimer>
#include <QContextMenuEvent>
#include "aboutwindow.h"
#include <QCloseEvent>
#include "closedialog_pnr.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow_PNR; }
QT_END_NAMESPACE

class MainWindow_PNR : public QMainWindow
{
    Q_OBJECT

private:
    QString currentFile = "";
    bool firstsave = true;
    QString savedtext = "";
    QTimer *tmr;
public:
    MainWindow_PNR(QWidget *parent = nullptr);
    ~MainWindow_PNR();

private slots:
    void on_actionNew_NPR_triggered();

    void on_actionOpen_PNR_triggered();

    void on_actionSave_as_PNR_triggered();

    void on_actionPrint_PNR_triggered();

    void on_actionExit_PNR_triggered();

    void on_actionUndo_PNR_triggered();

    void on_actionRedo_PNR_triggered();

    void on_actionSave_PNR_triggered();

    void isSaved();

    void on_actionFont_triggered();

    void on_actionAbout_triggered();

    void ShowContextMenu(const QPoint& pos);

private:
    Ui::MainWindow_PNR *ui;
    void closeEvent(QCloseEvent *event);
};


#endif // MAINWINDOW_PNR_H
