#include <iostream>

using namespace std;

struct Persona
{
    string nombre;
    Persona();
    Persona(const string &nom);
    void imprime() const;
    ~Persona();//destructor, nunca debe de tener parametros y solo puede haber uno.
};

int main()
{

    Persona juan, pedro("Pedro");
    juan.imprime();
    pedro.imprime();

    return 0;
}

Persona::Persona()
{
    nombre="";
}
Persona::Persona(const string &nom)
{
    nombre=nom;
}

Persona::~Persona()
{
    cout << "adios " << nombre << endl;
}
void Persona::imprime() const
{
    cout << nombre << endl;
}
