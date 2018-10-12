#include <iostream>

using namespace std;

int suma( int a=0, int b=0); // tiene argumentos por defecto.
// en caso de usar argumentos por defecto empieza por los ultimos parametros
// ya que cuando se le pasan valores a la funcion, empieza por asignar valor a los primeros.

int main()
{
    cout << suma(1,2) << endl;
    cout << suma() << endl;

    return 0;
}

int suma( int a, int b)
{
    return a+b;
}
