#ifndef INSTRUCCIONES_H
#define INSTRUCCIONES_H

#include <QDialog>

namespace Ui {
class Instrucciones;
}

class Instrucciones : public QDialog
{
    Q_OBJECT

public:
    explicit Instrucciones(QWidget *parent = nullptr);
    ~Instrucciones();

private:
    Ui::Instrucciones *ui;
};

#endif // INSTRUCCIONES_H
