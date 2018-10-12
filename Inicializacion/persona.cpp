#include "persona.h"
#include <iostream>
#include "computadora.h"

using namespace std;

Persona::Persona()
{
    // si pongo algo tiene preferencia pero no es necesario.
    mNombre = "nombre";
    mEdad= 2;
    mSalario=1;
    //mPc=Computadora(1234);
    mPc.imprime();
}

void Persona::imprime() const
{
    cout << mNombre  << endl;
    cout << mEdad   << endl;
    cout << mSalario <<endl;
}

