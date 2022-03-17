#include "imageviewer_pnr.h"
#include "ui_imageviewer_pnr.h"

ImageViewer_PNR::ImageViewer_PNR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ImageViewer_PNR)
{
    ui->setupUi(this);
    ui->imageLabel->setScaledContents(true);
    ui->scrollArea->setVisible(false);
    setCentralWidget(ui->scrollArea);
}

ImageViewer_PNR::~ImageViewer_PNR()
{
    delete ui;
}


void ImageViewer_PNR::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    QImageReader reader(fileName);
    reader.setAutoTransform(true);
    QImage newImage = reader.read();
    if (newImage.isNull())
    {
        QMessageBox::warning(this, "Warning", "Cannot open file\n" + reader.errorString());
        return;
    }
    image = newImage;
    if (newImage.colorSpace().isValid())newImage.convertToColorSpace(QColorSpace::SRgb);
    ui->imageLabel->setPixmap(QPixmap::fromImage(image));

    scaleFactor = 1.0;

    ui->scrollArea->setVisible(true);
    ui->actionPrint->setEnabled(true);
    ui->actionFit_to_Window->setEnabled(true);
    updateActions();

    if (!ui->actionFit_to_Window->isChecked())
    {
        ui->imageLabel->adjustSize();
    }

}

void ImageViewer_PNR::updateActions()
{
    ui->actionSave_as->setEnabled(!image.isNull());
    ui->actionCopy->setEnabled(!image.isNull());
    ui->actionZoom_In->setEnabled(!ui->actionFit_to_Window->isChecked());
    ui->actionZoom_Out->setEnabled(!ui->actionFit_to_Window->isChecked());
    ui->actionNormal_Size->setEnabled(!ui->actionFit_to_Window->isChecked());
}




void ImageViewer_PNR::on_actionFit_to_Window_triggered()
{
    bool fitToWindow = ui->actionFit_to_Window->isChecked();
    ui->scrollArea->setWidgetResizable(fitToWindow);
    if (!fitToWindow)
    {
        ui->imageLabel->adjustSize();
        scaleFactor = 1.0;
    }
    updateActions();
}


void ImageViewer_PNR::on_actionSave_as_triggered()
{
    QFileDialog dialog(this, tr("Save file as"));

    QImageWriter writer;
    writer.setFormat("png");

    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Image File"), QString(), tr("Images (*.png)"));
    if (!fileName.isEmpty())
    {
      image.save(fileName);
    }
}


void ImageViewer_PNR::on_actionPrint_triggered()
{
    QPrinter printer;
    QPrintDialog dialog(&printer, this);
    if (dialog.exec())
    {
        QPainter painter(&printer);
        QPixmap pixmap = ui->imageLabel->pixmap(Qt::ReturnByValue);
        QRect rect = painter.viewport();
        QSize size = pixmap.size();
        size.scale(rect.size(), Qt::KeepAspectRatio);
        painter.setViewport(rect.x(), rect.y(), size.width(), size.height());
        painter.setWindow(pixmap.rect());
        painter.drawPixmap(0, 0, pixmap);
    }
}




void ImageViewer_PNR::on_actionNormal_Size_triggered()
{
    ui->imageLabel->adjustSize();
    scaleFactor = 1.0;
}

void ImageViewer_PNR::adjustScrollBar(QScrollBar *scrollBar, double factor)
//! [25] //! [26]
{
    scrollBar->setValue(int(factor * scrollBar->value() + ((factor - 1) * scrollBar->pageStep()/2)));
}

void ImageViewer_PNR::scaleImage(double factor)
{
    scaleFactor *= factor;
    ui->imageLabel->resize(scaleFactor * ui->imageLabel->pixmap(Qt::ReturnByValue).size());

    adjustScrollBar(ui->scrollArea->horizontalScrollBar(), factor);
    adjustScrollBar(ui->scrollArea->verticalScrollBar(), factor);

    ui->actionZoom_In->setEnabled(scaleFactor < 3.0);
    ui->actionZoom_Out->setEnabled(scaleFactor > 0.333);
}

void ImageViewer_PNR::on_actionZoom_In_triggered()
{
    scaleImage(1.25);
}


void ImageViewer_PNR::on_actionZoom_Out_triggered()
{
    scaleImage(0.75);
}


void ImageViewer_PNR::on_actionCopy_triggered()
{
    QGuiApplication::clipboard()->setImage(image);
}

void ImageViewer_PNR::on_actionAbout_triggered()
{
    aboutwindow ab;
    ab.setModal(true);
    ab.exec();
}
