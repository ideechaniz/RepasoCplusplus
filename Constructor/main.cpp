#include <iostream>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double salario;

    // Constructor, se llama igual que la estructura
    // La idea es que inice la estructura con valores validos
    Persona(const string &nom, int e, double s);
    Persona(); // puede haber mas de un constructor por sobrecarga de funciones.

    void imprime() const;
};

int main()
{
    //Persona juan = {"Juan", 20, 500.0}; // no hacer esto porque tenemos constructor
    Persona juan ("Juan", 20, 500.0); // en vez de llaves ahora uso parentesis
    juan.imprime();

    Persona pedro;
    pedro.imprime();
    return 0;
}

Persona::Persona(const string &nom, int e, double s)
{
    nombre=nom;
    edad= e;
    salario=s;
}

void Persona::imprime() const
{
    cout << nombre << endl;
    cout << edad <<endl;
    cout << salario << endl;
    cout << endl;
}

Persona::Persona() // constructor de valores por defecto
{
    nombre= "NA";
    edad=0;
    salario= 0.0;
}
