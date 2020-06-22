#include <iostream>
#include <string.h>
#include "avionPasajero.h"

using namespace std;

void AvionPasajero::setDestino(char* dstn){
    destino=dstn;
}

char* AvionPasajero::getDestino(){
    return destino;
}

void AvionPasajero::setDuracion(int drcn){
    duracion = drcn;
}

int AvionPasajero::getDuracion(){
    return duracion;
}

AvionPasajero AvionPasajero::mostrarDatos(){
    cout<<"Patente: "<<patente<<endl;
    cout<<"Carga maxima: "<<carga<<"kg"<<endl;
    cout<<"Ciudad: "<<destino<<endl;
    cout<<"Duracion vuelo: "<<duracion<<endl;
}