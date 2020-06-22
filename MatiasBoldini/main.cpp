#include "Electrodomesticos.h"
#include<iostream>
using namespace std;
int main(){

Electrodomesticos e1;
Electrodomesticos e2(1500, 31);
Electrodomesticos e3(13000, "Rojo",'C',34);

cout<<"Color: ";
cout<<e1.getColor()<<endl;
cout<<"Peso: "<<e1.getPeso()<<endl;
cout<<"Precio inicial: "<<e1.getPrecio()<<endl;
cout<<"Consumo: "<<e1.getConsumoEner()<<endl;
cout<<"Precio Final: "<<e1.precioFinal()<<endl;
cout<<endl;
cout<<"Color: ";
cout<<e2.getColor()<<endl;
cout<<"Peso: "<<e2.getPeso()<<endl;
cout<<"Precio inicial: "<<e2.getPrecio()<<endl;
cout<<"Consumo: "<<e2.getConsumoEner()<<endl;
cout<<"Precio Final: "<<e2.precioFinal()<<endl;
cout<<endl;
cout<<"Color: ";
cout<<e3.getColor()<<endl;
cout<<"Peso: "<<e3.getPeso()<<endl;
cout<<"Precio inicial: "<<e3.getPrecio()<<endl;
cout<<"Consumo: "<<e3.getConsumoEner()<<endl;
cout<<"Precio Final: "<<e3.precioFinal()<<endl;
}