#ifndef APP_CONTROLLER_H
#define APP_CONTROLLER_H

#include <vector>
#include <memory>

#include <QObject>
#include <QMessageBox>

#include "NoteImpView/MainWindow.h"
#include "NoteImpModel/File.h"

namespace NoteImp
{
    namespace Controller
    {
        class AppController : public QObject
        {
            Q_OBJECT

        public:
            AppController(NoteImp::View::MainWindow* mainWindow, QObject* parent = nullptr);

        private:
            NoteImp::View::MainWindow* mainWindow;
            std::vector<NoteImp::Model::File> files;
            void addNewFile(const QString &);

        private slots:
            void on_newFile();
            void on_openFile(const QString &);
            void on_closeFile(int);
            void on_saveFile(const QString &);
        };
    }
}

#endif // !APP_CONTROLLER_H
