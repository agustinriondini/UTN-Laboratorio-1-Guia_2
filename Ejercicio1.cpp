#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N1  ============================================";
    string task = "Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.";

    //Variables:

    float numero;

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

    cout << "Programa en bucle para poder probar varios numeros sin cerrarlo." << endl;
    cout << endl;
    cout << "Ingrese un numero: " << endl;
    cout << endl;
    cout << "Tu numero ingresado ---->", cin >> numero;

    //Proceso:

    if (numero>0){
        cout << "El numero ingresado es positivo." << endl;
    }else if (numero<0){
        cout << "El numero ingresado es negativo." << endl;
    }else{
        cout << "El numero que ingresaste es cero" << endl;
    }

    //Fin_del_programa:


    return main();
}
