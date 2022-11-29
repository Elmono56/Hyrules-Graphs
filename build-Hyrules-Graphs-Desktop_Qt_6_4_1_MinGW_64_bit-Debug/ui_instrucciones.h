/********************************************************************************
** Form generated from reading UI file 'instrucciones.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCCIONES_H
#define UI_INSTRUCCIONES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Instrucciones
{
public:
    QLabel *label;

    void setupUi(QDialog *Instrucciones)
    {
        if (Instrucciones->objectName().isEmpty())
            Instrucciones->setObjectName("Instrucciones");
        Instrucciones->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-Hyrules-Graphs-Desktop_Qt_6_4_1_MinGW_64_bit-Debug/img/icono.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Instrucciones->setWindowIcon(icon);
        label = new QLabel(Instrucciones);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 391, 281));

        retranslateUi(Instrucciones);

        QMetaObject::connectSlotsByName(Instrucciones);
    } // setupUi

    void retranslateUi(QDialog *Instrucciones)
    {
        Instrucciones->setWindowTitle(QCoreApplication::translate("Instrucciones", "Instrucciones", nullptr));
        label->setText(QCoreApplication::translate("Instrucciones", "\302\241Bienvenido al Reino de Hyrule! \n"
"En el mapa se indicar\303\241n distintas ciudades,\n"
" las cuales a su vez contienen templos que permiten viajar entre ellas. \n"
"Para consultar el coste de man\303\241, tiempo o cantidad menor de transbordos,\n"
"seleccione una de las ciudades y presione el bot\303\263n correspondiente.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instrucciones: public Ui_Instrucciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCCIONES_H
