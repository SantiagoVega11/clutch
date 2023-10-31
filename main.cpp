#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std;

/// Funcion Mostrar Menu principal
int mostrarMenu(int opcionElegida);

/// Funcion Mostrar cabecera
int mostrarCabecera (int  &cuentaRondas,int  &cuentaPartidas,string vNombres[]);

/// Funcion cargar Nombres
void cargarNombres (string vNombres[], int tam);

/// Funcion Cargar Mazo
void cargarMazo(string vValorMazo[]);

/// Funcion tirar dados
int tirarDado (int numero);

/// Funcion Mezclar Mazo
bool mezclarMazo (int vMazo[]);

/// Funcion Repartir Cartas
bool repartirCartas (int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], string vNombres[]);

/// Funcion Mostrar Cartas
void mostrarCartas (int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], string vNombres[]);

/// Funcion Verificar Orden inicial de Cartas
bool verificarOrden (int vMazo[], int vMazo1[], int vMazo2[],  string vValorMazo[],  string vNombres[]);

/// Funcion Verificar ASES
int verificarAses (int vMazo1[], int vMazo2[], string vNombres[]);

/// Funcion Cambio de Turno
int cambioDeTurno (int inicio);

/// Funcion verificar ganador
int verificarGanador (int vMazo[], int vMazo1[], int vMazo2[], string vNombres[], int ganador);

/// Funcion Sumar Puntaje
int sumarPuntaje(int vMazo1[], int vMazo2[], string vNombres[], int ganador, int PuntajeAcumulado1, int PuntajeAcumulado2, bool roboUltima, bool robado1, bool robado2, bool paso1, bool paso2, bool turno);

/// Funcion Mostrar Estadisticas
void mostrarEstadisticas (bool primerIngreso, int cuentaRondas, int cuentaPartidas, int partidaMasLarga, int mayorRonda, string vNombres[], int puntajeAcumulado1, int puntajeAcumulado2, int ganadorFinal, int partidasGanadas1,int partidasGanadas2);

/// Funcion Mostrar Créditos
void mostrarCreditos();

/// FUNCIONES DE ACCIONES RESPECTO DEL DADO
//  CASO 1
void corralMazoPropio( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[]);

//  CASO 2
void corralMazoAjeno( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[]);

//  CASO 3
bool corralAjenoPropio( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[], bool roboUltima);

//  CASO 4
void propioPropio( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[]);

//  CASO 5
void bloqueo ( int dado, int turno, int vMazo[], int vMazo1[], int vMazo2[], string vValorMazo[], int vBloqueo1[], int vBloqueo2[]);

// CASO 6

int mostrarComodin (int &dado, int retorno);

