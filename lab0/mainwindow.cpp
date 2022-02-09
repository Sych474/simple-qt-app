#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DoOperation(OperationInitContext, &currentContext, NULL);
    UpdateLabels();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_DecrimentBtn_clicked()
{
    DoOperation(OperationDecrement, &currentContext, NULL);
    UpdateLabels();
}

void MainWindow::on_IncrementBtn_clicked()
{
    DoOperation(OperationIncrement, &currentContext, NULL);
    UpdateLabels();
}

void MainWindow::on_ResetBtn_clicked()
{
    AppParameters *parameters = (AppParameters *) malloc(sizeof(AppParameters));
    if (parameters != NULL)
    {
        parameters->newValue = ui->lineEdit->text().toInt();
        DoOperation(OperationReset, &currentContext, parameters);
        UpdateLabels();
        free(parameters);
    }
    else
    {
        //TODO написать что случилась ошибка.
    }
}

void MainWindow::UpdateLabels()
{
    ui->label->setText(QString::number(currentContext.currentValue) + " - текущее значение");
    ui->ClicksLabel->setText(QString::number(currentContext.clickCount) + " кликов");
}
