#ifndef __CAR_INCLUDED__
#define __CAR_INCLUDED__
#include "carrera.cpp"
#endif

#ifndef __ATL_INCLUDED__
#define __ATL_INCLUDED__
#include "atleta.cpp"
#endif

#include <iostream>

using namespace std;

int main(void){
    Atleta a1("Nombre1","Pais1",1,10);
    Atleta a2("Nombre2","Pais2",2,10.3);
    Atleta a3("Nombre3","Pais3",3,9.8);
    Carrera c("10,10,2020","Cordoba",400,3);
    c.agregarAtleta(a1);
    c.agregarAtleta(a2);
    c.agregarAtleta(a3);
    Atleta g=c.getGanador();
    cout<<"Numero: "<<g.getNumero()<<endl;
    cout<<"Nombre y Apellido: "<<g.getNomape()<<endl;
    cout<<"Nacionalidad: "<<g.getNacionalidad()<<endl;
    cout<<"Tiempo: "<<g.getTiempo()<<endl;
}