/********************************************************************************
** Form generated from reading UI file 'mainwindow_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_PNR_H
#define UI_MAINWINDOW_PNR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_PNR
{
public:
    QAction *actionNew_PNR;
    QAction *actionSave_PNR;
    QAction *actionSave_as_PNR;
    QAction *actionOpen_PNR;
    QAction *actionPrint_PNR;
    QAction *actionExit_PNR;
    QAction *actionCopy_PNR;
    QAction *actionPaste_PNR;
    QAction *actionCut_PNR;
    QAction *actionUndo_PNR;
    QAction *actionRedo_PNR;
    QAction *actionFont;
    QAction *actionAbout;
    QWidget *centralwidget_PNR;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_PNR;
    QTextEdit *textEdit_PNR;
    QMenuBar *menubar_PNR;
    QMenu *menuFile_PNR;
    QMenu *menuEdit_PNR;
    QMenu *menuHelp;
    QStatusBar *statusbar_PNR;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow_PNR)
    {
        if (MainWindow_PNR->objectName().isEmpty())
            MainWindow_PNR->setObjectName(QString::fromUtf8("MainWindow_PNR"));
        MainWindow_PNR->resize(839, 593);
        actionNew_PNR = new QAction(MainWindow_PNR);
        actionNew_PNR->setObjectName(QString::fromUtf8("actionNew_PNR"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/new.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNew_PNR->setIcon(icon);
        actionSave_PNR = new QAction(MainWindow_PNR);
        actionSave_PNR->setObjectName(QString::fromUtf8("actionSave_PNR"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/save.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave_PNR->setIcon(icon1);
        actionSave_as_PNR = new QAction(MainWindow_PNR);
        actionSave_as_PNR->setObjectName(QString::fromUtf8("actionSave_as_PNR"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as_PNR->setIcon(icon2);
        actionOpen_PNR = new QAction(MainWindow_PNR);
        actionOpen_PNR->setObjectName(QString::fromUtf8("actionOpen_PNR"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/open.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen_PNR->setIcon(icon3);
        actionPrint_PNR = new QAction(MainWindow_PNR);
        actionPrint_PNR->setObjectName(QString::fromUtf8("actionPrint_PNR"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/print.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPrint_PNR->setIcon(icon4);
        actionExit_PNR = new QAction(MainWindow_PNR);
        actionExit_PNR->setObjectName(QString::fromUtf8("actionExit_PNR"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/img/exit.png"), QSize(), QIcon::Normal, QIcon::On);
        actionExit_PNR->setIcon(icon5);
        actionCopy_PNR = new QAction(MainWindow_PNR);
        actionCopy_PNR->setObjectName(QString::fromUtf8("actionCopy_PNR"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/copy.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCopy_PNR->setIcon(icon6);
        actionPaste_PNR = new QAction(MainWindow_PNR);
        actionPaste_PNR->setObjectName(QString::fromUtf8("actionPaste_PNR"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/paste.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPaste_PNR->setIcon(icon7);
        actionCut_PNR = new QAction(MainWindow_PNR);
        actionCut_PNR->setObjectName(QString::fromUtf8("actionCut_PNR"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/cut.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCut_PNR->setIcon(icon8);
        actionUndo_PNR = new QAction(MainWindow_PNR);
        actionUndo_PNR->setObjectName(QString::fromUtf8("actionUndo_PNR"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/undo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUndo_PNR->setIcon(icon9);
        actionRedo_PNR = new QAction(MainWindow_PNR);
        actionRedo_PNR->setObjectName(QString::fromUtf8("actionRedo_PNR"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/redo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRedo_PNR->setIcon(icon10);
        actionFont = new QAction(MainWindow_PNR);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/font.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFont->setIcon(icon11);
        actionAbout = new QAction(MainWindow_PNR);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget_PNR = new QWidget(MainWindow_PNR);
        centralwidget_PNR->setObjectName(QString::fromUtf8("centralwidget_PNR"));
        verticalLayoutWidget = new QWidget(centralwidget_PNR);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 160, 89));
        verticalLayout_PNR = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_PNR->setObjectName(QString::fromUtf8("verticalLayout_PNR"));
        verticalLayout_PNR->setContentsMargins(0, 0, 0, 0);
        textEdit_PNR = new QTextEdit(verticalLayoutWidget);
        textEdit_PNR->setObjectName(QString::fromUtf8("textEdit_PNR"));

        verticalLayout_PNR->addWidget(textEdit_PNR);

        MainWindow_PNR->setCentralWidget(centralwidget_PNR);
        menubar_PNR = new QMenuBar(MainWindow_PNR);
        menubar_PNR->setObjectName(QString::fromUtf8("menubar_PNR"));
        menubar_PNR->setGeometry(QRect(0, 0, 839, 26));
        menuFile_PNR = new QMenu(menubar_PNR);
        menuFile_PNR->setObjectName(QString::fromUtf8("menuFile_PNR"));
        menuEdit_PNR = new QMenu(menubar_PNR);
        menuEdit_PNR->setObjectName(QString::fromUtf8("menuEdit_PNR"));
        menuHelp = new QMenu(menubar_PNR);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow_PNR->setMenuBar(menubar_PNR);
        statusbar_PNR = new QStatusBar(MainWindow_PNR);
        statusbar_PNR->setObjectName(QString::fromUtf8("statusbar_PNR"));
        MainWindow_PNR->setStatusBar(statusbar_PNR);
        toolBar = new QToolBar(MainWindow_PNR);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow_PNR->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar_PNR->addAction(menuFile_PNR->menuAction());
        menubar_PNR->addAction(menuEdit_PNR->menuAction());
        menubar_PNR->addAction(menuHelp->menuAction());
        menuFile_PNR->addAction(actionNew_PNR);
        menuFile_PNR->addAction(actionOpen_PNR);
        menuFile_PNR->addAction(actionSave_PNR);
        menuFile_PNR->addAction(actionSave_as_PNR);
        menuFile_PNR->addAction(actionPrint_PNR);
        menuFile_PNR->addAction(actionExit_PNR);
        menuEdit_PNR->addAction(actionUndo_PNR);
        menuEdit_PNR->addAction(actionRedo_PNR);
        menuEdit_PNR->addAction(actionCopy_PNR);
        menuEdit_PNR->addAction(actionPaste_PNR);
        menuEdit_PNR->addAction(actionCut_PNR);
        menuEdit_PNR->addAction(actionFont);
        menuHelp->addAction(actionAbout);
        toolBar->addAction(actionNew_PNR);
        toolBar->addAction(actionOpen_PNR);
        toolBar->addAction(actionUndo_PNR);
        toolBar->addAction(actionRedo_PNR);
        toolBar->addAction(actionFont);
        toolBar->addAction(actionPrint_PNR);
        toolBar->addAction(actionExit_PNR);

        retranslateUi(MainWindow_PNR);

        QMetaObject::connectSlotsByName(MainWindow_PNR);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_PNR)
    {
        MainWindow_PNR->setWindowTitle(QCoreApplication::translate("MainWindow_PNR", "Notepad_PNR", nullptr));
        actionNew_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "New", nullptr));
        actionSave_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Save", nullptr));
        actionSave_as_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Save as", nullptr));
        actionOpen_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Open", nullptr));
        actionPrint_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Print", nullptr));
        actionExit_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Exit", nullptr));
        actionCopy_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Copy", nullptr));
        actionPaste_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Paste", nullptr));
        actionCut_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Cut", nullptr));
        actionUndo_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Undo", nullptr));
        actionRedo_PNR->setText(QCoreApplication::translate("MainWindow_PNR", "Redo", nullptr));
        actionFont->setText(QCoreApplication::translate("MainWindow_PNR", "Font", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow_PNR", "About", nullptr));
        menuFile_PNR->setTitle(QCoreApplication::translate("MainWindow_PNR", "File", nullptr));
        menuEdit_PNR->setTitle(QCoreApplication::translate("MainWindow_PNR", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow_PNR", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow_PNR", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_PNR: public Ui_MainWindow_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_PNR_H
