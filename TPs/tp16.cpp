#include <iostream>

using namespace std;

int main() {
    int m,n,f,c,M[20][20], iinicial, ifinal, jinicial, jfinal, s=0;
    cout<<"Ingrese numero de filas ";
    cin>>m;
    cout<<"Ingrese numero de columnas";
    cin>>n;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout<<"Ingrese numero ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>endl;
        }
    }


cout<<"Matriz Ingresada: "<<endl;
cout<<endl;
for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        cout<<M[i][j]<<"/t";
    }
    cout<<endl;
    }


do {cout<<"Ingrese posicion de la fila entre 1 y "<<m<<endl;
    cin>>f;
    cout<<"Ingrese posicion de la columna entre 1 y "<<n<<endl;
    cin>>c;
    }
    while ((f<0 && f>m-1) && (c<0 && c>n-1));


iinicial=f-1;
ifinal=f+1
}