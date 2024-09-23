#include "NoteImp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NoteImp w;
    w.show();
    return a.exec();
}
