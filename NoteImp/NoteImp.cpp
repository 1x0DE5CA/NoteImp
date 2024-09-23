#include "NoteImp.h"

NoteImp::NoteImp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NoteImpClass())
{
    ui->setupUi(this);
}

NoteImp::~NoteImp()
{
    delete ui;
}
