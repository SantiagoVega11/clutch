#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

bool repartirCartas (int vMazo[],int vMazo1[], int vMazo2[], string vValorMazo[], string vNombres[]){

    system("title CLUTCH - Que comience el juego!");
    bool cartasRepartidas=false;

    for(int a=0; a<=4; a++){
       vMazo1[a]=vMazo[a];
    }



    for(int b=5; b<=9; b++){
        vMazo2[b-5]=vMazo[b];
    }
    cout<<endl;
    cout<<"                          -----------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"                          "<<vNombres[0]<<endl;
    cout<<"                          _____________________________________________________________________________________________________________________________"<<endl;
    cout<<"                         |                    |                    |                    |                    |                    |                    |"<<endl;
    cout<<"                         |  Corral Jugador 1  |";
    for(int x=0; x<=4; x++){
        for(int y=1; y<=20; y++){
            if(vMazo1[x]==y){
            cout<<"    "<<vValorMazo[y-1]<<"     |";
            }
        }
    }

    cout<<endl;
    cout<<"                         |____________________|____________________|____________________|____________________|____________________|____________________|"<<endl;
    cout<<"                         |                    |                    |                    |                    |                    |                    |"<<endl;
    cout<<"                         | Posicion de cartas |         1          |          2         |         3          |         4          |          5         |"<<endl;
    cout<<"                         |____________________|____________________|____________________|____________________|____________________|____________________|"<<endl;

    cout<<endl;
    cout<<"                          -----------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    cout<<"                          "<<vNombres[1]<<endl;
    cout<<"                          _____________________________________________________________________________________________________________________________"<<endl;
    cout<<"                         |                    |                    |                    |                    |                    |                    |"<<endl;
    cout<<"                         |  Corral Jugador 2  |";

    for(int x=0; x<=4; x++){
        for(int y=1; y<=20; y++){
            if(vMazo2[x]==y){
            cout<<"    "<<vValorMazo[y-1]<<"     |";
            }
        }
    }
    cout<<endl;
    cout<<"                         |____________________|____________________|____________________|____________________|____________________|____________________|"<<endl;
    cout<<"                         |                    |                    |                    |                    |                    |                    |"<<endl;
    cout<<"                         | Posicion de cartas |         1          |          2         |         3          |         4          |          5         |"<<endl;
    cout<<"                         |____________________|____________________|____________________|____________________|____________________|____________________|"<<endl;


    cout<<endl<<endl<<endl;

    for(int i=0; i<=9; i++){
       vMazo[i]=vMazo[i+10];
        vMazo[i+10]=0;
    }

    cartasRepartidas=true;

    return cartasRepartidas;

}
