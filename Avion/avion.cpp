#include "avion.h"

Avion::Avion(char* ptnt,int car){
    patente= ptnt;
    carga=car;
}

void Avion::setPatente(char* i){
    patente=i;
}

char* Avion::getPatente(){
    return patente;
}

void Avion::setCarga(int car){
    carga=car;
}
int Avion::getCarga(){
    return carga;
}