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

void NoteImp::addNewTab(const QString &title = "New File", const QString &text = "")
{
    QWidget* newTab = new QWidget();
    newTab->setObjectName(QString("tab_%1").arg(ui->tabWidget->count() + 1));
    QHBoxLayout* horizontalLayout = new QHBoxLayout(newTab);
    horizontalLayout->setSpacing(6);
    horizontalLayout->setContentsMargins(11, 11, 11, 11);
    horizontalLayout->setObjectName(QString("horizontalLayout_%1").arg(ui->tabWidget->count() + 1));
    horizontalLayout->setContentsMargins(2, 2, 2, 2);
    QTextEdit* textEdit = new QTextEdit(text, newTab);
    textEdit->setObjectName("textEdit");
    horizontalLayout->addWidget(textEdit);
    ui->tabWidget->addTab(newTab, title);
}

const QString NoteImp::getFileBasename(const QString &fileName)
{
    int fileBasenameIndex = fileName.lastIndexOf("/");
    return fileName.last(fileBasenameIndex + 1);
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
    QTextStream in(&file);
    QString text = in.readAll();
    file.close();
    const QString fileBasename = getFileBasename(fileName);
    addNewTab(fileBasename, text);
}

void NoteImp::on_actionSave_triggered() {}
void NoteImp::on_actionSave_as_triggered() {}
