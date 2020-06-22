#ifndef __AVI_INCLUDED__
#define __AVI_INCLUDED__
#include "avion.cpp"
#endif

class AvionPasajero: public Avion{
  protected:
    char* destino;
    int duracion;
  public:
    AvionPasajero(char*,int,char*,int):Avion(patente, carga){};
    void setDestino(char*);
    char* getDestino();
    void setDuracion(int);
    int getDuracion();
    AvionPasajero mostrarDatos();
};