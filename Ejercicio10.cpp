#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar tres números y listar el máximo de ellos.

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N10 ============================================";
    string task = "Hacer un programa para ingresar cinco números y listar el máximo de ellos.";

    //Variables:

    float num1, num2, num3, num4, num5, maximo;
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

    cout << "============================ DETECTANDO EL NUMERO MAYOR v2 ============================" << endl;
    cout << endl;
    cout << "Ingrese 5 numeros: " << endl;
    cout << endl;
    cout << "N1 ----->", cin >> num1;
    cout << endl;
    cout << "N2 ----->", cin >> num2;
    cout << endl;
    cout << "N3 ----->", cin >> num3;
    cout << endl;
    cout << "N4 ----->", cin >> num4;
    cout << endl;
    cout << "N5 ----->", cin >> num5;
    cout << endl;

    //Proceso:

    maximo = num1;
    if (num2 > maximo){
        maximo = num2;
    }
    if(num3 > maximo){
        maximo = num3;
    }
    if(num4 > maximo){
        maximo = num4;
    }
    if(num5 > maximo){
        maximo = num5;
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
