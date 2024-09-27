#include "NoteImpView/MainWindow.h"

using namespace NoteImp::View;

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::NoteImpClass())
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addNewTab(const QString &title = "New File", const QString &text = "")
{
    QWidget* newTab = new QWidget();
    int newTabIndex = ui->tabWidget->currentIndex() + 1;
    newTab->setObjectName(QString("tab_%1").arg(newTabIndex));
    QHBoxLayout* horizontalLayout = new QHBoxLayout(newTab);
    horizontalLayout->setSpacing(6);
    horizontalLayout->setContentsMargins(11, 11, 11, 11);
    horizontalLayout->setObjectName(QString("horizontalLayout_%1").arg(newTabIndex));
    horizontalLayout->setContentsMargins(2, 2, 2, 2);
    QTextEdit* textEdit = new QTextEdit(newTab);
    textEdit->setObjectName("textEdit");
    textEdit->setPlainText(text);
    horizontalLayout->addWidget(textEdit);
    ui->tabWidget->addTab(newTab, title);
    ui->tabWidget->setCurrentIndex(newTabIndex);
}

// Action slots
void MainWindow::on_actionNew_triggered()
{
    emit newFile();
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    if (fileName.isEmpty())
        return;
    emit openFile(fileName);
}

void MainWindow::on_actionSave_triggered() {}
void MainWindow::on_actionSave_as_triggered() {}

void MainWindow::on_tabWidget_tabCloseRequested(int tabIndex)
{
    ui->tabWidget->removeTab(tabIndex);
    emit closeFile(tabIndex);
}
