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
    cout<<"                         2 - ESTAD�STICAS"<<endl;
    cout<<"                         3 - CR�DITOS"<<endl;
    cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;
    cout<<"                         0 - SALIR"<<endl<<endl;
    cout<<"                         Elecci�n ---> ";
    cin >> opcionElegida;


    while(opcionElegida<0&&opcionElegida>3){

        cout<<"                         Se ha seleccionado una opci�n no v�lida, por favor elija nuevamente"<<endl<<endl;

        cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;

        cout<<"                         CLUTCH "<< endl<<endl;
        cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;
        cout<<"                         1 - JUGAR"<<endl;
        cout<<"                         2 - ESTAD�STICAS"<<endl;
        cout<<"                         3 - CR�DITOS"<<endl;
        cout<<"_________________________________________________________________________________________________________________________________________________"<<endl <<endl;
        cout<<"                         0 - SALIR"<<endl<<endl;
        cout<<"                         Elecci�n ---> ";
        cin >> opcionElegida;
    }
return opcionElegida;
}
