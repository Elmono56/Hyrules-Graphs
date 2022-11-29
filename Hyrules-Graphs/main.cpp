#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QDebug>
#include <iostream>
#include "ciudad.h"
#include "arco.h"
#include "nodografo.h"
#include "grafo.h"
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Hyrules-Graphs_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    //Problema
    //Suponga que se le ha contratado para construir un sistema de consulta sobre el sistema de teletransporte, las consultas deben ser entre torres,
    //para ellos se definen una seria de líneas entre estos puntos, además de su costo en mana y duración

    //Software por desarrollar
    //Su trabajo consiste en implementar este programa para esto debe utilizar los principios básicos de programación explicados en clase y detallados a través
    //de la bibliografía, para resolver un problema cercano a la realidad del estudiantado.
    //El programa, haciendo uso de una interfaz, debe mostrar el grafo correspondiente a las rutas de teletransporte entre las diferentes torres de Hyrule Kingdom.
    //Además, debe permitir buscar rutas entre dos torres quiera y encontrar la mejor ruta por duración mínima, costo mínimo o menor cantidad de trasbordos.
    //Es importante señalar que las rutas son bidireccionales.

    MainWindow w;
    w.show();
    return a.exec();

}

