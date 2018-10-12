#include "computadora.h"
#include <iostream>

using namespace std;

Computadora::Computadora(int id)
{
    mId=id;
}

void Computadora::imprime() const
{
    cout << mId << endl;
}
