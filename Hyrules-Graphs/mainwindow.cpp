#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "instrucciones.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_13_clicked()
{
    Instrucciones i;
    i.exec();
}


void MainWindow::on_pushButton_16_clicked()
{
    QString origen = ui->comboBox->currentText();
    QString destino = ui->comboBox_3->currentText();
}