/// Inicio --------------------------------------------------------------------------------------------------------------------------------------------------------->
int main(){
    system("color 70");
    setlocale(LC_ALL,"Spanish");
    srand (static_cast<unsigned int>(time(0)));

    const int JUGADORES=2, MANO=5, MAZO=20;
    string vNombres[JUGADORES], vValorMazo[MAZO];

    int vMazo1[MANO], vMazo2[MANO], vMazo[MAZO], vBloqueo1[MANO]={0}, vBloqueo2[MANO]={0};
    int opcion, continuar, dado, mayorRonda, partidaMasLarga, retorno;
    int tirar=-1, ganadorFinal=-1, puntajeAcumulado=0,  turno=0, cuentaRondas=0, cuentaPartidas=0, puntajeAcumulado1=0, puntajeAcumulado2=0, partidasGanadas1=0, partidasGanadas2=0, ganador=0;

    bool primerIngreso=false,  cartasOrdenadas=false, repartido=false, primerTiro=false, roboUltima=false, robado1=false, robado2=false, paso1=false, paso2=false;

    opcion=mostrarMenu(opcion);

    while(opcion!=0){



        /// ACA SE DESARROLLA TODO EL JUEGO
        while(opcion==1){
            cuentaPartidas++;
            cuentaRondas=0;
            robado1=false;
            robado2=false;

            if (primerIngreso==false){
                cargarNombres (vNombres, JUGADORES);
                primerIngreso=true;
            }

            do{
                mostrarCabecera (cuentaRondas, cuentaPartidas, vNombres);
                cargarMazo(vValorMazo);

                if(repartido==false){

                    mezclarMazo(vMazo);
                    cout<<"                         El mazo inicial es: "<<endl;
                    repartido=repartirCartas(vMazo, vMazo1, vMazo2, vValorMazo, vNombres);
                    turno=verificarAses(vMazo1, vMazo2, vNombres);
                    verificarOrden(vMazo, vMazo1, vMazo2, vValorMazo, vNombres);
                 }
                else{
                    if(repartido==true){
                        mostrarCartas ( vMazo,  vMazo1,  vMazo2, vValorMazo, vNombres);
                        turno=cambioDeTurno (turno);
                    }
                    cout<< "                         Es el turno de ---> "<<vNombres[turno-1]<<endl;
                }

                tirar=-1;
                while(tirar!=1){
                    cout<<endl<<"                         Presione 1 para tirar el dado ";
                    cin>>tirar;
                    cout<<endl;
                    roboUltima=false;
                }
                if(tirar==1){
                    dado=tirarDado(dado);
                    retorno=0;

                    while(dado>0&&dado<=6&&retorno==0){


                        while(dado<6&&retorno==0){
                            switch (dado){
                            case 1:
                                corralMazoPropio(  dado,  turno,  vMazo,  vMazo1,  vMazo2,  vValorMazo,  vBloqueo1,  vBloqueo2);
                                retorno=1;
                            break;
                            case 2:
                                corralMazoAjeno( dado,  turno,  vMazo,  vMazo1,  vMazo2,  vValorMazo,  vBloqueo1,  vBloqueo2);
                                retorno=1;
                            break;
                            case 3:
                                roboUltima=corralAjenoPropio(  dado,  turno,  vMazo,  vMazo1,  vMazo2,  vValorMazo,  vBloqueo1,  vBloqueo2,  roboUltima);
                                if(turno==1){
                                        robado2=true;
                                    }
                                    else{
                                        robado1=true;
                                    }
                                retorno=1;
                            break;
                            case 4:
                                propioPropio( dado,  turno,  vMazo,  vMazo1,  vMazo2,  vValorMazo,  vBloqueo1,  vBloqueo2);
                                retorno=1;
                            break;
                            case 5:
                                bloqueo (  dado,  turno,  vMazo,  vMazo1,  vMazo2,  vValorMazo,  vBloqueo1,  vBloqueo2);
                                retorno=1;
                            break;
                            }

                        }
                        if(dado==6){

                        retorno=mostrarComodin (dado, retorno);


                        }
                    }

                }

                ganador=verificarGanador(vMazo, vMazo1, vMazo2, vNombres, ganador);
            }
            while(ganador==0);
            system("title CLUTCH - Hay Ganador!");

            mostrarCartas ( vMazo,  vMazo1,  vMazo2,  vValorMazo, vNombres);
            for(int i=0;i<5;i++){
                vBloqueo1[i]=0;
                vBloqueo2[i]=0;
            }

            if(ganador==1){
                cout<<endl<<endl<<"                         El ganador es el jugador "<< vNombres[0]<<endl;
                puntajeAcumulado=sumarPuntaje(vMazo1, vMazo2,  vNombres, ganador, puntajeAcumulado1, puntajeAcumulado2, roboUltima, robado1, robado2, paso1, paso2, turno);
                puntajeAcumulado1+=puntajeAcumulado;
                partidasGanadas1++;
                cout<<endl<<endl<<"                         El puntaje acumulado del jugador "<< vNombres[0]<< " es de " << puntajeAcumulado1 <<" puntos."<<endl;
                cout<<"                         El puntaje acumulado del jugador "<< vNombres[1]<< " es de " << puntajeAcumulado1 <<" puntos."<<endl;
            }
            else{
                if(ganador==2){
                    cout<<endl<<endl<<"                         El ganador es el jugador "<< vNombres[1]<<endl;
                    puntajeAcumulado=sumarPuntaje(vMazo1, vMazo2,  vNombres, ganador, puntajeAcumulado1, puntajeAcumulado2, roboUltima, robado1, robado2, paso1, paso2, turno);
                    puntajeAcumulado2+=puntajeAcumulado;
                    partidasGanadas2++;
                    cout<<endl<<endl<<"                         El puntaje acumulado del jugador "<< vNombres[1]<< " es de " << puntajeAcumulado2 <<" puntos."<<endl;
                    cout<<"                         El puntaje acumulado del jugador "<< vNombres[0]<< " es de " << puntajeAcumulado1 <<" puntos."<<endl;
                }
            }
            ganador=0;
            repartido=false;

            opcion=mostrarMenu(opcion);
        }
        ///ACA MOSTRAMOS LAS ESTADISTICAS
        while(opcion==2){
            mostrarEstadisticas ( primerIngreso, cuentaRondas, cuentaPartidas, partidaMasLarga, mayorRonda, vNombres, puntajeAcumulado1, puntajeAcumulado2, ganadorFinal, partidasGanadas1, partidasGanadas2);
            opcion=mostrarMenu(opcion);
        }

        /// ACA MOSTRAMOS LOS CREDITOS
        while(opcion==3){

            mostrarCreditos();

            opcion=mostrarMenu(opcion);
        }

        /// ACA SALE DEL PROGRAMA
        if(opcion==0&&cuentaPartidas==0){
            cout<<"                         GRACIAS POR UTILIZAR EL JUEGO!"<<endl;
        }
        else{
            if(opcion==0&&cuentaPartidas>0){
                cout<<"                         EL GANADOR FINAL, TOTAL Y ABSOLUTO, DUEÑO DEL UNIVERSO FUE EL JUGADOR "<<vNombres[ganadorFinal]<<endl;
                cout<<"                         GRACIAS POR UTILIZAR EL JUEGO!"<<endl;
            }
        }

    }
    return 0;
}
///FIN ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/// Funcion Mostrar Menu principal

/// Funcion Mostrar Cabecera

/// Funcion cargar Nombres

/// Funcion Cargar Matriz Mazo

/// Funcion tirar dados

/// Funcion Mezclar Mazo

/// Funcion Repartir Cartas

/// Funcion Mostrar Cartas

/// Funcion Verificar Orden inicial de Cartas

/// Funcion Verificar ASES

/// Funcion Cambio de Turno

/// Funcion verificar ganador

/// Funcion Puntaje

/// Funcion Mostrar Estadisticas

/// Funcion Mostrar Créditos

/// FUNCIONES DE ACCIONES RESPECTO DEL DADO
