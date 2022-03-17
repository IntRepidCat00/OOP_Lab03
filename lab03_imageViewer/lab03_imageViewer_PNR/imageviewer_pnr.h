#ifndef IMAGEVIEWER_PNR_H
#define IMAGEVIEWER_PNR_H

#include <QMainWindow>
#include <QImage>
#include <QtPrintSupport/qtprintsupportglobal.h>
#include <QPainter>
#include <QPrinter>
#include <QPrintDialog>
#include <QImageReader>
#include <QImageWriter>
#include <QFileDialog>
#include <QMessageBox>
#include <QColorSpace>
#include <QStandardPaths>
#include <QScrollBar>
#include <QClipboard>
#include "aboutwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ImageViewer_PNR; }
QT_END_NAMESPACE

class ImageViewer_PNR : public QMainWindow
{
    Q_OBJECT

public:
    ImageViewer_PNR(QWidget *parent = nullptr);
    ~ImageViewer_PNR();

private slots:

    void on_actionOpen_triggered();

    void on_actionFit_to_Window_triggered();

    void on_actionSave_as_triggered();

    void on_actionPrint_triggered();

    void on_actionNormal_Size_triggered();

    void on_actionZoom_In_triggered();

    void on_actionZoom_Out_triggered();

    void on_actionCopy_triggered();

    void on_actionAbout_triggered();

private:
    Ui::ImageViewer_PNR *ui;

    QImage image;
    double scaleFactor = 1;
    void updateActions();
    void adjustScrollBar(QScrollBar *scrollBar, double factor);
    void scaleImage(double factor);
};
#endif // IMAGEVIEWER_PNR_H
