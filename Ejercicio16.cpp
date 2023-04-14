#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar por teclado cuatro n�meros. Si los valores que se ingresaran est�n ordenados en forma creciente, emitir el mensaje �Conjunto
//Ordenado�, caso contrario emitir el mensaje: �Conjunto Desordenado�.
//Ejemplo 1: si los n�meros que se ingresan son 8, 10, 12 y 14, entonces est�n
//ordenados.



int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N16 ============================================";
    string task = "Hacer un programa para ingresar por teclado cuatro n�meros. Si los valores que se ingresaran est�n ordenados en forma creciente, emitir el mensaje �ConjuntoOrdenado�, caso contrario emitir el mensaje: �Conjunto Desordenado�";
    string ej= "Ejemplo 1: si los n�meros que se ingresan son 8, 10, 12 y 14, entonces est�n ordenados.";
    string condition1= "Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.";
    string condition2= "Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes. ";
    string condition3= "Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.";
    string condition4= "Recursa la materia�, si no aprob� ning�n examen parcial.";

    //Variables:

    float n1, n2, n3,n4;

    char rta;

    //Preview:

    cout << dev << endl;
    cout << endl;
    cout << alert << endl;
    cout << endl;
    cout << taskbanner << endl;
    cout << endl;
    cout << task << endl;
    cout << ej <<endl;
    cout << endl;

    //Usuario:

    cout << "============================ ESTADO ACADEMICO ============================" << endl;
    cout << endl;
    cout << "ingrese cuatro numeros al azar para evaluar si estan ordenados " << endl;
    cout << endl;
    cout << "Ingrese los numeros: "; cin >> n1 >> n2 >> n3 >> n4;

    //condicion:

    //Proceso:

    if (n1<=n2 && n2<=n3 && n3<=n4){
        cout << "Ingresaste los numeros ordenados de menor a mayor- " << endl << " Conjunto ordenado";
    }else{
        cout << "Los numeros no se encuentran ordenados. " << endl << " Conjunto desordenado";
    }


    //Pantalla:


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
