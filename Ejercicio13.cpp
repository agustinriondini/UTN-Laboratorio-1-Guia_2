#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listarlo por pantalla.



int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N12 ============================================";
    string task = "Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listarlo por pantalla.";

    //Variables:
    //Nacimiento:
    int dd, mm, aaaa, edad, var;
    //Actuales:
    int DD, MM, AAAA;

    char rta;

    //Preview:

    cout << dev << endl;
    cout << endl;
    cout << alert << endl;
    cout << endl;
    cout << taskbanner << endl;
    cout << endl;
    cout << task << endl;
    cout << endl;

    //Usuario:

    cout << "============================ VALIDADOR DE EDAD ============================" << endl;
    cout << endl;
    cout << "Detector de edad de persona: "<< endl << "Ingrese fecha de nacimiento DD/MM/AAAA" << endl;
    cout << endl;
    cout << "Ingrese el dia: DD"; cin >> dd;
    cout << "Ingrese el mes: MM"; cin >> mm;
    cout << "Ingrese el anho AAAA"; cin >> aaaa;

    //Proceso:

    DD=06;
    MM=04;
    AAAA=2023;
    var = 0001;

    //Cumplidos:
    edad = AAAA - aaaa;
    //No cumplidos:
    if (MM >= mm || MM >= mm && dd <= DD){
        edad = AAAA - aaaa;
    }else{
        edad = AAAA - aaaa - var;
    }


    //Pantalla:

    cout << "La persona tiene: " << edad << endl;

    //Fin_del_programa:
    cout << "Reiniciar programa?  Y/N " << endl;
    cin >> rta;

    switch (rta){
        case 'Y':
        case 'y':
        return main();
        break;
        case 'N':
        case 'n':
        return 0;
    }



    return 0;
}
