#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

void mostrarEstadisticas (bool primerIngreso, int cuentaRondas, int cuentaPartidas, int partidaMasLarga, int mayorRonda, string vNombres[], int puntajeAcumulado1, int puntajeAcumulado2, int ganadorFinal, int partidasGanadas1,int partidasGanadas2){
            system ("cls");
            cout<<endl<<endl;
            if(primerIngreso==false){
                cout<<"                         Aun no hay estadísticas para mostrar, por favor seleccione otra opción"<<endl;
            }
            else{
                if(cuentaPartidas==1){
                    partidaMasLarga=cuentaPartidas;
                    mayorRonda=cuentaRondas;
                }
                else{
                    if(cuentaRondas>mayorRonda){
                        partidaMasLarga=cuentaPartidas;
                        mayorRonda=cuentaRondas;
                    }
                    else{
                        if(cuentaRondas<=mayorRonda){
                            mayorRonda=cuentaRondas;
                            partidaMasLarga=cuentaPartidas;
                        }
                    }
                }

                    cout<<"                         ESTADÍSTICAS:"<<endl;
                    cout<<"                         ______________________________________________________________________"<<endl<<endl;
                    cout<<"                         CANTIDAD DE PARTIDAS "<<cuentaPartidas<<endl;
                    cout<<"                         LA PARTIDA MAS LARGA FUE LA # "<<partidaMasLarga<<" CON "<<mayorRonda<<" RONDAS."<<endl;
                    cout<<"                         ----------------------------------------------------------------------"<<endl;
                    cout<<"                         PUNTAJE ACUMULADO DEL JUGADOR "<<vNombres[0]<<"  "<<puntajeAcumulado1<<endl;
                    cout<<"                         PUNTAJE ACUMULADO DEL JUGADOR "<<vNombres[1]<<"  "<<puntajeAcumulado2<<endl<<endl;

                    if(puntajeAcumulado1>puntajeAcumulado2){
                        cout<<"                         EL JUGADOR CON MAYOR PUNTAJE ES "<<vNombres[0]<<" CON "<<puntajeAcumulado1<<" PUNTOS."<<endl;
                        ganadorFinal=0;
                    }
                    else{
                        if(puntajeAcumulado2>puntajeAcumulado1){
                            cout<<"                         EL JUGADOR CON MAYOR PUNTAJE ES "<<vNombres[1]<<" CON "<<puntajeAcumulado2<<" PUNTOS."<<endl;
                            ganadorFinal=1;
                        }
                        else{
                            cout<<"                         LOS JUGADORES ESTAN EMPATADOS EN PARTIDAS CON "<<puntajeAcumulado1<<" PUNTOS."<<endl;
                            ganadorFinal=-1;
                        }
                    }
                    cout<<"                         PARTIDAS GANADAS POR EL JUGADOR "<<vNombres[0]<<"   "<<partidasGanadas1 <<endl;
                    cout<<"                         PARTIDAS GANADAS POR EL JUGADOR "<<vNombres[1]<<"   "<<partidasGanadas2 <<endl;
                    if(partidasGanadas1>partidasGanadas2){
                        cout<<"                         El JUGADOR QUE MAS PARTIDAS GANO FUE "<<vNombres[0]<<" CON "<<partidasGanadas1<<" PARTIDAS."<<endl;
                    }
                    else{
                        if(partidasGanadas2>partidasGanadas1){
                            cout<<"                         El JUGADOR QUE MAS PARTIDAS GANO FUE "<<vNombres[1]<<" CON "<<partidasGanadas2<<" PARTIDAS."<<endl;
                        }
                        else{
                            cout<<"                         LOS JUGADORES ESTAN EMPATADOS EN PARTIDAS CON "<<partidasGanadas1<<" PARTIDAS."<<endl;
                        }
                    }

            }

}
