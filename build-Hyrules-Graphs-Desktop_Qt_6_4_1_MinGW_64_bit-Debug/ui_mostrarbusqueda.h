/********************************************************************************
** Form generated from reading UI file 'mostrarbusqueda.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARBUSQUEDA_H
#define UI_MOSTRARBUSQUEDA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_mostrarBusqueda
{
public:
    QLabel *label;

    void setupUi(QDialog *mostrarBusqueda)
    {
        if (mostrarBusqueda->objectName().isEmpty())
            mostrarBusqueda->setObjectName("mostrarBusqueda");
        mostrarBusqueda->resize(500, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-Hyrules-Graphs-Desktop_Qt_6_4_1_MinGW_64_bit-Debug/img/icono.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        mostrarBusqueda->setWindowIcon(icon);
        label = new QLabel(mostrarBusqueda);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 60, 231, 111));

        retranslateUi(mostrarBusqueda);

        QMetaObject::connectSlotsByName(mostrarBusqueda);
    } // setupUi

    void retranslateUi(QDialog *mostrarBusqueda)
    {
        mostrarBusqueda->setWindowTitle(QCoreApplication::translate("mostrarBusqueda", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("mostrarBusqueda", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mostrarBusqueda: public Ui_mostrarBusqueda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARBUSQUEDA_H
