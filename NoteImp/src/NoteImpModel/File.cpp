#include "NoteImpModel/File.h"

using namespace NoteImp::Model;

File::File(const QString &fileName)
    : fileName(fileName), fileInfo(fileName), isModified(false)
{}

void File::getNewTempFile()
{
    QTemporaryFile newFile("noteimp_tmp");
    if (newFile.open()) {
        fileName = newFile.fileName();
        fileInfo = QFileInfo(newFile);
    }
}

void File::readFromFile()
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        throw std::runtime_error(file.errorString().toStdString());
    }
    QTextStream in(&file);
    content = in.readAll();
}

void File::openOrCreate()
{
    if (fileName.isEmpty()) {
        getNewTempFile();
    } else {
        readFromFile();
    }
}

void File::saveFile()
{
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        throw std::runtime_error(file.errorString().toStdString());
    }
    QTextStream out(&file);
    out << content;
}

const QString File::getFileName()
{
    // Why is it so fucking hard to have a distinctive name for something?
    return fileInfo.fileName();
}

const QString File::getContent()
{
    return content;
}