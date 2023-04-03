#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Un negocio de perfumería efectúa descuentos según el importe de la venta. - Si el importe es menor a $100 aplicar un descuento del 5% - Si el importe es entre $100 y hasta $500 aplicar un descuento del 10% - Si el importe es mayor a $500 aplicar un descuento del 15% Hacer un programa donde se ingresa el importe original sin descuento y que se informe por pantalla el importe con el descuento ya aplicado.

int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N5  ============================================";
    string task = "Un negocio de perfumería efectúa descuentos según el importe de la venta. - Si el importe es menor a $100 aplicar un descuento del 5% - Si el importe es entre $100 y hasta $500 aplicar un descuento del 10% - Si el importe es mayor a $500 aplicar un descuento del 15% Hacer un programa donde se ingresa el importe original sin descuento y que se informe por pantalla el importe con el descuento ya aplicado.";

    //Variables:

    float venta, minBonificacion, medBonificacion, maxBonificacion, importeFinal;

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

    cout << "============================ FACTURACION BARATELLI RELOADED ============================" << endl;
    cout << endl;
    cout << "Ingrese el importe de venta: (compra minima $1) " << endl;
    cout << endl;
    cout << "$", cin >> venta;
    cout << endl;

    //Proceso:

    minBonificacion = (venta*5/100);
    medBonificacion = (venta*10/100);
    maxBonificacion = (venta*15/100);

    if(venta <= 1){
        cout << "ERROR!! NONO! --->El minimo de compra es $1" << endl;
    }else if(venta < 100){
        cout << "El importe a abonar es: $" << venta - minBonificacion << endl;
    }else if(venta >=100 && venta <=500 ){
        cout << "El importe a abonar es: $" << venta - medBonificacion << endl;
    }else{
        cout << "El importe a abonar es: $" << venta - maxBonificacion << endl;
    }

    //Fin_del_programa:

    cout << endl;
    cout << "Reinicio automatico del programa para probar multiples valores." << endl;
    cout << endl;
    return main();
}
