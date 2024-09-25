#ifndef FILE_H
#define FILE_H

#include <stdexcept>

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QFileInfo>

namespace NoteImp {
    namespace Model {
        class File
        {
        public:
            File(const QString &fileName);
            const QString getFileName();
            const QString getContent();

        private:
            const QString fileName;
            QString content;
            QFileInfo fileInfo;
            bool isModified;

            void readFromFile();
        };
    }
}

#endif // !FILE_H
