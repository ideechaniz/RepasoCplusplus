#include <iostream>

using namespace std;

class Persona
{
public:
    Persona(const string &nom, int e, double s)
    {
        nombre=nom;
        edad=e;
        salario=s;
    }
    friend void imprime(const Persona &p);

private:
    string nombre;
    int edad;
    double salario;

};

void imprime(const Persona &p) // como es friend puede acceder a valores de private
{
    cout << p.nombre << endl;
    cout << p.edad << endl;
    cout << p.salario << endl;
}

int main()
{
    Persona juan("Juan", 40, 5000.0);
    imprime(juan);
    return 0;
}
