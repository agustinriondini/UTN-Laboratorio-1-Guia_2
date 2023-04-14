#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
//$ 10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
//$ 12 por kW por el consumo excedente de 101 a 200 kW.
//$ 15 por kW por el consumo excedente de 201 kW en adelante.
//Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el programa calcule e informe el total a pagar por el mismo.
//Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550
//Ejemplo 2: Un consumo de 125 kW, se calculará: $ 10 x 100 + $ 12 x 25 = $1300.
//Ejemplo 3: Un consumo de 250 kW, se calculará: $ 10 x 100 + $ 12 x 100 + $ 15
//x 50 = $ 2950.



int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N17 ============================================";
    string task = "task hidden";

    //Variables:

    int kv, importe;

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

    cout << "============================ FACTURA ELECTRICA ENERPLUS ============================" << endl;
    cout << endl;
    cout << "Ingrese los Kv consumidos por el cliente: "; cin >> kv;
    cout << endl;

    //condicion:

    //$ 10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
    //$ 12 por kW por el consumo excedente de 101 a 200 kW.
    //$ 15 por kW por el consumo excedente de 201 kW en adelante.
    importe = 0;

    //Proceso:

    if(kv<=100){
        importe =  kv*10;
    }
    if (kv>=101 && kv<=200){
        importe = 10*100+12*(kv-100);
    }
    if (kv>=201){
        importe = 10*100+12*100+15*(kv-200);
    }

    //Pantalla:

    cout << "El precio de electricidad a abonar es de: $" << importe << endl;
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
