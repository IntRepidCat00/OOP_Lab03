#ifndef IMAGEVIEWER_PNR_H
#define IMAGEVIEWER_PNR_H

#include <QMainWindow>
#include <QFileDialog>
#include <QImageWriter>
#include "aboutwindow_pnr.h"

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
    void on_actionOpen_PNR_triggered();

    void on_actionZoom_In_PNR_triggered();

    void on_actionZoom_Out_PNR_triggered();

    void on_actionNormal_Size_triggered();

    void on_actionSave_as_PNR_triggered();

    void on_actionAbout_PNR_triggered();

private:
    Ui::ImageViewer_PNR *ui;

    QString  filename;
    double imageScale = 1.0;
    QImage image;
    int baseWidth;
    int baseHeight;
};
#endif // IMAGEVIEWER_PNR_H
