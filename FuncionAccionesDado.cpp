#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

//  CASO 1
void corralMazoPropio( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[]){
            int eleccionA, desbloqueo, aleatorio, cambio1, cambio2;


            if(turno==1){
            cout<<"                         Elegir una carta del corral propio e intercambiarla por una del mazo"<<endl;
            cout<<"                         seleccione la carta del corral propio (1,2,3,4,5) ---> ";
            cin >> eleccionA;

                while(eleccionA<1&&eleccionA>5){
                    cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
                    cin>> eleccionA;
                    cout<<endl;
                }
                if(vBloqueo1[eleccionA-1]==1){
                    vBloqueo1[eleccionA-1]=0;
                    desbloqueo=vMazo1[eleccionA-1];
                    cout<<"                         se desbloqueo la carta  "<<vValorMazo[desbloqueo-1];
                }
                cout<<endl;
                aleatorio=1+rand()%10;
                cambio1=vMazo[aleatorio-1];
                cambio2=vMazo1[eleccionA-1];
                vMazo[aleatorio-1]=cambio2;
                vMazo1[eleccionA-1]=cambio1;
                cout<<"                         Se cambio la carta "<<vValorMazo[cambio1-1]<< " del mazo, por la carta "<<vValorMazo[cambio2-1]<<" del la mano del Jugador"<<endl<<endl;
            }
            else{
                if(turno==2){
                    cout<<endl<<"                         Elegir una carta del propio corral e intercambiarla por una del mazo"<<endl<<endl;
                    cout<<endl<<"                         Seleccione la carta del corral propio (1,2,3,4,5) ---> ";
                    cin >> eleccionA;

                    while(eleccionA<1&&eleccionA>5){
                        cout<<endl<<"                         Ha seleccionado una alternativa invalida, por facor seleccione un valor del 1 al 5 ---> ";
                        cin>> eleccionA;
                        cout<<endl;
                    }
                    if(vBloqueo2[eleccionA-1]==1){
                        vBloqueo2[eleccionA-1]=0;
                        desbloqueo=vMazo2[eleccionA-1];
                        cout<<"                         Se desbloqueo la carta  "<<vValorMazo[desbloqueo-1];
                    }
                    cout<<endl;
                    aleatorio=1+rand()%10;
                    cambio1=vMazo[aleatorio-1];
                    cambio2=vMazo2[eleccionA-1];
                    vMazo[aleatorio-1]=cambio2;
                    vMazo2[eleccionA-1]=cambio1;

                    cout<<endl<<"                         Se cambio la carta "<<vValorMazo[cambio1-1]<< " del mazo, por la carta "<<vValorMazo[cambio2-1]<<" del la mano del Jugador"<<endl<<endl;
                    }
                }
    cout<< "                         Presione 1 para continuar ---> ";
    cin >>eleccionA;

}

