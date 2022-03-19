#include "mainwindow_pnr.h"
#include "ui_mainwindow_pnr.h"

MainWindow_PNR::MainWindow_PNR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow_PNR)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit_PNR);
    tmr = new QTimer();
    tmr->setInterval(1000);
    connect(tmr, SIGNAL(timeout()), this, SLOT(isSaved()));
    ui->actionUndo_PNR->setShortcut(tr("CTRL+Z"));
    ui->actionRedo_PNR->setShortcut(tr("CTRL+SHIFT+Z"));
    ui->actionCopy_PNR->setShortcut(tr("CTRL+C"));
    ui->actionPaste_PNR->setShortcut(tr("CTRL+V"));
    ui->actionCut_PNR->setShortcut(tr("CTRL+X"));
    ui->actionNew_PNR->setShortcut(tr("CTRL+N"));
    ui->actionOpen_PNR->setShortcut(tr("CTRL+O"));
    ui->actionExit_PNR->setShortcut(tr("CTRL+Q"));
    ui->actionPrint_PNR->setShortcut(tr("CTRL+P"));
    ui->actionSave_PNR->setShortcut(tr("CTRL+S"));
    ui->actionSave_as_PNR->setShortcut(tr("CTRL+SHIFT+S"));
    ui->textEdit_PNR->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->textEdit_PNR, SIGNAL(customContextMenuRequested(const QPoint&)),
            this, SLOT(ShowContextMenu(const QPoint&)));
    tmr->start();
}

MainWindow_PNR::~MainWindow_PNR()
{
    delete ui;
}

void MainWindow_PNR::ShowContextMenu(const QPoint& pos)
{
// for most widgets
QPoint globalPos = ui->textEdit_PNR->mapToGlobal(pos);
// for QAbstractScrollArea and derived classes you would use:
// QPoint globalPos = myWidget->viewport()->mapToGlobal(pos);
QMenu myMenu;
myMenu.addAction(ui->actionCopy_PNR);
myMenu.addAction(ui->actionCut_PNR);
myMenu.addAction(ui->actionPaste_PNR);
myMenu.exec(globalPos);
}

void MainWindow_PNR::isSaved()
{
    QString edText = ui->textEdit_PNR->toPlainText();
    QString title = QWidget::windowTitle();
    if(title.at(0)!='*' && savedtext != edText)
    {
        title.prepend('*');
    } else if(title.at(0)== '*' && savedtext == edText)
    {
        title.remove(0, 1);
    }
    QWidget::setWindowTitle(title);

}

void MainWindow_PNR::on_actionNew_NPR_triggered()
{
    firstsave = true;
    currentFile.clear();
    ui->textEdit_PNR->setText(QString());
}


void MainWindow_PNR::on_actionOpen_PNR_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open the file");
    if(filename.isEmpty())
    {
        return;
    }
    QFile file(filename);
    currentFile = filename;
    if(!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Cannot open the file" + file.errorString());
        return;
    }
    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit_PNR->setText(text);
    firstsave = true;
    savedtext = text;
    file.close();
}

void MainWindow_PNR::on_actionSave_as_PNR_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save as");
    if(filename.isEmpty())
    {
        return;
    }
    QFile file(filename);
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning", "Cannot save file\n" + file.errorString());
        return;
    }
    if(firstsave)
    {
        firstsave=false;
    }
    currentFile = filename;
    setWindowTitle(filename);
    QTextStream out(&file);
    QString text = ui->textEdit_PNR->toPlainText();
    out << text;
    savedtext = text;
    file.close();
}

void MainWindow_PNR::on_actionSave_PNR_triggered()
{
    if(firstsave)
    {
        on_actionSave_as_PNR_triggered();
    } else
    {
        QFile file(currentFile);
        if(!file.open(QFile::WriteOnly | QFile::Text))
        {
            QMessageBox::warning(this, "Warning", "Cannot save file\n" + file.errorString());
            return;
        }
        QTextStream out(&file);
        QString text = ui->textEdit_PNR->toPlainText();
        out << text;
        savedtext = text;
        file.close();
    }
}

void MainWindow_PNR::on_actionPrint_PNR_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Printer name");
    QPrintDialog qDialog(&printer, this);
    if(qDialog.exec() == QDialog::Rejected)
    {
        QMessageBox::warning(this, "Warning", "Cannot access the printer");
        return;
    }
    ui->textEdit_PNR->print(&printer);
}


void MainWindow_PNR::on_actionExit_PNR_triggered()
{
    QApplication::quit();
}


void MainWindow_PNR::on_actionUndo_PNR_triggered()
{
    ui->textEdit_PNR->undo();
}


void MainWindow_PNR::on_actionRedo_PNR_triggered()
{
    ui->textEdit_PNR->redo();
}




void MainWindow_PNR::on_actionFont_triggered()
{
    ui->textEdit_PNR->setFont(QFontDialog::getFont(0, ui->textEdit_PNR->font()));
}


void MainWindow_PNR::on_actionAbout_triggered()
{
    aboutWindow ab;
    ab.setModal(true);
    ab.exec();
}

