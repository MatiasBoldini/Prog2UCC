#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;


bool esPermutacion(int z[], int n);
void ordenAsc(int z[], int n);
int main()
{
    int N, A[100];
    cout<<"Ingrese el valor de N";
    cin>>N;
    for (int i=0;i<N;i++){
        do {
            cout<<"Ingrese el valor en la posicion "<<i<<" ";
            cin>>A[i];
        } while (A[i]<i || A[i]>N);
    }
    if (esPermutacion(A,N))
        cout<<"El arreglo es una permutacion ";
    else
        cout<<"el arreglo no es una permutacion ";
}


bool esPermutacion(int z[], int n){
    ordenAsc(z,n);
    for (int i=0;i<n;i++) {
        if (z[i] !=i+1) return false;
    }
    return true;
}

void ordenAsc(int z[], int n){
    int cambio=1, aux;
    while (cambio){
        cambio=0;
        for (int i=0;i<n-1;i++) {
            if (z[i]>z[i+1]){
                aux=z[i];
                z[i]=z[i+1];
                z[i+1]=aux;
                cambio=1;
            }
        }
    }    
}