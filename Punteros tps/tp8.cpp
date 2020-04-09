#include <iostream>
#include <string.h>
using namespace std;

char cadena[50];
int vocales (char*);
int c, cont=0;

int main(){
    cout<<"Ingrese cantidad de caracteres pertenecientes a la cadena: "<<endl;
    cont = vocales(cadena);
    c=cont;
    cout<<"Cantidad de vocales minusculas; "<<c<<endl;
}

int vocales(char*p){
    cin.getline(cadena, 50);
    int lon=strlen(p);
    cout<<"longitud del puntero "<<lon<<endl;
    for (int i=0; i<lon; i++){
        if ((*(p+i)=='a') || (*(p+i)=='e') || (*(p+i)=='i') || (*(p+i)=='o') || (*(p+i)=='u')){
            cont ++;
        return cont;
        }
    }
}
