/********************************************************************************
** Form generated from reading UI file 'buscarmenormana.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARMENORMANA_H
#define UI_BUSCARMENORMANA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_buscarMenorMana
{
public:

    void setupUi(QDialog *buscarMenorMana)
    {
        if (buscarMenorMana->objectName().isEmpty())
            buscarMenorMana->setObjectName("buscarMenorMana");
        buscarMenorMana->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-Hyrules-Graphs-Desktop_Qt_6_4_1_MinGW_64_bit-Debug/img/icono.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        buscarMenorMana->setWindowIcon(icon);

        retranslateUi(buscarMenorMana);

        QMetaObject::connectSlotsByName(buscarMenorMana);
    } // setupUi

    void retranslateUi(QDialog *buscarMenorMana)
    {
        buscarMenorMana->setWindowTitle(QCoreApplication::translate("buscarMenorMana", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buscarMenorMana: public Ui_buscarMenorMana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARMENORMANA_H
