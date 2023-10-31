#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

int sumarPuntaje(int vMazo1[], int vMazo2[], string vNombres[], int ganador, int PuntajeAcumulado1, int puntajeAcumulado2, bool roboUltima, bool robado1, bool robado2, bool paso1, bool paso2, bool turno){
    int sumaPuntaje=0, cartasMalUbicadas=5, cuentaOrden=0;
    /// valores de Puntaje:
    //por ganar la partida
    const int PUNT_GANAR=15;
    //por robar la ultima carta al contrincante
    const int PUNT_ROBARULTIMA=10;
    //por cada carta que el contrincante tiene mal ubicada
    const int PUNT_ERRORAJENO=5;
    //por no haber sido robado en la partida
    const int PUNT_ILESO=5;
    //por no pasar de turno
    const int PUNT_TURNO=10;



    if (ganador==1){

        for(int a=0; a<=4; a++){
            for (int b=1; b<=4; b++){
                if(vMazo2[a]==a*4+b){
                    cuentaOrden++;
                }
            }
        }

        cartasMalUbicadas-=cuentaOrden;

        sumaPuntaje+=PUNT_GANAR;

        cout<< "                                                  El Jugador "<< vNombres[ganador-1]<<" recibe los siguientes puntos:"<<endl;
        cout<< "                                                  --------------------------------------------------------------------------"<<endl;
        cout<< "                                                  Ganar la partida                                   "<<PUNT_GANAR<<" puntos."<<endl;

        if(turno==2){
                cout<< "                                                  Robar la ultima carta                              "<<0<<" puntos."<<endl;
            }
            else{
                sumaPuntaje+=PUNT_ROBARULTIMA;
                cout<< "                                                  Robar la ultima carta                              "<<PUNT_ROBARULTIMA<<" puntos."<<endl;
            }

        sumaPuntaje+=PUNT_ERRORAJENO*cartasMalUbicadas;
        cout<< "                                                  Cartas mal ubicadas del rival x "<<cartasMalUbicadas<<"                  "<<PUNT_ERRORAJENO*cartasMalUbicadas<<" puntos."<<endl;
        if(robado1==false){
        sumaPuntaje+=PUNT_ILESO;
        cout<< "                                                  Salir ileso                                        "<<PUNT_ILESO<<" puntos."<<endl;
        }
        else{
        cout<< "                                                  Salir ileso                                        "<<0<<" puntos."<<endl;
        }
        if(paso1==false){
        sumaPuntaje+=PUNT_TURNO;
        cout<< "                                                  No pasar turno                                     "<<PUNT_ILESO<<" puntos."<<endl;
        }
        else{
        cout<< "                                                  No pasar turno                                     "<<0<<" puntos."<<endl;
        }
        PuntajeAcumulado1+=sumaPuntaje;

        cout<< "                                                  -----------------------------------------------------------------------------------------------"<<endl;
        cout<<endl<<"                                                  La suma total del puntaje es: "<<sumaPuntaje<<" puntos "<<endl;
        cout<< "                                                  __________________________________________________________________________"<<endl;
    }
    else{
        if(ganador==2){

            for(int a=0; a<=4; a++){
                for (int b=1; b<=4; b++){
                    if(vMazo1[a]==a*4+b){
                        cuentaOrden++;
                    }
                }
            }

            cartasMalUbicadas-=cuentaOrden;

            cout<< "                                                  El Jugador "<< vNombres[ganador-1]<<" recibe los siguientes puntos:"<<endl;
            cout<< "                                                  -------------------------------------------------------------------------------------------"<<endl;
            cout<< "                                                  Ganar la partida                                   "<<PUNT_GANAR<<" puntos."<<endl;

            sumaPuntaje+=PUNT_GANAR;

            if(turno==1){
                cout<< "                                                  Robar la ultima carta                              "<<0<<" puntos."<<endl;
            }
            else{
                sumaPuntaje+=PUNT_ROBARULTIMA;
                cout<< "                                                  Robar la ultima carta                              "<<PUNT_ROBARULTIMA<<" puntos."<<endl;
            }

            sumaPuntaje+=PUNT_ERRORAJENO*cartasMalUbicadas;
            cout<< "                                                  Cartas mal ubicadas del rival x "<<cartasMalUbicadas<<"                  "<<PUNT_ERRORAJENO*cartasMalUbicadas<<" puntos."<<endl;


            if(robado2==false){
            sumaPuntaje+=PUNT_ILESO;
            cout<< "                                                  Salir ileso                                        "<<PUNT_ILESO<<" puntos."<<endl;
            }
            else{
            cout<< "                                                  Salir ileso                                        "<<0<<" puntos."<<endl;
            }
            if(paso2==false){
            sumaPuntaje+=PUNT_TURNO;
            cout<< "                                                  No pasar turno                                     "<<PUNT_ILESO<<" puntos."<<endl;
            }
            else{
            cout<< "                                                  No pasar turno                                     "<<0<<" puntos."<<endl;
            }
            puntajeAcumulado2+=sumaPuntaje;
            cout<< "                                                  --------------------------------------------------------------------------"<<endl;
            cout<<endl<<"                                                  La suma total del puntaje es: "<<sumaPuntaje<<" puntos "<<endl;
            cout<< "                                                  __________________________________________________________________________"<<endl;
        }
    }
    return sumaPuntaje;
}
