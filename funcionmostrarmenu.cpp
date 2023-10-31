#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

int mostrarMenu(int opcionElegida){


    opcionElegida=-1;
    system("title CLUTCH - Entrega Final Laboratorio 1");

    cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;

    cout<<"                         CLUTCH "<< endl<<endl;
    cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;
    cout<<"                         1 - JUGAR"<<endl;
    cout<<"                         2 - ESTADÍSTICAS"<<endl;
    cout<<"                         3 - CRÉDITOS"<<endl;
    cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;
    cout<<"                         0 - SALIR"<<endl<<endl;
    cout<<"                         Elección ---> ";
    cin >> opcionElegida;


    while(opcionElegida<0&&opcionElegida>3){

        cout<<"                         Se ha seleccionado una opción no válida, por favor elija nuevamente"<<endl<<endl;

        cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;

        cout<<"                         CLUTCH "<< endl<<endl;
        cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;
        cout<<"                         1 - JUGAR"<<endl;
        cout<<"                         2 - ESTADÍSTICAS"<<endl;
        cout<<"                         3 - CRÉDITOS"<<endl;
        cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;
        cout<<"                         0 - SALIR"<<endl<<endl;
        cout<<"                         Elección ---> ";
        cin >> opcionElegida;
    }
return opcionElegida;
}
