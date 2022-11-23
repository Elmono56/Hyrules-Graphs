#ifndef _GRAFO_
#define _GRAFO_ 1
#include "nodografo.h"
#include <map>
#include <queue>
#include <vector>
#include <stdio.h>
#include <QString>
#include <QDebug>

using namespace std;
class Grafo {

    private:
        vector<NodoGrafo*> listaNodos;
        std::map<int,NodoGrafo*> hashNodos;
        vector<vector<int>> matrizMana;
        vector<vector<int>> matrizDuracion;

        void resetNodes() {
            for (std::vector<NodoGrafo*>::iterator current = listaNodos.begin() ; current != listaNodos.end(); ++current) {
                NodoGrafo* actual = (*current);
                actual->setProcesado(false);
                actual->setVisitado(false);
            }
        }

        NodoGrafo* findNotVisited() {
            NodoGrafo* result = nullptr;
            for (std::vector<NodoGrafo*>::iterator current = listaNodos.begin() ; current != listaNodos.end(); ++current) {
                NodoGrafo* actual = (*current);
                if (!actual->getVisitado()) {
                    result = actual;
                    break;
                }
            }
            return result;
        }

        void agrandarMatriz(){
            vector<int> auxiliar;
            vector<int> auxiliar2;

            for(int i = 0; i < listaNodos.size(); i++){
                matrizMana.at(i).push_back(0);
                matrizDuracion.at(i).push_back(0);
            }

            for(int j = 0; j < listaNodos.size()+1; j++){
                auxiliar.push_back(0);
                auxiliar2.push_back(0);
            }

            matrizMana.push_back(auxiliar);
            matrizDuracion.push_back(auxiliar2);

        }

        void add_edge(int pOrigen, int pDestino, int pMana, int pDuracion) {
            matrizMana.at(pOrigen).at(pDestino) = pMana;
            matrizDuracion.at(pOrigen).at(pDestino) = pDuracion;
        }

    public:
        Grafo() {
        }

        int getSize() {
            return this->listaNodos.size();
        }

        void addNodo(Ciudad* pCiudad) {
            NodoGrafo* nuevoNodo = new NodoGrafo(pCiudad);
            agrandarMatriz();
            this->listaNodos.push_back(nuevoNodo);
            hashNodos.insert(pair<int,NodoGrafo*>(pCiudad->getId(),nuevoNodo));
        }

        void addArco(NodoGrafo* pOrigen, NodoGrafo* pDestino, int pMana, int pDuracion) {
            Arco* newArc = new Arco(pOrigen, pDestino, pMana, pDuracion);

            int index1;
            for (int i = 0; i< listaNodos.size(); i++){
                if (pOrigen == listaNodos.at(i)){
                    index1 = i;
                    break;
                }
            }

            int index2;
            for (int j = 0; j< listaNodos.size(); j++){
                if (pDestino == listaNodos.at(j)){
                    index2 = j;
                    break;
                }
            }

            pOrigen->addArco(newArc);
            add_edge(index1,index2 ,pMana, pDuracion);

            //se añade al reves ya que es bidireccional
            Arco* reverseArc = new Arco(pDestino, pOrigen, pMana, pDuracion);
            pDestino->addArco(reverseArc);
            add_edge(index2,index1, pMana, pDuracion);

        }

        void addArco(NodoGrafo* pOrigen, NodoGrafo* pDestino) {
            this->addArco(pOrigen, pDestino, 0, 0);
        }

        void addArco(Ciudad* pOrigen, Ciudad* pDestino) {
            this->addArco(pOrigen->getId(), pDestino->getId(), 0, 0);
        }

        void addArco(Ciudad* pOrigen, Ciudad* pDestino, int pMana, int pDuracion) {
            this->addArco(pOrigen->getId(), pDestino->getId(), pMana, pDuracion);
        }

        void addArco(int pOrigen, int pDestino) {
            this->addArco(this->getNodo(pOrigen), this->getNodo(pDestino), 0, 0);
        }

        void addArco(int pOrigen, int pDestino, int pMana, int pDuracion) {
            this->addArco(this->getNodo(pOrigen), this->getNodo(pDestino), pMana, pDuracion);
        }

        NodoGrafo* getNodo(int pId) {
            return hashNodos.at(pId);
        }


