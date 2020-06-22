#include "sexagesimal.h"
#include <iostream>

using namespace std;

sexagesimal::sexagesimal(){
    angulo=0;
    minuto=0;
    segundo=0;
}

void sexagesimal::setAngulo(int a){
    angulo=a;
}
int sexagesimal::getAngulo(){
    return angulo;
}

void sexagesimal::setMinuto(int m){
    minuto=m%60;
    angulo+=m/60;
}
int sexagesimal::getMinuto(){
    return minuto;
}

void sexagesimal::setSegundo(int s){
    segundo=s%60;
    minuto+=s/60;
}
int sexagesimal::getSegundo(){
    return segundo;
}

int sexagesimal::reset(sexagesimal c){
    angulo=0;
    minuto=0;
    segundo=0;
}

void sexagesimal::operator++(){
    segundo++;
    if (segundo>59){
        segundo=0;
        minuto=0;
        angulo++;
    }
}

