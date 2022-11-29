#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "instrucciones.h"
#include "grafo.h"
#include <vector>
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QDebug>
#include <iostream>
#include <vector>
#include <iostream>
#include <QMessageBox>
using namespace std;
Grafo grafoHyrule = Grafo();

Ciudad RicoV = Ciudad("Villa Rico", 11);
Ciudad GerudoP = Ciudad("Pueblo de Gerudo", 22);
Ciudad LurelinV = Ciudad("Villa Lurelin", 33);
Ciudad HatenoV = Ciudad("Villa de Hateno", 44);
Ciudad KakarikoV = Ciudad("Villa Kakariko", 55);
Ciudad ZorasD = Ciudad("Dominio de los Zora", 66);
Ciudad TarreyT = Ciudad("Pueblo Tarrey", 77);
Ciudad GoronC = Ciudad("Ciudad Goron", 88);
Ciudad KorokV = Ciudad("Villa Korok", 99);
Ciudad HyruleC = Ciudad("Castillo de Hyrule", 100);
Ciudad Ciudades[] = {RicoV, GerudoP, LurelinV, HatenoV, KakarikoV, ZorasD, TarreyT, GoronC, KorokV, HyruleC};
int contador = 0;
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

    if(contador == 0){
        for(int i=0; i<10; i++) {
            grafoHyrule.addNodo(&Ciudades[i]);
        }

        grafoHyrule.addArco(11, 33, 3, 20);
        grafoHyrule.addArco(11, 77, 4, 35);
        grafoHyrule.addArco(22, 66, 5, 10);
        grafoHyrule.addArco(22, 88, 7, 25);
        grafoHyrule.addArco(33, 99, 6, 17);
        grafoHyrule.addArco(44, 55, 1, 8);
        grafoHyrule.addArco(44, 88, 3, 10);
        grafoHyrule.addArco(66, 100, 10, 42);
        grafoHyrule.addArco(77, 88, 2, 5);
        grafoHyrule.addArco(99, 100, 3, 12);
        contador++;
    }

    Ciudad* COrigen = grafoHyrule.getCiudadByName(origen);
    Ciudad* CDestino = grafoHyrule.getCiudadByName(destino);

    QMessageBox::information(this, "Transbordos Mínimos", grafoHyrule.transbordosMin(COrigen,CDestino));

}


void MainWindow::on_pushButton_15_clicked()
{
    QString origen = ui->comboBox->currentText();
    QString destino = ui->comboBox_3->currentText();

    if(contador == 0){
        for(int i=0; i<10; i++) {
            grafoHyrule.addNodo(&Ciudades[i]);
        }

        grafoHyrule.addArco(11, 33, 3, 20);
        grafoHyrule.addArco(11, 77, 4, 35);
        grafoHyrule.addArco(22, 66, 5, 10);
        grafoHyrule.addArco(22, 88, 7, 25);
        grafoHyrule.addArco(33, 99, 6, 17);
        grafoHyrule.addArco(44, 55, 1, 8);
        grafoHyrule.addArco(44, 88, 3, 10);
        grafoHyrule.addArco(66, 100, 10, 42);
        grafoHyrule.addArco(77, 88, 2, 5);
        grafoHyrule.addArco(99, 100, 3, 12);
        contador++;
    }

    Ciudad* COrigen = grafoHyrule.getCiudadByName(origen);
    Ciudad* CDestino = grafoHyrule.getCiudadByName(destino);

    int ind1 = grafoHyrule.getIntbyCiudad(COrigen);
    int ind2 = grafoHyrule.getIntbyCiudad(CDestino);

    QMessageBox::information(this, "Duracion Mínima", grafoHyrule.duracionMin(ind1,ind2));

}


void MainWindow::on_pushButton_14_clicked()
{
    QString origen = ui->comboBox->currentText();
    QString destino = ui->comboBox_3->currentText();

    if(contador == 0){
        for(int i=0; i<10; i++) {
            grafoHyrule.addNodo(&Ciudades[i]);
        }

        grafoHyrule.addArco(11, 33, 3, 20);
        grafoHyrule.addArco(11, 77, 4, 35);
        grafoHyrule.addArco(22, 66, 5, 10);
        grafoHyrule.addArco(22, 88, 7, 25);
        grafoHyrule.addArco(33, 99, 6, 17);
        grafoHyrule.addArco(44, 55, 1, 8);
        grafoHyrule.addArco(44, 88, 3, 10);
        grafoHyrule.addArco(66, 100, 10, 42);
        grafoHyrule.addArco(77, 88, 2, 5);
        grafoHyrule.addArco(99, 100, 3, 12);
        contador++;
    }

    Ciudad* COrigen = grafoHyrule.getCiudadByName(origen);
    Ciudad* CDestino = grafoHyrule.getCiudadByName(destino);

    int ind1 = grafoHyrule.getIntbyCiudad(COrigen);
    int ind2 = grafoHyrule.getIntbyCiudad(CDestino);

    qDebug()<<grafoHyrule.manaMin(ind1,ind2);

    QMessageBox::information(this, "Mana Mínimo", grafoHyrule.manaMin(ind1,ind2));
}
