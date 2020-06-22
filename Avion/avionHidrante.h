#ifndef __AVI_INCLUDED__
#define __AVI_INCLUDED__
#include "avion.cpp"
#endif

class AvionHidrante: public Avion{
  protected:
    int maximoAgua;
    int cantActual;
  public:
    AvionHidrante(char*,int,int,int):Avion(patente, carga){};
    void setMaximoAgua(int);
    int getMaxAgua();
    void setCantActual(int);
    int getCantActual();
    int descargarAgua(int);
    AvionHidrante mostrarDatos();
};