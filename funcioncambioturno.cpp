#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

int cambioDeTurno (int turno){

    int cambio;

    if(turno==1){
        cambio=2;
    }
    else{
        cambio=1;
    }
    return cambio;
}
