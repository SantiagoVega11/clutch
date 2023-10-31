#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

void cargarNombres (string nombres[], int tam){

        system ("cls");
        cout<<endl<<endl;
        char confirmar;

        system("title CLUTCH - Cargando nombres");

        cout<<"                         ______________________________________________"<<endl<<endl;

        cout<<"                         CLUTCH"<<endl<<endl;
        cout<<"                         ______________________________________________"<<endl<<endl;

        cout<<"                         Antes de comenzar deben registrar sus nombres:"<<endl;
        cout<<"                         Nombre Jugador 1? ---> ";
        cin >> nombres[0];
        cout<<endl<<"                         Nombre Jugador 2? ---> ";
        cin >> nombres[1];
        cout<<endl<<"                         Confirmar nombres? (S/N) ---> ";
        cin >> confirmar;
        cout<<endl;
        cout<<"                         ______________________________________________"<<endl<<endl;

        while(confirmar=='n'){
            cout<<"                         Nombre Jugador 1? ---> ";
            cin >> nombres[0];
            cout<<endl<<"                         Nombre Jugador 2? ---> ";
            cin >> nombres[1];
            cout<<endl<<"                         Confirmar nombres? (S/N) ---> ";
            cin >> confirmar;
            cout<<endl;
        }
    }
