#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar tres números y listar el máximo de ellos.

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N11 ============================================";
    string task = "Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos.";

    //Variables:

    int numero, i;
    int count = 0;
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

    cout << "============================ DETECTANDO EL NUMERO MAYOR v2.1 ============================" << endl;
    cout << endl;
    cout << "Ingrese 5 numeros, averiguaremos cuantos de ellos son positivos: " << endl;
    cout << endl;

    //Proceso:

    for (i=0; i<5; i++){
        cin >> numero;
        if(numero>0){
        count++;
        }
    }
    //Pantalla:

    cout << "La cantidad de numeros positivos son: " << count << endl;

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
