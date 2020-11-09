#include "fourthform.h"
#include "ui_fourthform.h"

FourthForm::FourthForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FourthForm)
{
    setWindowFlags(Qt::WindowTitleHint | Qt::WindowMinimizeButtonHint);
    ui->setupUi(this);
}

FourthForm::~FourthForm()
{
    delete ui;
}

void FourthForm::on_btnClose_clicked()
{
    this->close();
}
