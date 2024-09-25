#include "NoteImpController/AppController.h"

NoteImp::Controller::AppController::AppController(NoteImp::View::MainWindow* mainWindow, QObject* parent)
    : QObject(parent), mainWindow(mainWindow)
{
    connect(mainWindow, &NoteImp::View::MainWindow::fileOpen, this, &NoteImp::Controller::AppController::on_fileOpen);
}

NoteImp::Controller::AppController::~AppController()
{
    delete mainWindow;
}


const QString NoteImp::Controller::AppController::getFileBasename(const QString &fileName)
{
    return fileName.sliced(fileName.lastIndexOf("/") + 1);
}

// Slots
void NoteImp::Controller::AppController::on_fileOpen(const QString fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(mainWindow, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    file.close();
    const QString fileBasename = getFileBasename(fileName);
    mainWindow->addNewTab(fileBasename, text);
}