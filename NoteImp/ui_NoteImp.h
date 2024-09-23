/********************************************************************************
** Form generated from reading UI file 'NoteImpOzOlGj.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NOTEIMPOZOLGJ_H
#define NOTEIMPOZOLGJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoteImpClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NoteImpClass)
    {
        if (NoteImpClass->objectName().isEmpty())
            NoteImpClass->setObjectName("NoteImpClass");
        NoteImpClass->resize(600, 400);
        centralWidget = new QWidget(NoteImpClass);
        centralWidget->setObjectName("centralWidget");
        NoteImpClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NoteImpClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        NoteImpClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NoteImpClass);
        mainToolBar->setObjectName("mainToolBar");
        NoteImpClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NoteImpClass);
        statusBar->setObjectName("statusBar");
        NoteImpClass->setStatusBar(statusBar);

        retranslateUi(NoteImpClass);

        QMetaObject::connectSlotsByName(NoteImpClass);
    } // setupUi

    void retranslateUi(QMainWindow *NoteImpClass)
    {
        NoteImpClass->setWindowTitle(QCoreApplication::translate("NoteImpClass", "NoteImp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoteImpClass: public Ui_NoteImpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NOTEIMPOZOLGJ_H
