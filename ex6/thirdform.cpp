#include "thirdform.h"
#include "ui_thirdform.h"

ThirdForm::ThirdForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThirdForm)
{
    ui->setupUi(this);
}

ThirdForm::~ThirdForm()
{
    delete ui;
}

QString ThirdForm::getNameFromMain() const
{
    return nameFromMain;
}

void ThirdForm::setNameFromMain(const QString &value)
{
    nameFromMain = value;
}

void ThirdForm::on_btnShow_clicked()
{
    ui->labelInfo->setText(this->getNameFromMain());
}
