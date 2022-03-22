#include "aboutwindow_pnr.h"
#include "ui_aboutwindow_pnr.h"

aboutWindow_PNR::aboutWindow_PNR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutWindow_PNR)
{
    ui->setupUi(this);
}

aboutWindow_PNR::~aboutWindow_PNR()
{
    delete ui;
}
