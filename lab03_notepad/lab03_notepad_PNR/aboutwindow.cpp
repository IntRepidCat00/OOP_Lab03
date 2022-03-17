#include "aboutwindow.h"
#include "ui_aboutwindow.h"

aboutWindow::aboutWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutWindow)
{
    ui->setupUi(this);
    ui->SiteLabel->setText("<a href=\"http://www.developer.com\">developer.com</a>");
    ui->SiteLabel->setOpenExternalLinks(true);
}

aboutWindow::~aboutWindow()
{
    delete ui;
}
