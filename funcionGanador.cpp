#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

int verificarGanador (int vMazo[], int vMazo1[], int vMazo2[], string vNombres[], int ganador){



    int cuentaOrden=0;

        for(int a=0; a<=4; a++){
            for (int b=1; b<=4; b++){
                if(vMazo1[a]==a*4+b){
                    cuentaOrden++;
                }
            }
        }
        if (cuentaOrden==5){
            ganador=1;
        }
        cuentaOrden=0;
        for(int a=0; a<=4; a++){
            for (int b=1; b<=4; b++){
                if(vMazo2[a]==a*4+b){
                    cuentaOrden++;
                }
            }
        }
        if (cuentaOrden==5){
            ganador=2;
        }
return ganador;
}