//  CASO 2
void corralMazoAjeno( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[]){
    int eleccionA, valido, cambio1, cambio2, aleatorio;

    if(turno==1){
        cout<<endl<<"                         Elegir una carta del corral ajeno e intercambiarla por una del mazo"<<endl;
        cout<<endl<<"                         seleccione la carta del corral ajeno (1,2,3,4,5) ---> ";
        cin >> eleccionA;
        cout<<endl;

        while(eleccionA<1&&eleccionA>5){
            cout<<endl<<"                         Ha seleccionado una alternativa invalida, por facor seleccione un valor del 1 al 5 ---> ";
            cin>> eleccionA;
            cout<<endl;
        }

        valido=1;
        while(valido!=0){
            if(vBloqueo2[eleccionA-1]==1){
                cout<<"                         La carta seleccionada esta bloqueada, por favor elija otra carta --->";
                cin >>eleccionA;
                while(eleccionA<1&&eleccionA>5){
                    cout<<endl<<"                         Ha seleccionado una alternativa invalida, por facor seleccione un valor del 1 al 5 ---> ";
                    cin>> eleccionA;
                    cout<<endl;
                }
            }
            else{
                valido=0;
                cambio1=vMazo2[eleccionA-1];
            }
        }

        aleatorio=1+rand()%10;
        cambio2=vMazo[aleatorio-1];
        vMazo2[eleccionA-1]=cambio2;
        vMazo [aleatorio-1]=cambio1;
        cout<< endl<<"                         Se cambio la carta "<<vValorMazo[cambio2-1]<<" del mazo, por la carta "<< vValorMazo[cambio1-1]<< " de la mano del jugador" <<endl<<endl;

    }
    else{
        if(turno==2){
            cout<<endl<<"                         Elegir una carta del corral ajeno e intercambiarla por una del mazo"<<endl<<endl;
            cout<<endl<<"                         Seleccione la carta del corral ajeno (1,2,3,4,5) ---> ";
            cin >> eleccionA;

            while(eleccionA<1&&eleccionA>5){
                cout<<endl<<"                         Ha seleccionado una alternativa invalida, por facor seleccione un valor del 1 al 5 ---> ";
                cin>> eleccionA;
                cout<<endl;
            }
            cout<<endl;
            valido=1;
            while(valido!=0){
                if(vBloqueo1[eleccionA-1]==1){
                    cout<<"                         La carta seleccionada esta bloqueada, por favor elija otra carta --->";
                    cin >>eleccionA;

                    while(eleccionA<1&&eleccionA>5){
                        cout<<endl<<"                         Ha seleccionado una alternativa invalida, por facor seleccione un valor del 1 al 5 ---> ";
                        cin>> eleccionA;
                        cout<<endl;
                    }
                }
                else{
                    valido=0;
                    cambio1=vMazo1[eleccionA-1];
                }
            }

            aleatorio=1+rand()%10;
            cambio2=vMazo[aleatorio-1];
            vMazo[aleatorio-1]=cambio1;
            vMazo1[eleccionA-1]=cambio2;
            cout<<endl<<"                         Se cambio la carta "<<vValorMazo[cambio2-1]<<" del mazo, por la carta "<< vValorMazo[cambio1-1]<< " de la mano del jugador"<<endl<<endl;
        }
    }
    cout<< "                         Presione 1 para continuar ---> ";
    cin >>eleccionA;


}

//  CASO 3
bool corralAjenoPropio( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[], bool roboUltima){

    int eleccionA, eleccionB, valido, cambio1, cambio2;

    roboUltima=true;

    if(turno==1){
        cout<< endl<<"                         Elegir una carta del corral ajeno y cambiarla por una del corral propio"<<endl;
        cout<< endl<<"                         Seleccione la carta del corral ajeno (1,2,3,4,5) ---> ";
        cin>> eleccionA;

        while(eleccionA<1||eleccionA>5){
            cout<<endl<<"                         Ha seleccionado una alternativa invalida, por facor seleccione un valor del 1 al 5 ---> ";
            cin>> eleccionA;
            cout<<endl;
        }

        valido=1;
        while(valido!=0){
            if(vBloqueo2[eleccionA-1]==1){
                cout<<"                         La carta seleccionada esta bloqueada, por favor elija otra carta --->";
                cin >>eleccionA;

                while(eleccionA<1||eleccionA>5){
                cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
                cin>> eleccionA;
                cout<<endl;
                }
            }
            else{
                valido=0;
                cambio1=vMazo2[eleccionA-1];
            }
        }
        cout<<  endl<<"                         Seleccione la carta del corral Propio (1,2,3,4,5) ---> ";
        cin>> eleccionB;

        while(eleccionB<1||eleccionB>5){
            cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
            cin>> eleccionA;
            cout<<endl;
        }

        cambio2=vMazo1[eleccionB-1];

        vMazo1[eleccionB-1]=cambio1;
        vMazo2[eleccionA-1]=cambio2;

        roboUltima=true;
        cout<<  endl<<"                         Se intercambia la carta ---> "<< vValorMazo[cambio1-1]<<"del corral ajeno, por la carta "<<vValorMazo[cambio2-1]<< " del corral propio." <<endl<<endl;

    }
    else{
        if(turno==2){
            cout<<endl<<"                         Elegir una carta del corral ajeno y cambiarla por una del corral propio"<<endl<<endl;
            cout<<      "                         Seleccione la carta del corral ajeno (1,2,3,4,5) ---> ";
            cin>> eleccionA;

            while(eleccionA<1||eleccionA>5){
            cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
            cin>> eleccionA;
            cout<<endl;
            }
            valido=1;
            while(valido!=0){
                if(vBloqueo1[eleccionA-1]==1){
                    cout<<"                         La carta seleccionada esta bloqueada, por favor elija otra carta --->";
                    cin >>eleccionA;

                    while(eleccionA<1||eleccionA>5){
                        cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
                        cin>> eleccionA;
                        cout<<endl;
                    }
                }
                else{
                    valido=0;
                    cambio1=vMazo1[eleccionA-1];
                }
            }

            cout<<endl<<"                         Seleccione la carta del corral Propio (1,2,3,4,5) ---> ";
            cin>> eleccionB;
            while(eleccionB<1||eleccionB>5){
                cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione unvalor del 1 al 5 ---> ";
                cin>> eleccionB;
                cout<<endl;
            }
            cout<<endl;
            cambio2=vMazo2[eleccionB-1];

            vMazo1[eleccionA-1]=cambio2;
            vMazo2[eleccionB-1]=cambio1;

            roboUltima=true;
            cout<<endl<<"                         Se cambio la carta "<< vValorMazo[cambio1-1]<<" del mazo ajeno, por la carta "<< vValorMazo[cambio2-1]<<"del mazo propio"<<endl<<endl;


        }
    }
    cout<< "                         Presione 1 para continuar ---> ";
    cin >>eleccionA;

    return roboUltima;
}

