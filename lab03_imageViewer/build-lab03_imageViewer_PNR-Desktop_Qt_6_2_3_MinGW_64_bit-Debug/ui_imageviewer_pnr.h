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
    QAction *actionOpen;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionNormal_Size;
    QAction *actionFit_to_Window;
    QAction *actionAbout;
    QAction *actionSave_as;
    QAction *actionCopy;
    QAction *actionPaste;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *imageLabel;
    QMenuBar *menubar_PNR;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuHelp;
    QMenu *menuEdit;

    void setupUi(QMainWindow *ImageViewer_PNR)
    {
        if (ImageViewer_PNR->objectName().isEmpty())
            ImageViewer_PNR->setObjectName(QString::fromUtf8("ImageViewer_PNR"));
        ImageViewer_PNR->resize(800, 600);
        actionOpen = new QAction(ImageViewer_PNR);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionPrint = new QAction(ImageViewer_PNR);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionPrint->setEnabled(false);
        actionExit = new QAction(ImageViewer_PNR);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionZoom_In = new QAction(ImageViewer_PNR);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        actionZoom_In->setEnabled(false);
        actionZoom_Out = new QAction(ImageViewer_PNR);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        actionZoom_Out->setEnabled(false);
        actionNormal_Size = new QAction(ImageViewer_PNR);
        actionNormal_Size->setObjectName(QString::fromUtf8("actionNormal_Size"));
        actionNormal_Size->setEnabled(false);
        actionFit_to_Window = new QAction(ImageViewer_PNR);
        actionFit_to_Window->setObjectName(QString::fromUtf8("actionFit_to_Window"));
        actionFit_to_Window->setEnabled(false);
        actionAbout = new QAction(ImageViewer_PNR);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSave_as = new QAction(ImageViewer_PNR);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionSave_as->setEnabled(false);
        actionCopy = new QAction(ImageViewer_PNR);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCopy->setEnabled(false);
        actionPaste = new QAction(ImageViewer_PNR);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste->setEnabled(false);
        centralwidget = new QWidget(ImageViewer_PNR);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(150, 210, 120, 87));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 85));
        imageLabel = new QLabel(scrollAreaWidgetContents);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(10, 30, 63, 20));
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        scrollArea->setWidget(scrollAreaWidgetContents);
        ImageViewer_PNR->setCentralWidget(centralwidget);
        menubar_PNR = new QMenuBar(ImageViewer_PNR);
        menubar_PNR->setObjectName(QString::fromUtf8("menubar_PNR"));
        menubar_PNR->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar_PNR);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar_PNR);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar_PNR);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar_PNR);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        ImageViewer_PNR->setMenuBar(menubar_PNR);

        menubar_PNR->addAction(menuFile->menuAction());
        menubar_PNR->addAction(menuEdit->menuAction());
        menubar_PNR->addAction(menuView->menuAction());
        menubar_PNR->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuView->addAction(actionNormal_Size);
        menuView->addSeparator();
        menuView->addAction(actionFit_to_Window);
        menuHelp->addAction(actionAbout);
        menuEdit->addAction(actionCopy);

        retranslateUi(ImageViewer_PNR);

        QMetaObject::connectSlotsByName(ImageViewer_PNR);
    } // setupUi

    void retranslateUi(QMainWindow *ImageViewer_PNR)
    {
        ImageViewer_PNR->setWindowTitle(QCoreApplication::translate("ImageViewer_PNR", "ImageViewer_PNR", nullptr));
        actionOpen->setText(QCoreApplication::translate("ImageViewer_PNR", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("ImageViewer_PNR", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("ImageViewer_PNR", "Print", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("ImageViewer_PNR", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("ImageViewer_PNR", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("ImageViewer_PNR", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_In->setText(QCoreApplication::translate("ImageViewer_PNR", "Zoom In", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_In->setShortcut(QCoreApplication::translate("ImageViewer_PNR", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_Out->setText(QCoreApplication::translate("ImageViewer_PNR", "Zoom Out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_Out->setShortcut(QCoreApplication::translate("ImageViewer_PNR", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNormal_Size->setText(QCoreApplication::translate("ImageViewer_PNR", "Normal Size", nullptr));
#if QT_CONFIG(shortcut)
        actionNormal_Size->setShortcut(QCoreApplication::translate("ImageViewer_PNR", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFit_to_Window->setText(QCoreApplication::translate("ImageViewer_PNR", "Fit to Window", nullptr));
#if QT_CONFIG(shortcut)
        actionFit_to_Window->setShortcut(QCoreApplication::translate("ImageViewer_PNR", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("ImageViewer_PNR", "About", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("ImageViewer_PNR", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("ImageViewer_PNR", "Save as", nullptr));
        actionCopy->setText(QCoreApplication::translate("ImageViewer_PNR", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("ImageViewer_PNR", "Paste", nullptr));
        imageLabel->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("ImageViewer_PNR", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("ImageViewer_PNR", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("ImageViewer_PNR", "Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("ImageViewer_PNR", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageViewer_PNR: public Ui_ImageViewer_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_PNR_H
