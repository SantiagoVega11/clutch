#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

int mostrarCabecera (int  &cuentaRondas,int  &cuentaPartidas,string vNombres[]){


    system ("cls");
    system("title CLUTCH - Juego en Marcha");
    cout<<endl<<endl;

    cout << "                        ________________________________________________________________________________________________"<<endl<<endl;

    cout<< "                         CLUTCH"<<endl<<endl;
    cuentaRondas++;
    cout<< "                         PARTIDA # "<<cuentaPartidas<<endl;
    cout<< "                         RONDA # "<<cuentaRondas<<endl;
    cout<< "                         "<<vNombres[0]<< " vs "<< vNombres[1]<<endl<<endl;
}
