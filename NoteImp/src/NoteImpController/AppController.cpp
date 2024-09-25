#include "NoteImpController/AppController.h"

using namespace NoteImp::Controller;
using NI_MainWindow = NoteImp::View::MainWindow;
using NI_File = NoteImp::Model::File;

AppController::AppController(NI_MainWindow* mainWindow, QObject* parent)
    : QObject(parent), mainWindow(mainWindow)
{
    connect(mainWindow, &NI_MainWindow::fileOpen, this, &AppController::on_fileOpen);
}

// Slots
void AppController::on_fileOpen(const QString fileName)
{
    try {
        NI_File file(fileName);
        QString text = file.getContent();
        const QString fileName = file.getFileName();
        files.push_back(std::move(file));
        mainWindow->addNewTab(fileName, text);
    } catch (const std::runtime_error& e) {
        QMessageBox::warning(mainWindow, "Warning", "Cannot open file: " + QString::fromStdString(e.what()));
    }
}