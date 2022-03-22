/********************************************************************************
** Form generated from reading UI file 'closedialog_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEDIALOG_PNR_H
#define UI_CLOSEDIALOG_PNR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CloseDialog_PNR
{
public:
    QPushButton *YesButton;
    QLabel *label;
    QPushButton *NoButton;

    void setupUi(QDialog *CloseDialog_PNR)
    {
        if (CloseDialog_PNR->objectName().isEmpty())
            CloseDialog_PNR->setObjectName(QString::fromUtf8("CloseDialog_PNR"));
        CloseDialog_PNR->resize(349, 101);
        YesButton = new QPushButton(CloseDialog_PNR);
        YesButton->setObjectName(QString::fromUtf8("YesButton"));
        YesButton->setGeometry(QRect(20, 50, 151, 29));
        label = new QLabel(CloseDialog_PNR);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 311, 20));
        NoButton = new QPushButton(CloseDialog_PNR);
        NoButton->setObjectName(QString::fromUtf8("NoButton"));
        NoButton->setGeometry(QRect(180, 50, 151, 29));

        retranslateUi(CloseDialog_PNR);

        QMetaObject::connectSlotsByName(CloseDialog_PNR);
    } // setupUi

    void retranslateUi(QDialog *CloseDialog_PNR)
    {
        CloseDialog_PNR->setWindowTitle(QCoreApplication::translate("CloseDialog_PNR", "Dialog", nullptr));
        YesButton->setText(QCoreApplication::translate("CloseDialog_PNR", "Yes", nullptr));
        label->setText(QCoreApplication::translate("CloseDialog_PNR", "This file wasn't saved. Do you want to save it?", nullptr));
        NoButton->setText(QCoreApplication::translate("CloseDialog_PNR", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloseDialog_PNR: public Ui_CloseDialog_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEDIALOG_PNR_H
