#ifndef _ARCO_
#define _ARCO_ 1

using namespace std;

class Arco {
    private:
        void* origen;
        void* destino;
        int mana;
        int duracion;

    public:
        Arco(void* pOrigen, void* pDestino, int pMana, int pDuracion) {
            this->origen = pOrigen;
            this->destino = pDestino;
            this->mana = pMana;
            this->duracion = pDuracion;
        }

        void* getOrigen() {
            return this->origen;
        }

        void* getDestino() {
            return this->destino;
        }

        int getMana() {
            return this->mana;
        }

        int getDuracion(){
            return this->duracion;
        }

        void setOrigen(void* pOrigen){
            this->origen = pOrigen;
        }

        void setDestino(void* pDestino){
            this->destino = pDestino;
        }

        void setPeso(int pMana){
            this->mana = pMana;
        }

        void setDuracion(int pDuracion){
            this->duracion = pDuracion;
        }
};

#endif
