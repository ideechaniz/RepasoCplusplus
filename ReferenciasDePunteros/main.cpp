#include <iostream>

using namespace std;

void eliminaPuntero(int* &puntero) // puntero por referencia
{
    delete puntero;
    puntero=nullptr;
}

int main(int argc, char *argv[])
{
    int *puntero = new int;
    *puntero =5;
    cout << *puntero << endl;
    eliminaPuntero(puntero);
    if (puntero == nullptr)
        cout << "puntero eliminado" << endl;
    else
        cout << "puntero que no ha sido eliminado" << endl;


    return 0;
}
