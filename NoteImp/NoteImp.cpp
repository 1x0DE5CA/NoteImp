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

void NoteImp::addNewTab() {}

const QString NoteImp::getFileBasename(const QString &fileName)
{
    int fileBasenameIndex = fileName.lastIndexOf("/");
    fileName.last(fileBasenameIndex);
}

// Action slots
void NoteImp::on_actionNew_triggered()
{
    addNewTab();
}

void NoteImp::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    if (fileName.isEmpty())
        return;
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    addNewTab();
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void NoteImp::on_actionSave_triggered() {}
void NoteImp::on_actionSave_as_triggered() {}
