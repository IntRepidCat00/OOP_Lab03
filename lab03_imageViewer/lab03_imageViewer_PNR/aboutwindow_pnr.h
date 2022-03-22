#ifndef ABOUTWINDOW_PNR_H
#define ABOUTWINDOW_PNR_H

#include <QDialog>

namespace Ui {
class aboutWindow_PNR;
}

class aboutWindow_PNR : public QDialog
{
    Q_OBJECT

public:
    explicit aboutWindow_PNR(QWidget *parent = nullptr);
    ~aboutWindow_PNR();

private:
    Ui::aboutWindow_PNR *ui;
};

#endif // ABOUTWINDOW_PNR_H
