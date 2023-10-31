#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

int verificarAses (int vMazo1[], int vMazo2[], string vNombres[]){
    int diferencia=0;
    int control=20;
    int cuentaCartas1=0, cuentaCartas2=0;
    int turno=0;

    while(diferencia==0){
        cuentaCartas1=0, cuentaCartas2=0;
        control-=4;



        for (int a=0; a<5; a++){
            for(int b=1; b<=4; b++){
                if(vMazo1[a]==control+b){
                    cuentaCartas1++;
                }
            }
        }

        for (int a=0; a<5; a++){
            for(int b=1; b<=4; b++){
                if(vMazo2[a]==control+b){
                    cuentaCartas2++;
                }
            }
        }
        diferencia=cuentaCartas1-cuentaCartas2;
    }

    if(cuentaCartas1>cuentaCartas2){
        system("title CLUTCH - Comienza el Juego!");
        cout<<endl<< "                         **********************************************************"<<endl;
        cout<<"                         El jugador que comienza el juego es: "<<vNombres[0]<<endl<<endl;
            turno=1;

    }
    else{
        if(cuentaCartas2>cuentaCartas1){

            cout<<endl<< "                         **********************************************************"<<endl;
            cout<<"                         El jugador que comienza el juego es: "<<vNombres[1]<<endl<<endl;
            turno=2;
        }
    }
    return turno;
}
