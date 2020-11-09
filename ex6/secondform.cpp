#include "secondform.h"
#include "ui_secondform.h"

SecondForm::SecondForm(QString name, QWidget *parent)   :
QWidget(parent),
ui(new Ui::SecondForm)
{
    ui->setupUi(this);
    ui->labelInfo->setText(name);
}

SecondForm::~SecondForm()
{
    delete ui;
}
