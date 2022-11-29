#ifndef _NODOGRAFO_
#define _NODOGRAFO_ 1
#include "arco.h"
#include "ciudad.h"
#include <vector>

using namespace std;

class NodoGrafo {
    private:
        Ciudad* dato;
        vector<Arco*>* listaArcos;
        bool visitado = false;
        bool procesado = false;

    public:

        NodoGrafo(Ciudad* pDato)
        {
            this->dato = pDato;
            this->listaArcos = new vector<Arco*>();
        }

        NodoGrafo() {
            this->listaArcos = new vector<Arco*>();
        }

        void setDato(Ciudad* pDato) {
           this->dato = pDato;
        }

        Ciudad* getDato() {
            return this->dato;
        }

        void addArco(Arco* pArco) {
            this->listaArcos->push_back(pArco);
        }

        vector<Arco*>* getArcos() {
            return this->listaArcos;
        }

        void setVisitado(bool pBandera){
            this->visitado = pBandera;
        }

        bool getVisitado(){
            return this->visitado;
        }

        void setProcesado(bool pBandera){
            this->procesado = pBandera;
        }

        bool getProcesado(){
            return this->procesado;
        }
};

#endif
