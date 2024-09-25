/********************************************************************************
** Form generated from reading UI file 'NoteImpzFfrCV.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NOTEIMPZFFRCV_H
#define NOTEIMPZFFRCV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoteImpClass
{
public:
    QAction* actionNew;
    QAction* actionOpen;
    QAction* actionSave;
    QAction* actionSave_as;
    QWidget* centralWidget;
    QHBoxLayout* horizontalLayout_1;
    QTabWidget* tabWidget;
    QWidget* tab_1;
    QHBoxLayout* horizontalLayout_2;
    QTextEdit* textEdit;
    QMenuBar* menuBar;
    QMenu* menuFile;
    QMenu* menuEdit;
    QStatusBar* statusBar;

    void setupUi(QMainWindow* NoteImpClass)
    {
        if (NoteImpClass->objectName().isEmpty())
            NoteImpClass->setObjectName("NoteImpClass");
        NoteImpClass->resize(800, 600);
        NoteImpClass->setTabShape(QTabWidget::TabShape::Rounded);
        actionNew = new QAction(NoteImpClass);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(NoteImpClass);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(NoteImpClass);
        actionSave->setObjectName("actionSave");
        actionSave_as = new QAction(NoteImpClass);
        actionSave_as->setObjectName("actionSave_as");
        centralWidget = new QWidget(NoteImpClass);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_1 = new QHBoxLayout(centralWidget);
        horizontalLayout_1->setSpacing(0);
        horizontalLayout_1->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        horizontalLayout_2 = new QHBoxLayout(tab_1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        textEdit = new QTextEdit(tab_1);
        textEdit->setObjectName("textEdit");

        horizontalLayout_2->addWidget(textEdit);

        tabWidget->addTab(tab_1, QString());

        horizontalLayout_1->addWidget(tabWidget);

        NoteImpClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NoteImpClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName("menuEdit");
        NoteImpClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(NoteImpClass);
        statusBar->setObjectName("statusBar");
        statusBar->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy);
        statusBar->setAutoFillBackground(false);
        statusBar->setStyleSheet(QString::fromUtf8(""));
        statusBar->setSizeGripEnabled(false);
        NoteImpClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);

        retranslateUi(NoteImpClass);

        QMetaObject::connectSlotsByName(NoteImpClass);
    } // setupUi

    void retranslateUi(QMainWindow* NoteImpClass)
    {
        NoteImpClass->setWindowTitle(QCoreApplication::translate("NoteImpClass", "NoteImp", nullptr));
        actionNew->setText(QCoreApplication::translate("NoteImpClass", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("NoteImpClass", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("NoteImpClass", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("NoteImpClass", "Save as...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("NoteImpClass", "New File", nullptr));
        menuFile->setTitle(QCoreApplication::translate("NoteImpClass", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("NoteImpClass", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoteImpClass: public Ui_NoteImpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NOTEIMPZFFRCV_H
