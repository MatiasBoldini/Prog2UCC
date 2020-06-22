#include "Polinomio.h"
#include <math.h>
#include <iostream>


using namespace std;

Polinomio::Polinomio(){
    coef = 0;
    grado = 0;
}

Polinomio::Polinomio(int N){
    int pol[N-1];
    n = N;
}

int Polinomio::AgregarCoeficiente(int g, int c){
    if (g>=0) {
        grado = g;
        coef = c;
        return pol[g]=c;
        }
}

int Polinomio::getOrden(){
    return n;
}

int Polinomio::getCoef(int i){
    return pol[i];
}

int Polinomio::evaluar(int e, int n){
    int sum=0, x;
    for (int i=0; i<n; i++){
        x = pow(e, i);
        sum += pol[i]*x;
    }
    return sum;
}