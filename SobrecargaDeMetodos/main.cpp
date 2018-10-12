#include <iostream>

using namespace std;

// Sobrecarga de metodos es como sobrecarga de funciones pero dentro de estructuras.

struct Persona
{
    string nombre;
    void imprime() const;
    void imprime( int n ) const;
};

int main()
{
    Persona juan = {"Juan"};
    juan.imprime();
    juan.imprime(3);

    return 0;
}

void Persona::imprime() const
{
    cout << nombre << endl;
}

void Persona::imprime(int n) const
{
    for( int i =0; i< n; i++)
        cout << nombre << endl;

    cout << endl;
}
