#ifndef NOTEIMP_H
#define NOTEIMP_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

#include "ui_NoteImp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class NoteImpClass; };
QT_END_NAMESPACE

class NoteImp : public QMainWindow
{
    Q_OBJECT

public:
    NoteImp(QWidget *parent = nullptr);
    ~NoteImp();

private:
    Ui::NoteImpClass *ui;

    void addNewTab(const QString &, const QString &);
    const QString getFileBasename(const QString &);

private slots:
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();
};

#endif // !NOTEIMP_H
