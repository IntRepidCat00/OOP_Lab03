/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutwindow
{
public:
    QLabel *Image;
    QLabel *SiteLabel;
    QLabel *Version;
    QLabel *DeveloperLabel;
    QLabel *AboutLabel;
    QLabel *Year;

    void setupUi(QDialog *aboutwindow)
    {
        if (aboutwindow->objectName().isEmpty())
            aboutwindow->setObjectName(QString::fromUtf8("aboutwindow"));
        aboutwindow->resize(500, 400);
        Image = new QLabel(aboutwindow);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(20, 60, 461, 201));
        Image->setPixmap(QPixmap(QString::fromUtf8(":/C:/Users/Nazarii/Downloads/papich2.png")));
        Image->setScaledContents(true);
        SiteLabel = new QLabel(aboutwindow);
        SiteLabel->setObjectName(QString::fromUtf8("SiteLabel"));
        SiteLabel->setGeometry(QRect(70, 340, 131, 20));
        QFont font;
        font.setPointSize(9);
        SiteLabel->setFont(font);
        Version = new QLabel(aboutwindow);
        Version->setObjectName(QString::fromUtf8("Version"));
        Version->setGeometry(QRect(20, 310, 461, 20));
        Version->setFont(font);
        DeveloperLabel = new QLabel(aboutwindow);
        DeveloperLabel->setObjectName(QString::fromUtf8("DeveloperLabel"));
        DeveloperLabel->setGeometry(QRect(20, 280, 461, 20));
        DeveloperLabel->setFont(font);
        AboutLabel = new QLabel(aboutwindow);
        AboutLabel->setObjectName(QString::fromUtf8("AboutLabel"));
        AboutLabel->setGeometry(QRect(210, 10, 63, 20));
        QFont font1;
        font1.setPointSize(14);
        AboutLabel->setFont(font1);
        Year = new QLabel(aboutwindow);
        Year->setObjectName(QString::fromUtf8("Year"));
        Year->setGeometry(QRect(20, 340, 31, 20));
        Year->setFont(font);

        retranslateUi(aboutwindow);

        QMetaObject::connectSlotsByName(aboutwindow);
    } // setupUi

    void retranslateUi(QDialog *aboutwindow)
    {
        aboutwindow->setWindowTitle(QCoreApplication::translate("aboutwindow", "Dialog", nullptr));
        Image->setText(QString());
        SiteLabel->setText(QCoreApplication::translate("aboutwindow", "developer.com", nullptr));
        Version->setText(QCoreApplication::translate("aboutwindow", "Version: 1.0", nullptr));
        DeveloperLabel->setText(QCoreApplication::translate("aboutwindow", "Developer: PZ-14 student Prokopchuk Nazarii", nullptr));
        AboutLabel->setText(QCoreApplication::translate("aboutwindow", "About", nullptr));
        Year->setText(QCoreApplication::translate("aboutwindow", "2022", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutwindow: public Ui_aboutwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
