#ifndef MOSTRARBUSQUEDA_H
#define MOSTRARBUSQUEDA_H

#include <QDialog>

namespace Ui {
class mostrarBusqueda;
}

class mostrarBusqueda : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarBusqueda(QWidget *parent = nullptr);
    ~mostrarBusqueda();

private slots:
    void on_label_linkActivated(const QString &link);

private:
    Ui::mostrarBusqueda *ui;
};

#endif // MOSTRARBUSQUEDA_H
