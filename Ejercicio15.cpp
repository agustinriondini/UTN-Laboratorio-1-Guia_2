#include <iostream>
#include <cstring>

using namespace std;

//Consigna:
//Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
//“Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
//“Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
//“Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
//“Recursa la materia”, si no aprobó ningún examen parcial.




int main(){

    //Dev:

    string dev = "Resolucion de ejercicios Juan Agustin Riondini -- UTN-FRGP--LABORATORIO--1--";

    //Alert:

    string alert = "===================================== LABORATORIO 1 GUIA 2 =====================================", taskbanner = "===================================== EJERCICIO N15 ============================================";
    string task = "Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:";
    string condition1= "Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.";
    string condition2= "Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. ";
    string condition3= "Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.";
    string condition4= "Recursa la materia”, si no aprobó ningún examen parcial.";

    //Variables:

    float nota1, nota2, nota3, nota4, promedio;

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

    cout << "============================ ESTADO ACADEMICO ============================" << endl;
    cout << endl;
    cout << "ingrese las calificaciones de los cuatro examenes: " << endl;
    cout << endl;
    cout << "Calificacion: "; cin >> nota1;
    cout << "Calificacion: "; cin >> nota2;
    cout << "Calificacion: "; cin >> nota3;
    cout << "Calificacion: "; cin >> nota4;

    //condicion:

    //Proceso:

    if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7) {
        cout << "Promociona" << endl;
    } else if ((nota1 >= 4 && nota2 >= 4 && nota3 >= 4) || (nota1 >= 4 && nota2 >= 4 && nota4 >= 4) || (nota1 >= 4 && nota3 >= 4 && nota4 >= 4) || (nota2 >= 4 && nota3 >= 4 && nota4 >= 4)) {
        cout << "Rinde examen final" << endl;
    } else if (nota1 >= 4 || nota2 >= 4 || nota3 >= 4 || nota4 >= 4) {
        cout << "Recupera Parciales" << endl;
    } else {
        cout << "Recursa la materia" << endl;
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
