#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

#include "../UI/ui_NoteImp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class NoteImpClass; };
QT_END_NAMESPACE

namespace NoteImp
{
    namespace View
    {
        class MainWindow : public QMainWindow
        {
            Q_OBJECT

        public:
            MainWindow(QWidget* parent = nullptr);
            ~MainWindow();
            void addNewTab(const QString &, const QString &);

        signals:
            void fileOpen(const QString);
            void fileSave();

        private:
            Ui::NoteImpClass* ui;

        private slots:
            void on_actionNew_triggered();
            void on_actionOpen_triggered();
            void on_actionSave_triggered();
            void on_actionSave_as_triggered();
            void on_tabWidget_tabCloseRequested(int);
        };
    }
}


#endif // !MAINWINDOW_H
