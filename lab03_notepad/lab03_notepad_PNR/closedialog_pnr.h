#ifndef CLOSEDIALOG_PNR_H
#define CLOSEDIALOG_PNR_H

#include <QDialog>

namespace Ui {
class CloseDialog_PNR;
}

class CloseDialog_PNR : public QDialog
{
    Q_OBJECT

public:
    explicit CloseDialog_PNR(QWidget *parent = nullptr);
    ~CloseDialog_PNR();

private slots:


    void on_CancelButton_clicked();

private:
    Ui::CloseDialog_PNR *ui;
};

#endif // CLOSEDIALOG_PNR_H
