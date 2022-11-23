#ifndef _CIUDAD_
#define _CIUDAD_ 1

#include <iostream>
#include <QString>

class Ciudad{

    private:
        QString nombre = "";
        int Id = 0;

    public:

        Ciudad(QString pNombre, int pId){
            this->nombre = pNombre;
            this->Id = pId;
        }

        void setNombre(QString pNombre){
            this->nombre = pNombre;
        }

        QString getNombre(){
            return this->nombre;
        }

        int getId() {
            return this->Id;
        }
        
};

#endif
