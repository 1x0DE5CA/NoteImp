#include <QtWidgets/QApplication>

#include "NoteImpView/MainWindow.h"
#include "NoteImpController/AppController.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    NoteImp::View::MainWindow mainWindow;
    NoteImp::Controller::AppController appController(&mainWindow);
    mainWindow.show();
    return app.exec();
}