//  CASO 4
void propioPropio ( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[]){
    int eleccionA, eleccionB, desbloqueo, cambio1, cambio2;

    if(turno==1){
        cout<< endl<<"                         Intercambiar dos cartas del corral propio"<<endl;
        cout<< endl<<"                         Seleccione la carta del corral propio (1,2,3,4,5) ---> ";
        cin>> eleccionA;
        cout<<endl;
        while(eleccionA<1&&eleccionA>5){
            cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
            cin>> eleccionA;
            cout<<endl;
        }

        if(vBloqueo1[eleccionA-1]==1){
            vBloqueo1[eleccionA-1]=0;
            desbloqueo=vMazo1[eleccionA-1];
            cout<<"                         se desbloqueo la carta  "<<vValorMazo[desbloqueo-1];
        }

        cambio1=vMazo1[eleccionA-1];
        cout<< endl<<"                         Seleccione al lugar donde lo quiere cambiar (1,2,3,4,5) ---> ";
        cin>> eleccionB;

        while(eleccionB<1||eleccionB>5){
            cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
            cin>> eleccionA;
            cout<<endl;
        }

        if(vBloqueo1[eleccionB-1]==1){
            vBloqueo1[eleccionB-1]=0;
            desbloqueo=vMazo1[eleccionA-1];
            cout<<"                         se desbloqueo la carta  "<<vValorMazo[desbloqueo-1]<<endl;
        }

        cambio2=vMazo1[eleccionB-1];
        vMazo1[eleccionA-1]=cambio2;
        vMazo1[eleccionB-1]=cambio1;
    }
    else{
        if(turno==2){
            cout<< endl<<"                         Intercambiar dos cartas del corral propio"<<endl;
            cout<<       "                         Seleccione la carta del corral propio (1,2,3,4,5) ---> ";
            cin>> eleccionA;

            while(eleccionA<1||eleccionA>5){
            cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
            cin>> eleccionA;
            cout<<endl;
        }

            if(vBloqueo2[eleccionA-1]==1){
                vBloqueo2[eleccionA-1]=0;
                desbloqueo=vMazo2[eleccionA-1];
                cout<<"                         Se desbloqueo la carta  "<<vValorMazo[desbloqueo-1]<<endl;
            }
            cambio1=vMazo2[eleccionA-1];
            cout<< endl<<"                         Seleccione al lugar donde lo quiere cambiar (1,2,3,4,5) ---> ";
            cin>> eleccionB;
            while(eleccionB<1||eleccionB>5){
                cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
                cin>> eleccionB;
                cout<<endl;
            }

            if(vBloqueo2[eleccionB-1]==1){
                vBloqueo2[eleccionB-1]=0;
                desbloqueo=vMazo2[eleccionB-1];
                cout<<"                         Se desbloqueo la carta  "<<vValorMazo[desbloqueo-1]<<endl;
            }
            cout<<endl;
            cambio2=vMazo2[eleccionB-1];
            vMazo2[eleccionA-1]=cambio2;
            vMazo2[eleccionB-1]=cambio1;

        }
    }
    cout<< "                         Presione 1 para continuar ---> ";
    cin >>eleccionA;

}

