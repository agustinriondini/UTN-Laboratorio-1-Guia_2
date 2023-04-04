#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N8  ============================================";
    string task = "Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es: ";

    //Variables:

    float lado1, lado2, lado3;
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

    cout << "============================ TIPOS DE TRIANGULOS ============================" << endl;
    cout << endl;
    cout << "Ingrese 3 numeros, que representan los lados de un triangulo: " << endl;
    cout << endl;
    cout << "Lado1 ----->", cin >> lado1;
    cout << endl;
    cout << "Lado2 ----->", cin >> lado2;
    cout << endl;
    cout << "Lado3 ----->", cin >> lado3;
    cout << endl;

    //Proceso:


    if(lado1 == lado2 && lado1 == lado3){
        cout << "Todos los lados son iguales, el triangulo es EQUILATERO" << endl;
    }else if(lado1 != lado2 && lado2 != lado3 && lado3 !=lado1 ){
        cout << "Todos los lados son distintos, el triangulo es ESCALENO" << endl;
    }else{
        cout << "Hay dos lados iguales, el triangulo es ISOSCELES" << endl;
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
