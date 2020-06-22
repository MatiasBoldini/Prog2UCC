#ifndef __AH_INCLUDED__
#define __AH_INCLUDED__
#include "avionHidrante.cpp"
#endif

#ifndef __AP_INCLUDED__
#define __AP_INCLUDED__
#include "avionPasajero.cpp"
#endif


int main(void){
    AvionPasajero ap("AZ19B2", 230,"Buenos Aires", 45);
    AvionHidrante ah("BT3533P8",250, 1200, 500);
    ap.mostrarDatos();
    ah.mostrarDatos();
    ah.descargarAgua(300);
    ah.mostrarDatos();
    ah.descargarAgua(20);
    ah.mostrarDatos();
}