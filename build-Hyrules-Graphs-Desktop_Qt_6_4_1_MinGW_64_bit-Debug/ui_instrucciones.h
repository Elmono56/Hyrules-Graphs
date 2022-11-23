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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Instrucciones
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Instrucciones)
    {
        if (Instrucciones->objectName().isEmpty())
            Instrucciones->setObjectName("Instrucciones");
        Instrucciones->resize(400, 300);
        pushButton = new QPushButton(Instrucciones);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 150, 83, 29));

        retranslateUi(Instrucciones);

        QMetaObject::connectSlotsByName(Instrucciones);
    } // setupUi

    void retranslateUi(QDialog *Instrucciones)
    {
        Instrucciones->setWindowTitle(QCoreApplication::translate("Instrucciones", "Indicaciones", nullptr));
        pushButton->setText(QCoreApplication::translate("Instrucciones", "Hola", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instrucciones: public Ui_Instrucciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCCIONES_H
