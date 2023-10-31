#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

bool mezclarMazo (int vMazo[]){

    bool mezclado=false;

    if(mezclado==false){

        for(int c=0; c<20; c++){
        vMazo[c]=c+1;
        }

        for(int m=0; m<500; m++){
            int pos1 = rand()%20;
            int pos2 = rand()%20;
            int aux = vMazo[pos1];
            vMazo[pos1] = vMazo[pos2];
            vMazo[pos2] = aux;
            mezclado=true;
        }

    }
    return mezclado;
}
