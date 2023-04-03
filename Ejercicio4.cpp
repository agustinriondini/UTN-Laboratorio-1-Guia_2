#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia absoluta entre ambos.

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N4  ============================================";
    string task = "Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia absoluta entre ambos.";

    //Variables:

    float numero, numero2;
    bool check;
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

    cout << "Queremos calcular la diferencia absoluta entre dos numeros, por eso te pido que me des esos numeros: " << endl;
    cout << endl;
    cout << "Ingrese un numero: " << endl;
    cout << endl;
    cout << "El primero ---->", cin >> numero;
    cout << endl;
    cout << "El primero ---->", cin >> numero2;
    cout << endl;

    //Proceso:

    check = numero > numero2;

    if (check == true){
        cout << "La diferencia es: " << numero-numero2 << endl;
    }else{
        cout << "La diferencia es: " << numero2-numero << endl;
    }

    //Fin_del_programa:


    return main();
}
