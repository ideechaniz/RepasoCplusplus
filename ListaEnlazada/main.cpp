#include <iostream>

using namespace std;

struct Nodo
{
    int valor;
    Nodo *siguiente;

    ~Nodo()
    {
     //   cout << "destruido: " << valor << endl;
    }
};

void copiaArregloEnLista(int arreglo[], int tam, Nodo **inicio);
void imprimeLista(Nodo *inicio);
void destruyeLista(Nodo *inicio);

int main(int argc, char *argv[])
{
    int arreglo[] = {1,2,3,4,5,6,7,8,9,10};
    const int tam = sizeof(arreglo) / sizeof (int);
    Nodo *inicio = nullptr;

    copiaArregloEnLista(arreglo, tam, &inicio);
    imprimeLista(inicio);
    destruyeLista(inicio);

    return 0;
}


void copiaArregloEnLista(int arreglo[], int tam, Nodo **inicio)
{
    Nodo *iNodo; // Nodo que recorre los nodos de una lista.

    *inicio = new Nodo;
    (**inicio).valor = arreglo[0];
    iNodo=*inicio;

    for(int i=1; i < tam; i++) {
        iNodo ->siguiente = new Nodo;
        iNodo = iNodo->siguiente;
        iNodo->valor = arreglo[i];
        iNodo->siguiente= nullptr;
    }
}

void imprimeLista(Nodo *inicio)
{
    Nodo *iNodo;
    iNodo= inicio;
    while(iNodo != nullptr){
        cout << iNodo->valor << ' ';
        iNodo = iNodo->siguiente;
    }

}

void destruyeLista(Nodo *inicio)
{
    Nodo *iNodo;
    Nodo *auxNodo;
    iNodo = inicio;
    while(iNodo->siguiente != nullptr)
    {
        auxNodo=iNodo->siguiente;
        delete iNodo;
        iNodo = auxNodo;
    }
    delete iNodo;
}
