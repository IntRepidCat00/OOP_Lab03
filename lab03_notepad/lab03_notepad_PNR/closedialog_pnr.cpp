#include "closedialog_pnr.h"
#include "ui_closedialog_pnr.h"

CloseDialog_PNR::CloseDialog_PNR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CloseDialog_PNR)
{
    ui->setupUi(this);
}

CloseDialog_PNR::~CloseDialog_PNR()
{
    delete ui;
}



void CloseDialog_PNR::on_CancelButton_clicked()
{

}

