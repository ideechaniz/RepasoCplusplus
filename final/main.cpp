#include <iostream>
#include "derivada.h"

using namespace std;
// final se usa cuando quieres que una clase no pueda heredarse

int main()
{

    Derivada d;
    d.saluda(); // para que esto no sea posible existe final. Mira base.h

    return 0;
}
