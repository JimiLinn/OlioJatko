#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "untitled1.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
}

void MainWindow::on_btnRun_clicked()
{
    myObject = new Untitled1();
    bool ageNumberTest;
    int ageGiven=ui->lineEditAge->text().toInt(&ageNumberTest);
    if(!ageNumberTest){
        ui->labelResult->setText("Anna kokonaisluku!");
        ui->lineEditAge->setFocus();
    }
    else {
        myObject->setAge(ageGiven);
        int born_year=myObject->getBornYear();

        QVariant ageToPrint=QVariant(born_year);
        ui->labelResult->setText("Terve olet siis syntynyt vuonna "+ageToPrint.toString());

        delete myObject;
        myObject=nullptr;
    }
}
