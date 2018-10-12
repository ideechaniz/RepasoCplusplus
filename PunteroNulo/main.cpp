#include <iostream>

using namespace std;

void hola(int numero)
{
    cout << numero << endl;
}

void hola(int *puntero)
{
    cout << "puntero: " << puntero << endl;
}

int main()
{
    int *p= NULL; //control click en null para ver la definicion

    hola(4);
    hola(p);
    //hola(NULL); // el compilador te avisa del problema y no compila
    hola(nullptr); // nullptr se incluyo en c++11

    // Entonces lo idea es iniciar con:
    int *q = nullptr;
    hola(q);

    return 0;

}
