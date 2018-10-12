#include <iostream>

using namespace std; // aqui usas using.

// vieja forma
//typedef int entero;
//typedef int *puntero_entero;
//typedef void(*funcion)(void);

// nueva forma
using entero = int;
using puntero_entero = int *;
using funcion= void(*)(void);

void miFuncion()
{
    cout << "hola" << endl;
}
int main()
{
    entero x= 5;
    puntero_entero y= &x;
    funcion f= &miFuncion;

    cout << x << endl;
    cout << *y << endl;
    f();

    return 0;
}
