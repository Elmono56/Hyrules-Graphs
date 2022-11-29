/********************************************************************************
** Form generated from reading UI file 'buscarmenortiempo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARMENORTIEMPO_H
#define UI_BUSCARMENORTIEMPO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_buscarMenorTiempo
{
public:

    void setupUi(QDialog *buscarMenorTiempo)
    {
        if (buscarMenorTiempo->objectName().isEmpty())
            buscarMenorTiempo->setObjectName("buscarMenorTiempo");
        buscarMenorTiempo->resize(500, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-Hyrules-Graphs-Desktop_Qt_6_4_1_MinGW_64_bit-Debug/img/icono.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        buscarMenorTiempo->setWindowIcon(icon);

        retranslateUi(buscarMenorTiempo);

        QMetaObject::connectSlotsByName(buscarMenorTiempo);
    } // setupUi

    void retranslateUi(QDialog *buscarMenorTiempo)
    {
        buscarMenorTiempo->setWindowTitle(QCoreApplication::translate("buscarMenorTiempo", "B\303\272squeda por Menor Tiempo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscarMenorTiempo: public Ui_buscarMenorTiempo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARMENORTIEMPO_H
