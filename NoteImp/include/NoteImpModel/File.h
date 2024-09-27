#ifndef FILE_H
#define FILE_H

#include <stdexcept>

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QFileInfo>
#include <QTemporaryFile>

namespace NoteImp {
    namespace Model {
        class File
        {
        public:
            File(const QString &);
            const QString getContent();
            const QString getFileName();
            void openOrCreate();

        private:
            QString fileName;
            QString content;
            QFileInfo fileInfo;
            bool isModified;
            void readFromFile();
            void getNewTempFile();
        };
    }
}

#endif // !FILE_H
