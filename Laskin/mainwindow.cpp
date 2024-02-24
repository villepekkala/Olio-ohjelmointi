#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
double firstNum;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect (ui ->btn0,SIGNAL(released()), this,SLOT (numberClickedHandler()));
 connect (ui ->btn1,SIGNAL(released()), this,SLOT (numberClickedHandler()));
     connect (ui ->btn2,SIGNAL(released()), this,SLOT (numberClickedHandler()));
  connect (ui ->btn3,SIGNAL(released()), this,SLOT (numberClickedHandler()));
      connect (ui ->btn4,SIGNAL(released()), this,SLOT (numberClickedHandler()));
   connect (ui ->btn5,SIGNAL(released()), this,SLOT (numberClickedHandler()));
       connect (ui ->btn6,SIGNAL(released()), this,SLOT (numberClickedHandler()));
    connect (ui ->btn7,SIGNAL(released()), this,SLOT (numberClickedHandler()));
        connect (ui ->btn8,SIGNAL(released()), this,SLOT (numberClickedHandler()));
     connect (ui ->btn9,SIGNAL(released()), this,SLOT (numberClickedHandler()));

      connect(ui->add,SIGNAL(released()),this,SLOT(addSubMulDivClickHandler()));
         connect(ui->mult,SIGNAL(released()),this,SLOT(addSubMulDivClickHandler()));
         connect(ui->div,SIGNAL(released()),this,SLOT(addSubMulDivClickHandler()));
         connect(ui->sub,SIGNAL(released()),this,SLOT(addSubMulDivClickHandler()));

         ui->add->setCheckable(true);
         ui->mult->setCheckable(true);
         ui->div->setCheckable(true);
         ui->sub->setCheckable(true);

         connect(ui->btnenter,SIGNAL(released()),this,SLOT(clearAndEnterClickHandler()));
         connect(ui->btnclear,SIGNAL(released()),this,SLOT(clearAndEnterClickHandler()));

          ui->btnenter->setCheckable(true);
          ui->btnclear->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::numberClickedHandler()
{
    QPushButton * button = (QPushButton*)sender();

    QString newNumber;
    if (ui->add->isChecked() || ui->sub->isChecked() || ui->mult->isChecked() || ui->div->isChecked())
    {
        secondNum = button->text().toDouble();
        newNumber2 = QString::number(secondNum, 'g', 16);
        ui->line2->setText(newNumber2);

    }
    else
    {
        Number =(ui->line1->text() + button->text()).toDouble();
        newNumber = QString::number(Number, 'g', 16);
        ui->line1->setText(newNumber);

    }
}

void MainWindow::clearAndEnterClickHandler()
{
       QString newLabel;
       QPushButton * button = (QPushButton*)sender();

    if (ui->add->isChecked() )
    {

        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->add->setChecked(true);
    }
    else if (ui->div->isChecked() )
    {        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->div->setChecked(true);
    }
    else if (ui->mult->isChecked() )
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->mult->setChecked(true);
    }
    else if (ui->sub->isChecked() )
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->sub->setChecked(true);
    }
    result=newLabel;
    if (ui->btnenter->isChecked() )
    {
        ui->lineEdit->setText(result);
    }
    if (ui->btnclear->isChecked() )
    {
        secondNum = 0;
        Number = 0;
        result = 0;
        ui->line1->setText(0);
        ui->line2->setText(0);
        ui->lineEdit->setText(0);
        ui->add->setChecked(false);
        ui->mult->setChecked(false);
        ui->div->setChecked(false);
        ui->sub->setChecked(false);
        ui->btnclear->setChecked(false);
        ui->btnenter->setChecked(false);
    }

}
void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = (QPushButton*) sender();

    firstNum = ui->line1 -> text().toDouble();

    button ->setChecked(true);
    secondNum = ui->line2->text().toDouble();

}


