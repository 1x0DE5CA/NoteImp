#include "NoteImpController/AppController.h"

using namespace NoteImp::Controller;
using NI_MainWindow = NoteImp::View::MainWindow;
using NI_File = NoteImp::Model::File;

AppController::AppController(NoteImp::View::MainWindow *mainWindow, QObject *parent)
    : QObject(parent)
    , mainWindow(mainWindow)
{
    connect(mainWindow, &NI_MainWindow::newFile, this, &AppController::on_newFile);
    connect(mainWindow, &NI_MainWindow::openFile, this, &AppController::on_openFile);
    connect(mainWindow, &NI_MainWindow::closeFile, this, &AppController::on_closeFile);
}

void AppController::addNewFile(const QString &fileName = "")
{
    try {
        NI_File file(fileName);
        file.openOrCreate();
        const QString text = file.getContent();
        const QString fileName = file.getFileName();
        files.push_back(std::move(file));
        mainWindow->addNewTab(fileName, text);
    } catch (const std::runtime_error &e) {
        QMessageBox::warning(mainWindow, "Warning", "Cannot open file: " + QString::fromStdString(e.what()));
    }
}

// Slots
void AppController::on_newFile()
{
    addNewFile();
}

void AppController::on_openFile(const QString &fileName)
{
    addNewFile(fileName);
}

void AppController::on_saveFile(const QString &fileName)
{
    saveFile(fileName);
}

void AppController::on_closeFile(int index)
{
    files.erase(files.begin() + index);
}