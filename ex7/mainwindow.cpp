#include "mainwindow.h"
#include "person.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete pe;
    pe=nullptr;
    delete ui;
    ui=nullptr;
}

void MainWindow::on_btnSet_clicked()
{
   pe = new Person();
   pe->setName("Liisa");
   ui->labelResult->setText("Nimi Asetettu");
   ui->btnShowIfSetted->setEnabled(true);
}

void MainWindow::on_btnShow_clicked()
{
  Person *pe = new Person();
  if(pe !=nullptr){
      ui->labelResult->setText(pe->getName());
  }
  else{
      ui->labelResult->setText("Aseta ensin nimi");
  }
}

void MainWindow::on_btnShowIfSetted_clicked()
{
    ui->labelResult->setText(pe->getName());
}
