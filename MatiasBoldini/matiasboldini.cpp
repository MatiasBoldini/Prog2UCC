#include "Electrodomesticos.h"
#include <string.h>
#include <iostream>

using namespace std;

Electrodomesticos::Electrodomesticos(){
    precioBase=0;
    strcpy(color, "Blanco");
    consumoEner= 'A';
    peso=0;
}

Electrodomesticos::Electrodomesticos(long pb,int pe){
    precioBase= pb;
    strcpy(color, "Blanco");
    consumoEner='A';
    peso=pe
}

Electrodomesticos::Electrodomesticos(long pb, char* c, char ce, int pe){
    precioBase= pb;
    strcpy(color c);
    consumoEner=ce;
    peso=pe;
}

void Electrodomesticos::setPrecio(long pb){
    precioBase=pb;
}
long Electrodomesticos::getPrecio(){
    return precioBase;
}

void Electrodomesticos::setColor(char* c){
    strcpy(color, c);
}
char Electrodomesticos::getColor(){
    cout<<color;
}

void Electrodomesticos::setConsumoEner(char ce){
    consumoEner=ce;
}
char Electrodomesticos::getConsumoEner(){
    return consumoEner;
}

void Electrodomesticos::setPeso(int pe){
    peso=pe;
}
int Electrodomesticos::getPeso(){
    return peso;
}

long Electrodomesticos::precioFinal(){
  long  precioFinal=precioBase;
switch(consumoEner){
    case 'A':precioBase=precioBase*2;break;
    case 'B':precioBase=precioBase*1.8;break;
    case 'C':precioBase=precioBase*1.6;break;
    case 'D':precioBase=precioBase*1.5;break;
    case 'E':precioBase=precioBase*1.3;break;
    case 'F':precioBase=precioBase*1.1;break;
}
if(peso<=19) precioFinal*=1.1;
if(peso<=49 && precioBase>=20) precioFinal*=1.5;
if(peso<=79 && precioBase>=50) precioFinal*=1.8;
if(peso>=80) precioFinal*=2;
 precioFinal/1.8;
return  precioFinal;

}
