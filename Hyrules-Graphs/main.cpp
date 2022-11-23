#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QDebug>
#include <iostream>
#include "grafo.h"
#include "ciudad.h"
#include "nodografo.h"
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




    Grafo grafoHyrule = Grafo();

    Ciudad RicoV = Ciudad("Villa Rico", 11);
    Ciudad GerudoP = Ciudad("Pueblo de Gerudo", 22);
    Ciudad LurelinV = Ciudad("Villa Lurelin", 33);
    Ciudad HatenoV = Ciudad("Villa de Hateno", 44);
    Ciudad KakarikoV = Ciudad("Villa Kakariko", 55);
    Ciudad ZorasD = Ciudad("Dominio de los Zora", 66);
    Ciudad TarreyT = Ciudad("Pueblo Tarrey", 77);
    Ciudad GoronC = Ciudad("Ciudad Goron", 88);
    Ciudad KorokV = Ciudad("Villa Korok", 99);
    Ciudad HyruleC = Ciudad("Castillo de Hyrule", 100);

    Ciudad Ciudades[] = {RicoV, GerudoP, LurelinV, HatenoV, KakarikoV, ZorasD, TarreyT, GoronC, KorokV, HyruleC};

    for(int i=0; i<10; i++) {
        grafoHyrule.addNodo(&Ciudades[i]);
    }


    //        origen, destino, mana, duracion
    grafoHyrule.addArco(11, 33, 3, 20);
    grafoHyrule.addArco(11, 77, 4, 35);
    grafoHyrule.addArco(22, 66, 5, 10);
    grafoHyrule.addArco(22, 88, 7, 25);
    grafoHyrule.addArco(33, 99, 6, 17);
    grafoHyrule.addArco(44, 55, 1, 8);
    grafoHyrule.addArco(44, 88, 3, 10);
    grafoHyrule.addArco(66, 100, 10, 42);
    grafoHyrule.addArco(77, 88, 2, 5);
    grafoHyrule.addArco(99, 100, 3, 12);

    grafoHyrule.transbordosMin(&RicoV, &LurelinV);
    cout<<"-----------------------------"<<endl;
    grafoHyrule.transbordosMin(&GerudoP, &GoronC);
    cout<<"-----------------------------"<<endl;
    grafoHyrule.transbordosMin(&KakarikoV, &GerudoP);
    cout<<"-----------------------------"<<endl;
    cout<<"-----------------------------"<<endl;
    printMatrices();


    qDebug() << "Hola mundo";
    MainWindow w;
    w.show();
    return a.exec();

    /*
     * Ciudad* getCiudadByName(QString pNombre){
     *
     *      Ciudad* temp;
     *      for (i=0; i<listaNodos.size(); i++){
     *          if (pNombre==listaNodos.at(i)->getDato()->getNombre()){
     *              temp=listaNodos.at(i)->getDato()
     *          }
     *
     *      }
     *      return temp;
     *}
     *
     */
}
