#include <iostream>
#include "avionHidrante.h"

using namespace std;

void AvionHidrante::setMaximoAgua(int mxagua){
    maximoAgua = mxagua;
}

int AvionHidrante::getMaxAgua(){
    return maximoAgua;
}

void AvionHidrante::setCantActual(int actual){
    cantActual = actual;
}

int AvionHidrante::getCantActual(){
    return cantActual;
}

int AvionHidrante::descargarAgua(int ag){
    if (cantActual-ag>=0) {
        cantActual -= ag;} 
        else {
            }
}

AvionHidrante AvionHidrante::mostrarDatos(){
    cout<<"Patente: "<<patente<<endl;
    cout<<"Carga maxima: "<<carga<<"kg"<<endl;
    cout<<"Cantidad actual: "<<cantActual<<endl;
    cout<<"Cantidad maxima de agua: "<<maximoAgua<<endl;
}