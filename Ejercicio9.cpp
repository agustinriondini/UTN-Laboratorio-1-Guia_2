#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar tres números y listar el máximo de ellos.

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N9  ============================================";
    string task = "Hacer un programa para ingresar tres números y listar el máximo de ellos.";

    //Variables:

    float num1, num2, num3, maximo;
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

    cout << "============================ DETECTANDO EL NUMERO MAYOR ============================" << endl;
    cout << endl;
    cout << "Ingrese 3 numeros, que representan los lados de un triangulo: " << endl;
    cout << endl;
    cout << "N1 ----->", cin >> num1;
    cout << endl;
    cout << "N2 ----->", cin >> num2;
    cout << endl;
    cout << "N3 ----->", cin >> num3;
    cout << endl;

    //Proceso:

    maximo = num1;
    if (num2 > maximo){
        maximo = num2;
    }
    if(num3 > maximo){
        maximo = num3;
    }

    //Pantalla:

    cout << "El numero mayor es: " << maximo << endl;

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
