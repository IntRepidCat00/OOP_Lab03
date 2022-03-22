#include "imageviewer_pnr.h"
#include "ui_imageviewer_pnr.h"

ImageViewer_PNR::ImageViewer_PNR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ImageViewer_PNR)
{
    ui->setupUi(this);
    ui->scrollArea->setWidgetResizable(true);
}

ImageViewer_PNR::~ImageViewer_PNR()
{
    delete ui;
}


void ImageViewer_PNR::on_actionOpen_PNR_triggered()
{
    filename = QFileDialog::getOpenFileName(this, tr("Choose"), "", tr("Images (*.png *.jpg *.jpeg *.bmp *.tif)"));

    if(QString::compare(filename, QString()) != 0)
    {
        bool valid = image.load(filename);

        if(valid)
        {
            image = image.scaledToWidth(ui->imageLabel_PNR->width(), Qt::SmoothTransformation);
            ui->imageLabel_PNR->setText("");
            ui->imageLabel_PNR->setPixmap(QPixmap::fromImage(image));
            imageScale = 1.0;
            baseWidth = ui->imageLabel_PNR->width()*imageScale;
            baseHeight = ui->imageLabel_PNR->height()*imageScale;
        } else
        {
            ui->imageLabel_PNR->setText("Error: something went wrong. Try again.");
        }
    }


}


void ImageViewer_PNR::on_actionZoom_In_PNR_triggered()
{
    imageScale += 0.2;
    int width = ui->imageLabel_PNR->width()*imageScale;
    int height = ui->imageLabel_PNR->height()*imageScale;

    ui->imageLabel_PNR->setPixmap(QPixmap::fromImage(image).scaled(width, height, Qt::KeepAspectRatio));
}


void ImageViewer_PNR::on_actionZoom_Out_PNR_triggered()
{
    imageScale -= 0.2;
    int width = ui->imageLabel_PNR->width()*imageScale;
    int height = ui->imageLabel_PNR->height()*imageScale;

    ui->imageLabel_PNR->setPixmap(QPixmap::fromImage(image).scaled(width, height, Qt::KeepAspectRatio));
}


void ImageViewer_PNR::on_actionNormal_Size_triggered()
{
    imageScale = 1.0;
    ui->imageLabel_PNR->setPixmap(QPixmap::fromImage(image).scaled(baseWidth, baseHeight, Qt::KeepAspectRatio));
}


void ImageViewer_PNR::on_actionSave_as_PNR_triggered()
{
    QString imgSavePath = QFileDialog::getSaveFileName(this, tr("Save image"), "", tr("Images (*.png *.jpg *.jpeg *.bmp *.tif)"));
    image.save(imgSavePath);
}


void ImageViewer_PNR::on_actionAbout_PNR_triggered()
{
    aboutWindow_PNR about;
    about.setModal(true);
    about.exec();
}

