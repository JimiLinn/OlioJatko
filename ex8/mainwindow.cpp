#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mysingleton.h"

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

void MainWindow::on_btnset_clicked()
{
    MySingleton *my = MySingleton::getInstance();
    my->setName("Teppo Testi");
}

void MainWindow::on_btnget_clicked()
{
    MySingleton *my = MySingleton::getInstance();
    QString singletonName=my->getName();
    ui->labelResult->setText(singletonName);
}
