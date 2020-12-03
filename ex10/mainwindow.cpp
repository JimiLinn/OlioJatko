#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"
#include <QString>

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

void MainWindow::on_btnShow_clicked()
{
    QList<student*> studentList;
    student student_1, student_2,student_3;
    studentList.append(&student_1);
    studentList.append(&student_2);
    studentList.append(&student_3);

    student_1.setFirstName("Matti");
    student_1.setLastName("Mainio");
    student_2.setFirstName("Teppo");
    student_2.setLastName("Testi");
    student_3.setFirstName("Jussi");
    student_3.setLastName("Juonio");

    QStandardItemModel *table_model = new QStandardItemModel(studentList.size(),2);
    table_model->setHeaderData(0, Qt::Horizontal, QObject::tr("Etunimi"));
    table_model->setHeaderData(1, Qt::Horizontal, QObject::tr("Sukunimi"));

    for (int row = 0; row < studentList.size(); ++row) {
            QStandardItem *fName = new QStandardItem((studentList[row]->getFirstName()));
            table_model->setItem(row, 0, fName);
            QStandardItem *lName = new QStandardItem((studentList[row]->getLastName()));
            table_model->setItem(row, 1, lName);
    }

    ui->tableStudents->setModel(table_model);
}

void MainWindow::on_tableStudents_clicked(const QModelIndex &index)
{
    QVariant value=index.sibling(index.row(),index.column()).data();
    QString selected_value=QVariant(value).toString();

    ui->labelResult->setText("Valittu "+selected_value);
}
