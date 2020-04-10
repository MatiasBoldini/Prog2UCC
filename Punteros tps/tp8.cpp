#include <iostream>
using namespace std;

int vocales(char[]);

int main(){
    char cadena[50];
    cout<<"Ingrese la cadena de texto: ";
    cin.getline(cadena,50);
    cout<<"La cantidad de vocales minusculas en la cadena es de: "<<vocales(cadena)<<endl;
}

int vocales(char c[]){
    int cant=0, i=0;
    while(c[i]!='\0'){
        if (c[i]=='a' or c[i]=='e' or c[i]=='i' or c[i]=='o' or c[i]=='u') cant++;
        i++;               
    }
    return cant;
}
