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

class Ui_aboutWindow
{
public:
    QLabel *AboutLabel;
    QLabel *SiteLabel;
    QLabel *DeveloperLabel;
    QLabel *Year;
    QLabel *Image;
    QLabel *Version;

    void setupUi(QDialog *aboutWindow)
    {
        if (aboutWindow->objectName().isEmpty())
            aboutWindow->setObjectName(QString::fromUtf8("aboutWindow"));
        aboutWindow->resize(500, 400);
        aboutWindow->setMinimumSize(QSize(500, 400));
        aboutWindow->setMaximumSize(QSize(500, 400));
        AboutLabel = new QLabel(aboutWindow);
        AboutLabel->setObjectName(QString::fromUtf8("AboutLabel"));
        AboutLabel->setGeometry(QRect(210, 20, 63, 20));
        QFont font;
        font.setPointSize(14);
        AboutLabel->setFont(font);
        SiteLabel = new QLabel(aboutWindow);
        SiteLabel->setObjectName(QString::fromUtf8("SiteLabel"));
        SiteLabel->setGeometry(QRect(70, 350, 131, 20));
        QFont font1;
        font1.setPointSize(9);
        SiteLabel->setFont(font1);
        DeveloperLabel = new QLabel(aboutWindow);
        DeveloperLabel->setObjectName(QString::fromUtf8("DeveloperLabel"));
        DeveloperLabel->setGeometry(QRect(20, 290, 461, 20));
        DeveloperLabel->setFont(font1);
        Year = new QLabel(aboutWindow);
        Year->setObjectName(QString::fromUtf8("Year"));
        Year->setGeometry(QRect(20, 350, 31, 20));
        Year->setFont(font1);
        Image = new QLabel(aboutWindow);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(20, 70, 461, 201));
        Image->setPixmap(QPixmap(QString::fromUtf8(":/img/papich.jpg")));
        Image->setScaledContents(true);
        Version = new QLabel(aboutWindow);
        Version->setObjectName(QString::fromUtf8("Version"));
        Version->setGeometry(QRect(20, 320, 461, 20));
        Version->setFont(font1);

        retranslateUi(aboutWindow);

        QMetaObject::connectSlotsByName(aboutWindow);
    } // setupUi

    void retranslateUi(QDialog *aboutWindow)
    {
        aboutWindow->setWindowTitle(QCoreApplication::translate("aboutWindow", "Dialog", nullptr));
        AboutLabel->setText(QCoreApplication::translate("aboutWindow", "About", nullptr));
        SiteLabel->setText(QCoreApplication::translate("aboutWindow", "developer.com", nullptr));
        DeveloperLabel->setText(QCoreApplication::translate("aboutWindow", "Developer: PZ-14 student Prokopchuk Nazarii", nullptr));
        Year->setText(QCoreApplication::translate("aboutWindow", "2022", nullptr));
        Image->setText(QString());
        Version->setText(QCoreApplication::translate("aboutWindow", "Version: 1.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutWindow: public Ui_aboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