//  CASO 5
void bloqueo ( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[]){

    int eleccionA, bloqueo, cuentaBloqueos=0;

    if(turno==1){
        cout<< endl<<"                         Elegir una carta propia para bloquear"<<endl;
        cout<< endl<<"                         Seleccione la carta que quiere bloquear (1,2,3,4,5) ---> ";
        cin>> eleccionA;


        while(eleccionA<1||eleccionA>5){
            cout<<endl<<"                         Ha seleccionado una alternativa invalida, por facor seleccione unvalor del 1 al 5 ---> ";
            cin>> eleccionA;
            cout<<endl;
        }

        for(int b=0; b<5; b++){
            if (vBloqueo1[b]==1){
                cuentaBloqueos++;
            }
        }

        while(vBloqueo1[eleccionA-1]==1&&cuentaBloqueos<5){
            cout<<"                         La carta ya se encuentra bloqueada, por favor seleccione otra ---";
            cin >>eleccionA;
        }

        if(cuentaBloqueos>4){
            cout<<endl<<"                         se han bloqueado mas de 4 cartas, pierde el turno"<<endl;
        }
        else{
            if(cuentaBloqueos<=4){

                vBloqueo1[eleccionA-1]=1;
                bloqueo=vMazo1[eleccionA-1];
                cout<< endl<<"                         Se bloqueo la carta "<<vValorMazo[bloqueo-1]<<endl;
            }

        }
    }
    else{
        if(turno==2){
            cout<<"                         Elegir una carta propia para bloquear"<<endl;
            cout<<"                         Seleccione la carta que quiere bloquear (1,2,3,4,5) ---> ";
            cin>> eleccionA;
            while(eleccionA<1||eleccionA>5){
            cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
            cin>> eleccionA;
            cout<<endl;
        }


            for(int b=0; b<5; b++){
                if (vBloqueo2[b]==1){
                    cuentaBloqueos++;
                }
            }

            while(vBloqueo2[eleccionA-1]==1&&cuentaBloqueos<5){
                cout<<"                         La carta ya se encuentra bloqueada, por favor seleccione otra ---> ";
                cin >>eleccionA;
                while(eleccionA<1||eleccionA>5){
                    cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 5 ---> ";
                    cin>> eleccionA;
                    cout<<endl;
                }
            }

            if(cuentaBloqueos>4){
                cout<<endl<<"                         Se han bloqueado mas de 4 cartas, pierde el turno"<<endl;
            }
            else{
                if(cuentaBloqueos<=4){
                    vBloqueo2[eleccionA-1]=1;
                    bloqueo=vMazo2[eleccionA-1];
                    cout<<endl<<"                         Se bloqueo la carta "<<vValorMazo[bloqueo-1]<<endl<<endl;
                }
            }
        }
    }
    cout<< "                         Presione 1 para continuar ---> ";
    cin >>eleccionA;

}

int mostrarComodin (int &dado, int retorno){
                            cout<< "                         COMODIN!!"<<endl<<endl;
                            cout<< "                         Seleccione 1 para: Intercambiar una carta propia con el mazo"<<endl;
                            cout<< "                         Seleccione 2 para: Intercambiar una carta ajena con el mazo"<<endl;
                            cout<< "                         Seleccione 3 para: Intercambiar una carta propia con una ajena"<<endl;
                            cout<< "                         Seleccione 4 para: Intercambiar cartas del corral propio"<<endl;
                            cout<< "                         Seleccione 5 para: Bloquear una carta del corral propio"<<endl;
                            cout<< "                         Seleccione 6 para: Pasar el turno"<<endl;
                            cout<< "                         Su seleccion es ---> ";
                            cin >> dado;


                            while(dado<1||dado>6){
                                cout<<endl<<"                         Ha seleccionado una alternativa invalida, por favor seleccione un valor del 1 al 6 ---> ";
                                cin>> dado;
                                cout<<endl;
                            }
                            if(dado==6){
                                cout<<endl<< "pasa el turno"<<endl;
                                retorno=1;
                            }
                            return retorno;
}
