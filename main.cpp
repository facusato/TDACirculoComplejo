#include "lista.h"
#include <iostream>

using namespace std;

int main()
{
    Lista lista;
    crearLista(lista);
    //ptrNodoLista es un puntero a una estructura que tiene un dato y un *nodo al siguiente
    PtrNodoLista ptrNodoLista;
    Circulo dato1,dato2,dato3,dato4;
    construirCirculo(dato1);construirCirculo(dato2);construirCirculo(dato3);
    construirCirculo(dato4,5,225,236,145,7,11);
    setRadio(dato1,2);setRadio(dato2,3);setRadio(dato3,4);
    setPosX(dato1,3);setPosY(dato1,2);
    setColorRojo(dato1.color,245);setColorVerde(dato1.color,215);setColorAzul(dato1.color,195);
    adicionarFinal(lista, dato1); adicionarFinal(lista, dato2); adicionarFinal(lista, dato3);adicionarFinal(lista,dato4);
    ptrNodoLista = primero(lista);
    while(ptrNodoLista != NULL)
    {
        cout << "Circulo:\n";
        cout << "Radio:\t"<< ptrNodoLista->dato.radio << "\n";
        cout << "Rojo:\t" <<ptrNodoLista->dato.color.rojo << "\n";
        cout << "Verde:\t" <<ptrNodoLista->dato.color.verde << "\n";
        cout << "Azul:\t" <<ptrNodoLista->dato.color.azul << "\n";
        cout << "PosX:\t" <<ptrNodoLista->dato.posicion.posX << "\n";
        cout << "PosY:\t" <<ptrNodoLista->dato.posicion.posY << "\n";
        cout << "\n";

        ptrNodoLista = siguiente(lista, ptrNodoLista);

    }
    return 0;
}
