#include "carrera.h"
#include <iostream>
#include <string.h>
using namespace std;


void Carrera::setDistancia(int dis){
    distancia=dis;
}

int Carrera::getDistancia(){
    return distancia;
}

void Carrera::setFecha(char* f){
    fecha=f;
}

char* Carrera::getFecha(){
    return fecha;
}

void Carrera::setCiudad(char* ciud){
    ciudad=ciud;
}

char* Carrera::getCiudad(){
    return ciudad;
}

void Carrera::setCantidadParticipantes(int cantp){
    cantidadparticipantes=cantp;
}

int Carrera::getCantidadParticipantes(){
    return cantidadparticipantes;
}

char Carrera::agregarAtleta(Atleta& a){
    competidores[a.getNumero()] = {a.getNomape(), a.getNacionalidad(), a.getNumero(), a.getTiempo()};
}

Atleta Carrera::getGanador(){
    int cuenta, ganador;
    for (float i=0;i<getCantidadParticipantes();i++){
        cuenta=getTiempo();
        if (cuenta<=ganador){
            ganador=cuenta;
        }
    }
}