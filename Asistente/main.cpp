#include <iostream>
#include "persona.h"

using namespace std;

int main()
{
    Persona juan, pedro;

    juan.setNombre("Juan");
    juan.setEdad(23);
    juan.setSalario(500.0);

    pedro.setNombre("Pedro");
    pedro.setEdad(40);
    pedro.setSalario(700.0);

    cout << juan << endl;
    cout << endl;
    cout << pedro << endl;

    return 0;
}
