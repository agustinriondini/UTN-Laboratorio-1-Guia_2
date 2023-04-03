#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N2  ============================================";
    string task = "Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.";

    //Variables:

    int num1, num2, check, resto;
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
    cout << "Ingrese dos numeros y comprobaremos si uno es multiplo del otro: " << endl;
    cout << endl;
    cout << "El primero ---->", cin >> num1;
    cout << endl;
    cout << "El segundo ---->", cin >> num2;

    //Proceso:

    check = (num1/num2);
    resto = check%resto;

    if (check == 0){
        cout << "El numero " << num1 << " es multipo de " << num2 << endl;
    }else{
        cout << "Los numeros no son multiplos: >.<" << endl;
    }

    //Fin_del_programa:


    return main();
}
