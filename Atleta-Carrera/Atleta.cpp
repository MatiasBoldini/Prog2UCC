#include <iostream>
#include "atleta.h"
using namespace std;


Atleta::Atleta(char* nom, char* nac, int num, float t){
    nomape=nom;
    nacionalidad=nac;
    numero=num;
    tiempo=t;
}

void Atleta::setNomape(char* nom){
    nomape=nom;
}

char* Atleta::getNomape(){
    return nomape;
}

void Atleta::setNacionalidad(char* nac){
    nacionalidad=nac;
}

char* Atleta::getNacionalidad(){
    return nacionalidad;
}

void Atleta::setNumero(int num){
    numero=num;
}

int Atleta::getNumero(){
    return numero;
}

void Atleta::setTiempo(float t){
    tiempo=t;
}

float Atleta::getTiempo(){
    return tiempo;
}