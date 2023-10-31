#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include <conio.h>

using namespace std ;

int tirarDado (int numero){

    numero=1+rand()%6;

    switch(numero){
        case 1:
            cout << "                         +-----+" <<endl;
            cout << "                         |     |" <<endl;
            cout << "                         |  °  |" <<endl;
            cout << "                         |     |" <<endl;
            cout << "                         +-----+" <<endl;
            break;
        case 2:
            cout << "                         +-----+" <<endl;
            cout << "                         |   ° |" <<endl;
            cout << "                         |     |" <<endl;
            cout << "                         | °   |" <<endl;
            cout << "                         +-----+" <<endl;
            break;
        case 3:
            cout << "                         +-----+" <<endl;
            cout << "                         |   ° |" <<endl;
            cout << "                         |  °  |" <<endl;
            cout << "                         | °   |" <<endl;
            cout << "                         +-----+" <<endl;
            break;
        case 4:
            cout << "                         +-----+" <<endl;
            cout << "                         | ° ° |" <<endl;
            cout << "                         |     |" <<endl;
            cout << "                         | ° ° |" <<endl;
            cout << "                         +-----+" <<endl;
            break;
        case 5:
            cout << "                         +-----+" <<endl;
            cout << "                         | ° ° |" <<endl;
            cout << "                         |  °  |" <<endl;
            cout << "                         | ° ° |" <<endl;
            cout << "                         +-----+" <<endl;
            break;
        case 6:
            cout << "                         +-----+" <<endl;
            cout << "                         | ° ° |" <<endl;
            cout << "                         | ° ° |" <<endl;
            cout << "                         | ° ° |" <<endl;
            cout << "                         +-----+" <<endl;
            break;
    }





    return numero;
}
