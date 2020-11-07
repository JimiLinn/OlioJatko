#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSave_clicked()
{
student *stu = new student();
stu->setFirstName(ui->lineEditFname->text());
stu->setLastName(ui->lineEditLname->text());

ui->labelResult->setText("Terve "+stu->getFirstName()+ " "+stu->getLastName());

delete stu;
stu=nullptr;
}
