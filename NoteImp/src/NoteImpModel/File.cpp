#include "NoteImpModel/File.h"

using namespace NoteImp::Model;

File::File(const QString &fileName)
    : fileName(fileName), fileInfo(fileName), isModified(false)
{
    readFromFile();
}

void File::readFromFile()
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        throw std::runtime_error(file.errorString().toStdString());
    }
    QTextStream in(&file);
    content = in.readAll();
    file.close();
}

const QString File::getFileName()
{
    return fileInfo.fileName();
}

const QString File::getContent()
{
    return content;
}