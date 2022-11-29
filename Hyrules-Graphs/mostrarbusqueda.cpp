#include "mostrarbusqueda.h"
#include "ui_mostrarbusqueda.h"
#include "grafo.h"

mostrarBusqueda::mostrarBusqueda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarBusqueda)
{
    ui->setupUi(this);
}

mostrarBusqueda::~mostrarBusqueda()
{
    delete ui;
}

void mostrarBusqueda::on_label_linkActivated(const QString &link)
{

}