        //Recorrido anchura: menor cantidad de trasbordos
        //vector<Ciudad*>*
       void transbordosMin(Ciudad* pOrigen, Ciudad* pDestino) {
            vector<Ciudad*> aux;
            queue<NodoGrafo*> nodosProcesados;
            int visitados = 0;

            resetNodes();

            NodoGrafo* puntoPartida = this->getNodo(pOrigen->getId());
            nodosProcesados.push(puntoPartida);
            puntoPartida->setProcesado(true);

            do {
                while (!nodosProcesados.empty()) {
                    NodoGrafo* actual = nodosProcesados.front();
                    nodosProcesados.pop();

                    actual->setVisitado(true);
                    visitados++;
                    aux.push_back(actual->getDato());

                    vector<Arco*>* adyacentes = actual->getArcos();

                    for (int indiceArcos=0; indiceArcos<adyacentes->size(); ++indiceArcos) {
                        Arco* arco = adyacentes->at(indiceArcos);
                        NodoGrafo* adyacente = (NodoGrafo*)arco->getDestino();

                        if (!adyacente->getProcesado()) {
                            nodosProcesados.push(adyacente);
                            adyacente->setProcesado(true);
                        }

                    }
                }

                if (visitados<this->getSize()) {
                    puntoPartida = this->findNotVisited();
                    nodosProcesados.push(puntoPartida);
                    puntoPartida->setProcesado(true);
                }

            } while (visitados<this->getSize());

            vector<Ciudad*> result;

            for (int i = 0; i<aux.size(); i++){
                result.push_back(aux.at(i));

                if (aux.at(i)->getId() == pDestino->getId()){
                    break;
                }
            }

            for (int i = 0; i<result.size(); i++){
                qDebug()<< result.at(i)->getNombre();
            }

            //return &result;
        }


        //recorrido costo mínimo
        void manaMin(int pOrigen){
            dijkstra(pOrigen, &matrizMana);
        }

        //recorrido duración mínima
        void duracionMin(int pOrigen){
            dijkstra(pOrigen, &matrizDuracion);
        }

        //https://www.geeksforgeeks.org/c-program-for-dijkstras-shortest-path-algorithm-greedy-algo-7/
        void dijkstra(int pOrigen, vector<vector<int>>* matrizGrafo){//número de como se metió al grafo

            vector<int> dist = vector<int>();
            vector<bool> sptSet = vector<bool>();

            for (int i = 0; i < matrizGrafo->size(); i++){
                dist.push_back(INT_MAX);
                sptSet.push_back(false);
            }

            dist.at(pOrigen) = 0;

            for (int count = 0; count < matrizGrafo->size() - 1; count++) {
                int u = minDistance(dist, sptSet);

                sptSet.at(u) = true;

                for (int i = 0; i < matrizGrafo->size(); i++){

                    if (!sptSet.at(i) && matrizGrafo->at(u).at(i) && dist.at(u) != INT_MAX && dist.at(u) + matrizGrafo->at(u).at(i) < dist.at(i)){
                        dist.at(i) = dist.at(u) + matrizGrafo->at(u).at(i);
                    }

                }
                printSolution(&dist, dist.size());
            }
        }

        void printSolution(vector<int>* pDist, int V){
            printf("Vertex   Distance from Source\n");
            for (int i = 0; i < V; i++)
                printf("%d \t\t %d\n", i, pDist->at(i));
        }

        void printMatrices(){

            for (int i = 0; i<matrizMana.size(); i++){

                for (int j = 0; j<matrizMana.size(); j++){

                   cout<<matrizMana[i][j]<<"\t";

                }
                cout<<endl;

            }
            cout<<"---------------------------"<<endl;
            for (int i = 0; i<matrizDuracion.size(); i++){

                for (int j = 0; j<matrizDuracion.size(); j++){

                   cout<<matrizDuracion[i][j]<<"\t";

                }
                cout<<endl;

            }
        }

        int minDistance(vector<int> dist, vector<bool> sptSet){

            //inciarlizar valor mínimo
            int min = INT_MAX, min_index;

            for (int i = 0; i < dist.size(); i++){
                if (sptSet[i] == false && dist[i] <= min){
                    min = dist[i], min_index = i;
                }

            }

            return min_index;

        }

};

#endif
