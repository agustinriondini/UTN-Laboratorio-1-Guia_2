#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para leer tres números diferentes y determinar e informar el número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.


int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N12 ============================================";
    string task = "Hacer un programa para leer tres números diferentes y determinar e informar el número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8..";

    //Variables:

    int num1, num2, num3, minNum, maxNum, medio;

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

    cout << "============================ DETECTANDO EL NUMERO MEDIO ============================" << endl;
    cout << endl;
    cout << "Ingrese 3 numeros, averiguaremos cual de ellos nos ni maximo ni minimo: " << endl;
    cout << endl;
    cout << "N1 ---->"; cin >> num1;
    cout << "N2 ---->"; cin >> num2;
    cout << "N3 ---->"; cin >> num3;

    //Proceso:

    maxNum = num1;
    if (num2 > maxNum){
        maxNum = num2;
    }
    if (num3 > maxNum){
        maxNum = num3;
    }
    minNum = num1;
    if (num2 < minNum){
        minNum = num2;
    }
    if (num3 < minNum){
        minNum = num3;
    }

    if (num1 != minNum && num1 != maxNum){
        medio = num1;
    }
    if (num2 != minNum && num2 != maxNum){
        medio = num2;
    }
    if (num3 != minNum && num3 != maxNum){
        medio = num3;
    }
    //Pantalla:

    cout << "El numero del medio es: " << medio << endl;

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
