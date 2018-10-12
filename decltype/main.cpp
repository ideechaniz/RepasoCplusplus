#include <iostream>

using namespace std;

int main()
{
    // es muy similar a auto.
    decltype (1+2) x; // se convierte en un int.
    cout << x << endl; // x no vale 3, solo es de tipo entero.

    decltype (4/7.5) y= 4/7.5; // automaticamente es un double.
    cout << y << endl;

    //es como usar auto z= 4/7.5;
    return 0;
}
