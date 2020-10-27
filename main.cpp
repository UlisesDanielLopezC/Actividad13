#include<iostream>
#include "arreglodinamico.h"

using namespace std;

int main(){

    ArregloDinamico<string> arreglo;

    // agregar 4 string's a arreglo usando insertar_final e insersar_inicio()
    arreglo.insertar_final("Buenas");
    arreglo.insertar_final("Noches");
    arreglo.insertar_inicio("Tardes");
    arreglo.insertar_inicio("Malas");

    // mostrar() los elementos de arreglo
    arreglo.mostrar();

    // insertar() el elemento en la posición 2
    arreglo.instertar("llevan a", 2);

    // mostrar() los elementos de arreglo
    arreglo.mostrar();

    // eliminar_inicio() y eliminar_final()
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();

    // eliminar() el elemento de la posición 1
    arreglo.eliminar(1);

    // mostrar() los elementos de arreglo
    arreglo.mostrar();

    return 0;
}