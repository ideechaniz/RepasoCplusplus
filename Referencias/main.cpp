#include <iostream>

using namespace std;

void modifica (int *p)
{
    *p=4;
}

void modifica2(int &r) // ampersand aqui indica referencia, no una direccion.
{
    r=5;
}

int main()
{
    /* En C se haria asi.

    int x, *p:
     p=&x;
    *p=5;

    */

    // modo C++
    int x;
    int &r =x; // r es una referencia de la x
    r=3;
    cout << x << endl;

    // modo C
    modifica(&x); // aqui ampersand indica direccion de memoria.
    cout << x << endl;

    // modo C++
    modifica2(x);
    cout << x << endl;

    return 0;
}
