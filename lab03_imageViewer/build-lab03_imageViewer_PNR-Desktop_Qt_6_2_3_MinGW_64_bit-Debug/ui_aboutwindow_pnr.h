/********************************************************************************
** Form generated from reading UI file 'aboutwindow_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_PNR_H
#define UI_ABOUTWINDOW_PNR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutWindow_PNR
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *aboutWindow_PNR)
    {
        if (aboutWindow_PNR->objectName().isEmpty())
            aboutWindow_PNR->setObjectName(QString::fromUtf8("aboutWindow_PNR"));
        aboutWindow_PNR->resize(491, 382);
        label = new QLabel(aboutWindow_PNR);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 63, 20));
        label_2 = new QLabel(aboutWindow_PNR);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 431, 271));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/lilac.jpg")));
        label_3 = new QLabel(aboutWindow_PNR);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 330, 391, 20));

        retranslateUi(aboutWindow_PNR);

        QMetaObject::connectSlotsByName(aboutWindow_PNR);
    } // setupUi

    void retranslateUi(QDialog *aboutWindow_PNR)
    {
        aboutWindow_PNR->setWindowTitle(QCoreApplication::translate("aboutWindow_PNR", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("aboutWindow_PNR", "About", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("aboutWindow_PNR", "Lab03 Image Viewer by Prokopchuk Nazarii", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutWindow_PNR: public Ui_aboutWindow_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_PNR_H
