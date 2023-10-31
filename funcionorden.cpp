#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

bool verificarOrden (int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], string vNombres[]){

        int cuentaOrden=0;
        bool ordenado1=false, ordenado2=false;

        for(int a=0; a<=4; a++){
            for (int b=1; b<=4; b++){
                if(vMazo1[a]==a*4+b){
                    cuentaOrden++;
                }
            }
        }
        if (cuentaOrden==5){
            ordenado1=true;
        }
        else{
            ordenado1=false;
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
            ordenado2=true;
        }
        else{
            ordenado2=false;
        }

        if (ordenado1==true||ordenado2==true){
            cout<< endl<<"                         Las cartas salieron Ordenadas en al menos un jugador, hay que repartir de nuevo"<<endl;

            repartirCartas(vMazo,vMazo1,vMazo2, vValorMazo, vNombres);
        }
}
