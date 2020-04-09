#include <iostream>
#include <string.h>
using namespace std;

void copia(char *);
char cadena[15];
char cadena_copia[15];

int main(){
    cout<<"ingrese la cadena"<<endl;
    copia(cadena);
    cout<<"cadena original: "<<cadena<<endl;
    cout<<"cadena copia: "<<cadena_copia<<endl;
}

void copia(char *p){
    cin>>cadena;
    for (int i=0; i<15; i++){
        cadena_copia[i] = cadena[i];
    }
}