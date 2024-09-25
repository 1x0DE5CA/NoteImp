#ifndef APP_CONTROLLER_H
#define APP_CONTROLLER_H

#include <QObject>
#include <QMessageBox>

#include "NoteImpView/MainWindow.h"

namespace NoteImp
{
    namespace Controller
    {
        class AppController : public QObject
        {
            Q_OBJECT

        public:
            AppController(NoteImp::View::MainWindow* mainWindow, QObject* parent = nullptr);
            ~AppController();

        private:
            NoteImp::View::MainWindow* mainWindow;

            const QString getFileBasename(const QString &);

        private slots:
            void on_fileOpen(const QString);
        };
    }
}

#endif // !APP_CONTROLLER_H
