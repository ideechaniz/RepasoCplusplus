#include <iostream>

using namespace std;
// nota: Antes de este ejemplo estaba el de sobercarga de funciones.


// los templates permiten hacer una sola funcion para varios tipos.
template<typename tipo> tipo suma(tipo a, tipo b);

int main()
{
    cout << suma<int>(1,2) << endl;
    cout << suma<float>(1.0f, 2.0f) << endl;

    // pero no hace falta poner de que tipo son porque el compilador ya distingue.
    cout << suma(1,2) << endl;
    cout << suma(1.0f, 2.0f) << endl;
}

template<typename tipo> tipo suma(tipo a, tipo b)
{
    return a+b;
}
// esto ahora funciona para int, float, double...

