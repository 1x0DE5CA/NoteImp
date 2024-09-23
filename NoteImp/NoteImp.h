#pragma once

#include <QtWidgets/QMainWindow>
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
};
