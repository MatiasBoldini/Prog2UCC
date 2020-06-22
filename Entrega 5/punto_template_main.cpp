#include "punto_template.h"
#include <iostream>

using namespace std;

int main(){

  punto p1(2,3),p2(4,4),p3(-1,2);
  cout<<"Punto Uno: x= "<<p1.getX()<<" y= "<<p1.getY()<<endl;
  cout<<"Punto Dos: x= "<<p2.getX()<<" y= "<<p2.getY()<<endl;
  cout<<"Punto Tres: x= "<<p3.getX()<<" y= "<<p3.getY()<<endl;
  ++p1;
  cout<<"Incremento de Punto Uno: x= "<<p1.getX()<<" y= "<<p1.getY()<<endl;
  --p2;
  cout<<"Decremento de Punto Dos: x= "<<p2.getX()<<" y= "<<p2.getY()<<endl;
  punto p4=p2 + p3;
  cout<<"Punto cuatro (p2+p3) : x= "<<p4.getX()<<" y= "<<p4.getY()<<endl;
  punto p5=p2+5;
  cout<<"Punto cinco (p2+10) : x= "<<p4.getX()<<" y= "<<p4.getY()<<endl;

}