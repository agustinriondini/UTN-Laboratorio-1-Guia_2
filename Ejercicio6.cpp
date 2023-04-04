#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N6  ============================================";
    string task = "Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.";

    //Variables:

    float num1, num2, num3;
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

    cout << "============================ CONTROL DE NUMEROS ============================" << endl;
    cout << endl;
    cout << "Ingrese 3 numeros enteros: " << endl;
    cout << endl;
    cout << "N1 ----->", cin >> num1;
    cout << endl;
    cout << "N2 ----->", cin >> num2;
    cout << endl;
    cout << "N3 ----->", cin >> num3;
    cout << endl;

    //Proceso:


    if(num1 == num2 && num2 == num3){
        cout << "Los numeros ingresados son todos iguales" << endl;
    }else{
        cout << "" << endl;
    }

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
