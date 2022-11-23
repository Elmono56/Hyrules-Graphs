/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionIndicaciones;
    QAction *actionSeleccionar_Origen;
    QAction *actionSeleccionar_Destino;
    QAction *actionBuscar_por_Menor_Coste_de_Man;
    QAction *actionBuscar_por_menor_Coste_de_Tiempo;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QGroupBox *groupBox;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        actionIndicaciones = new QAction(MainWindow);
        actionIndicaciones->setObjectName("actionIndicaciones");
        actionSeleccionar_Origen = new QAction(MainWindow);
        actionSeleccionar_Origen->setObjectName("actionSeleccionar_Origen");
        actionSeleccionar_Destino = new QAction(MainWindow);
        actionSeleccionar_Destino->setObjectName("actionSeleccionar_Destino");
        actionBuscar_por_Menor_Coste_de_Man = new QAction(MainWindow);
        actionBuscar_por_Menor_Coste_de_Man->setObjectName("actionBuscar_por_Menor_Coste_de_Man");
        actionBuscar_por_menor_Coste_de_Tiempo = new QAction(MainWindow);
        actionBuscar_por_menor_Coste_de_Tiempo->setObjectName("actionBuscar_por_menor_Coste_de_Tiempo");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1280, 720));
        label->setPixmap(QPixmap(QString::fromUtf8("../build-Hyrules-Graphs-Desktop_Qt_6_4_1_MinGW_64_bit-Debug/img/mainFrame.jpg")));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 590, 101, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 180, 83, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(380, 270, 101, 29));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(450, 160, 83, 29));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(560, 120, 83, 29));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(730, 190, 83, 29));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(700, 290, 121, 29));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(590, 430, 83, 29));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(740, 520, 101, 29));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(660, 640, 83, 29));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(880, 160, 291, 391));
        groupBox->setAutoFillBackground(true);
        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(20, 40, 111, 29));
        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(150, 40, 111, 29));
        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(100, 120, 83, 29));
        pushButton_14 = new QPushButton(groupBox);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(30, 280, 241, 29));
        pushButton_15 = new QPushButton(groupBox);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(30, 230, 241, 29));
        pushButton_16 = new QPushButton(groupBox);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(30, 180, 241, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hyrules Graphs", nullptr));
        actionIndicaciones->setText(QCoreApplication::translate("MainWindow", "Indicaciones", nullptr));
        actionSeleccionar_Origen->setText(QCoreApplication::translate("MainWindow", "Seleccionar Origen", nullptr));
        actionSeleccionar_Destino->setText(QCoreApplication::translate("MainWindow", "Seleccionar Destino", nullptr));
        actionBuscar_por_Menor_Coste_de_Man->setText(QCoreApplication::translate("MainWindow", "Buscar por Menor Coste de Man\303\241", nullptr));
        actionBuscar_por_menor_Coste_de_Tiempo->setText(QCoreApplication::translate("MainWindow", "Buscar por menor Coste de Tiempo", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Pueblo Gerudo", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Villa Rico", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Castillo de Hyrule", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Villa Korok", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Ciudad Goron", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Pueblo Tarrey", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Dominio de los Zora", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Villa Kakariko", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Villa de Hateno", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Villa Lurelin", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Opciones", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Seleccionar Origen", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Seleccionar Destino", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Indicaciones", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Buscar por Menor Coste de Man\303\241", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Buscar por Menor Coste de Tiempo", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Buscar por Menor Cantidad de Transbordos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
