#ifndef _GRAFO_
#define _GRAFO_ 1
#include "nodografo.h"
#include <map>
#include <queue>
#include <vector>

using namespace std;

class Grafo {

    private:
        vector<NodoGrafo*> listaNodos;
        bool bidireccional = true;
        std::map<int,NodoGrafo*> hashNodos;

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

    public:
        Grafo() {
        
        }

        int getSize() {
            return this->listaNodos.size();
        }

        void addNodo(Ciudad* pNodo) {
            NodoGrafo* nuevoNodo = new NodoGrafo(pNodo);
            this->listaNodos.push_back(nuevoNodo);
            hashNodos.insert(pair<int,NodoGrafo*>(pNodo->getId(),nuevoNodo));
        }

        void addArco(NodoGrafo* pOrigen, NodoGrafo* pDestino) {
            this->addArco(pOrigen, pDestino, 0, 0);
        }

        void addArco(NodoGrafo* pOrigen, NodoGrafo* pDestino, int pMana, int pDuracion) {
            Arco* newArc = new Arco(pOrigen, pDestino, pMana, pDuracion);

            pOrigen->addArco(newArc);
            if (!this->bidireccional) {
                Arco* reverseArc =  new Arco(pDestino, pOrigen , pMana, pDuracion);
                pDestino->addArco(reverseArc);
            }
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
        vector<Ciudad*> broadPath(Ciudad* pOrigen) {
            vector<Ciudad*> result;
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
                    result.push_back(actual->getDato());

                    vector<Arco*> *adyacentes = actual->getArcos();

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

            return result;
        }

        //recorrido costo mínimo


        //recorrido duración mínima

        /*
        //dijkstra
        vector<Ciudad*> dijkstra(Ciudad* pOrigen){

            vector<Ciudad*> resultado;
            resultado.push_back(pOrigen);

            int dist[CANTCIUDADES];
            bool sptSet[CANTCIUDADES];
        
            for (int i = 0; i < CANTCIUDADES; i++){
                dist[i] = INT_MAX; //luego probar con -1
                sptSet[i] = false;
            }

            for (int i = 0; i < CANTCIUDADES; i++){
                Ciudad* aux = (Ciudad*) listaNodos.at(i)->getDato();
                if (pOrigen->getID() == aux->getID()){
                    dist[i] = 0;
                    break;
                }
                
            }
        }
        */
};

#endif