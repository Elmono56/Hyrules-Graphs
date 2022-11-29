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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
    QGroupBox *groupBox;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QComboBox *comboBox;
    QComboBox *comboBox_3;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-Hyrules-Graphs-Desktop_Qt_6_4_1_MinGW_64_bit-Debug/img/icono.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
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
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(860, 160, 351, 491));
        groupBox->setAutoFillBackground(true);
        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(110, 40, 83, 29));
        pushButton_14 = new QPushButton(groupBox);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(30, 320, 271, 29));
        pushButton_15 = new QPushButton(groupBox);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(30, 260, 271, 29));
        pushButton_16 = new QPushButton(groupBox);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(30, 200, 271, 29));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(30, 140, 111, 28));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(190, 140, 111, 28));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 90, 111, 20));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(190, 90, 111, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 190, 51, 20));
        label_2->setAutoFillBackground(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(380, 270, 101, 20));
        label_3->setAutoFillBackground(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 590, 101, 20));
        label_4->setAutoFillBackground(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(590, 430, 81, 20));
        label_5->setAutoFillBackground(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(690, 300, 121, 20));
        label_6->setAutoFillBackground(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(730, 200, 81, 20));
        label_7->setAutoFillBackground(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(740, 520, 101, 20));
        label_8->setAutoFillBackground(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(450, 160, 81, 20));
        label_9->setAutoFillBackground(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(580, 130, 71, 20));
        label_10->setAutoFillBackground(true);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(670, 640, 81, 20));
        label_11->setAutoFillBackground(true);
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Opciones", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Instrucciones", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Buscar por Menor Coste de Man\303\241", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Buscar por Menor Coste de Tiempo", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Buscar por Menor Cantidad de Transbordos", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Villa Rico", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Pueblo de Gerudo", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Villa Lurelin", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Villa de Hateno", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Villa Kakariko", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Dominio de los Zora", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Pueblo Tarrey", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "Ciudad Goron", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "Villa Korok", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "Castillo de Hyrule", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "Villa Rico", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "Pueblo de Gerudo", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "Villa Lurelin", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "Villa de Hateno", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("MainWindow", "Villa Kakariko", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("MainWindow", "Dominio de los Zora", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("MainWindow", "Pueblo Tarrey", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("MainWindow", "Ciudad Goron", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("MainWindow", "Villa Korok", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("MainWindow", "Castillo de Hyrule", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "Seleccionar Destino", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Seleccionar Origen", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Villa Rico", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Castillo de Hyrule", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Pueblo de Gerudo", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Villa Kakariko", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Dominio de los Zora", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Pueblo Tarrey", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Villa de Hateno", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Villa Korok", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Ciudad Goron", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Villa Lurelin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
