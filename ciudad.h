#ifndef _CIUDAD_
#define _CIUDAD_ 1

#include <iostream>
#include <string>

class Ciudad{

    private:
        string nombre = "";
        int Id = 0;

    public:

        Ciudad(string pNombre, int pId){
            this->nombre = pNombre;
            this->Id = pId;
        }

        void setNombre(string pNombre){
            this->nombre = pNombre;
        }

        string getNombre(){
            return this->nombre;
        }

        int getId() {
            return this->Id;
        }
        
};

#endif