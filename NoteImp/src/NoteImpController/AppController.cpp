#include "NoteImpController/AppController.h"

using namespace NoteImp::Controller;

AppController::AppController(NoteImp::View::MainWindow* mainWindow, QObject* parent)
    : QObject(parent), mainWindow(mainWindow)
{
    connect(mainWindow, &NoteImp::View::MainWindow::fileOpen, this, &NoteImp::Controller::AppController::on_fileOpen);
}

// Slots
void AppController::on_fileOpen(const QString fileName)
{
    try {
        NoteImp::Model::File file(fileName);
        QString text = file.getContent();
        const QString fileName = file.getFileName();
        files.push_back(std::move(file));
        mainWindow->addNewTab(fileName, text);
    } catch (const std::runtime_error& e) {
        QMessageBox::warning(mainWindow, "Warning", "Cannot open file: " + QString::fromStdString(e.what()));
    }
}