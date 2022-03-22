/********************************************************************************
** Form generated from reading UI file 'imageviewer_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_PNR_H
#define UI_IMAGEVIEWER_PNR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewer_PNR
{
public:
    QAction *actionOpen_PNR;
    QAction *actionSave_as_PNR;
    QAction *actionZoom_In_PNR;
    QAction *actionZoom_Out_PNR;
    QAction *actionAbout_PNR;
    QAction *actionNormal_Size;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_PNR;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_PNR;
    QGridLayout *gridLayout_5;
    QLabel *imageLabel_PNR;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTool;
    QMenu *menuHelp;

    void setupUi(QMainWindow *ImageViewer_PNR)
    {
        if (ImageViewer_PNR->objectName().isEmpty())
            ImageViewer_PNR->setObjectName(QString::fromUtf8("ImageViewer_PNR"));
        ImageViewer_PNR->resize(643, 533);
        actionOpen_PNR = new QAction(ImageViewer_PNR);
        actionOpen_PNR->setObjectName(QString::fromUtf8("actionOpen_PNR"));
        actionSave_as_PNR = new QAction(ImageViewer_PNR);
        actionSave_as_PNR->setObjectName(QString::fromUtf8("actionSave_as_PNR"));
        actionZoom_In_PNR = new QAction(ImageViewer_PNR);
        actionZoom_In_PNR->setObjectName(QString::fromUtf8("actionZoom_In_PNR"));
        actionZoom_Out_PNR = new QAction(ImageViewer_PNR);
        actionZoom_Out_PNR->setObjectName(QString::fromUtf8("actionZoom_Out_PNR"));
        actionAbout_PNR = new QAction(ImageViewer_PNR);
        actionAbout_PNR->setObjectName(QString::fromUtf8("actionAbout_PNR"));
        actionNormal_Size = new QAction(ImageViewer_PNR);
        actionNormal_Size->setObjectName(QString::fromUtf8("actionNormal_Size"));
        centralwidget = new QWidget(ImageViewer_PNR);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_PNR = new QGridLayout();
        gridLayout_PNR->setSpacing(0);
        gridLayout_PNR->setObjectName(QString::fromUtf8("gridLayout_PNR"));
        gridLayout_PNR->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_PNR = new QWidget();
        scrollAreaWidgetContents_PNR->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_PNR"));
        scrollAreaWidgetContents_PNR->setGeometry(QRect(0, 0, 617, 481));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents_PNR->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_PNR->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_PNR);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        imageLabel_PNR = new QLabel(scrollAreaWidgetContents_PNR);
        imageLabel_PNR->setObjectName(QString::fromUtf8("imageLabel_PNR"));
        imageLabel_PNR->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(imageLabel_PNR->sizePolicy().hasHeightForWidth());
        imageLabel_PNR->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(imageLabel_PNR, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_PNR);

        gridLayout_PNR->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_PNR, 0, 0, 1, 1);

        ImageViewer_PNR->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ImageViewer_PNR);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 643, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTool = new QMenu(menubar);
        menuTool->setObjectName(QString::fromUtf8("menuTool"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        ImageViewer_PNR->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTool->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen_PNR);
        menuFile->addAction(actionSave_as_PNR);
        menuTool->addAction(actionZoom_In_PNR);
        menuTool->addAction(actionZoom_Out_PNR);
        menuTool->addAction(actionNormal_Size);
        menuHelp->addAction(actionAbout_PNR);

        retranslateUi(ImageViewer_PNR);

        QMetaObject::connectSlotsByName(ImageViewer_PNR);
    } // setupUi

    void retranslateUi(QMainWindow *ImageViewer_PNR)
    {
        ImageViewer_PNR->setWindowTitle(QCoreApplication::translate("ImageViewer_PNR", "ImageViewer_PNR", nullptr));
        actionOpen_PNR->setText(QCoreApplication::translate("ImageViewer_PNR", "Open", nullptr));
        actionSave_as_PNR->setText(QCoreApplication::translate("ImageViewer_PNR", "Save", nullptr));
        actionZoom_In_PNR->setText(QCoreApplication::translate("ImageViewer_PNR", "Zoom In", nullptr));
        actionZoom_Out_PNR->setText(QCoreApplication::translate("ImageViewer_PNR", "Zoom Out", nullptr));
        actionAbout_PNR->setText(QCoreApplication::translate("ImageViewer_PNR", "About", nullptr));
        actionNormal_Size->setText(QCoreApplication::translate("ImageViewer_PNR", "Normal Size", nullptr));
        imageLabel_PNR->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("ImageViewer_PNR", "File", nullptr));
        menuTool->setTitle(QCoreApplication::translate("ImageViewer_PNR", "Tool", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("ImageViewer_PNR", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageViewer_PNR: public Ui_ImageViewer_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_PNR_H
