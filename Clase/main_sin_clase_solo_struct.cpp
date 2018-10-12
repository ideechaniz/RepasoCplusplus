#include <iostream>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double salario;

    Persona();
    Persona(const string &nom, int e, double s);
    Persona(const Persona &otra);
    ~Persona();

    void imprime() const;
};

int main()
{
    Persona juan, luis("Luis", 30, 500.0);
    juan.nombre="Juan";
    juan.edad=35;
    juan.salario=700;

    luis.imprime();
    juan.imprime();

    return 0;
}

Persona::Persona()
{
    nombre="";
    edad=0;
    salario=0.0;
}
Persona::Persona(const string &nom, int e, double s)
{
    nombre=nom;
    edad= e;
    salario=s;
}

Persona::Persona(const Persona &otra)
{
    nombre= otra.nombre;
    edad=otra.edad;
    salario=otra.salario;
}

Persona::~Persona()
{
    cout << "Adios " << nombre << endl;
}

void Persona::imprime() const
{
    cout << nombre << endl;
    cout << edad << endl;
    cout << salario << endl;
    cout << endl;
}
