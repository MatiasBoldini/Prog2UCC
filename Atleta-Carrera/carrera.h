#ifndef __ATL_INCLUDED__
#define __ATL_INCLUDED__
#include "atleta.h"
#endif

class Carrera: public Atleta{
  protected:
    int distancia;
    Atleta competidores[10];
    char *fecha;
    char *ciudad;
    int cantidadparticipantes;
  public:
    Carrera( char* fcha,char* cdad,int dstancia, int ctdparti):Atleta(nomape,nacionalidad,numero,tiempo){};
    void setDistancia(int);
    int getDistancia();
    void setCiudad(char*);
    char* getCiudad();
    void setFecha(char*);
    char* getFecha();
    void setCantidadParticipantes(int);
    int getCantidadParticipantes();
    char agregarAtleta(Atleta& );
    Atleta getGanador();
};
