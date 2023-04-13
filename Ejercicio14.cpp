#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100 pero que no sean múltiplos de 400. Esto último significa que el año 1900 no es bisiesto, pero el año 2000 si lo es. Hacer un programa para que ingresar un año y listar por pantalla si es bisiesto o no lo es.



int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N14 ============================================";
    string task = "Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100 pero que no sean múltiplos de 400. Esto último significa que el año 1900 no es bisiesto, pero el año 2000 si lo es. Hacer un programa para que ingresar un año y listar por pantalla si es bisiesto o no lo es.";

    //Variables:

    int aaaa;

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

    cout << "============================ VERIFICADOR DE ANHO BISIESTO ============================" << endl;
    cout << endl;
    cout << "Ingrese el anho en formato aaaa: Ejemplo 2023" << endl;
    cout << endl;
    cout << "Ingrese el anho AAAA ---->"; cin >> aaaa;

    //Proceso:

    if (aaaa %4 !=0 || aaaa %100 == 0 && aaaa %400 != 0 ){
        cout << "El anho NO es bisiesto" << endl;
    }else{
        cout << "El anho es bisiesto" << endl;
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
