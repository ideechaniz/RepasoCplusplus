#include <iostream>

using namespace std;

struct Nodo
{
    int valor;
    Nodo *siguiente;

    ~Nodo()
    {
        cout << "destruido: " << valor << endl;
    }
};

int main(int argc, char *argv[])
{
    int arreglo[] = {1,2,3,4,5,6,7,8,9,10};
    const int tam = sizeof(arreglo) / sizeof (int);

    Nodo *inicio;
    Nodo *iNodo; // Nodo que recorre los nodos de una lista.
    Nodo *auxNodo;
    int i=0;

    inicio = new Nodo;
    inicio->valor = arreglo[i];
    i++;
    iNodo=inicio;
    while(i < tam) {
        iNodo ->siguiente = new Nodo;
        iNodo = iNodo->siguiente;
        iNodo->valor = arreglo[i];
        iNodo->siguiente= nullptr;
        ++i;
    }

    iNodo= inicio;
    while(iNodo != nullptr){
        cout << iNodo->valor << ' ';
        iNodo = iNodo->siguiente;
    }

    iNodo = inicio;
    while(iNodo->siguiente != nullptr)
    {
        auxNodo=iNodo->siguiente;
        delete iNodo;
        iNodo = auxNodo;
    }
    delete iNodo;
    return 0;
}
