#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N3  ============================================";
    string task = "Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar";

    //Variables:

    int numero;
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

    cout << "Queremos adivinar si el numero que ingresas es par o impar:" << endl;
    cout << endl;
    cout << "Ingrese un numero: " << endl;
    cout << endl;
    cout << "El primero ---->", cin >> numero;
    cout << endl;

    //Proceso:


    if (numero %2 == 0){
        cout << "El numero " << numero << " es par" << endl;
    }else{
        cout << "El numero es impar >.<" << endl;
    }

    //Fin_del_programa:


    return main();
}
