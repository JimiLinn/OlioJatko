#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondform.h"
#include "thirdform.h"
#include "fourthform.h"

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

void MainWindow::on_btnOpenSecondForm_clicked()
{
    SecondForm *sf=new SecondForm("Jussi");
    sf->show();
}

void MainWindow::on_btnOpenThirdForm_clicked()
{
    ThirdForm *tf=new ThirdForm();
    tf->setNameFromMain("Maija");
    tf->show();
}

void MainWindow::on_btnOpenFourthForm_clicked()
{
    FourthForm *ff = new FourthForm();
    ff->setAttribute( Qt::WA_DeleteOnClose, true );
    ff->show();
}
