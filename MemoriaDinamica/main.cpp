#include <iostream>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double salario;
    Persona();
    Persona(const string &nom, int e, double s);
    ~Persona();
    void imprime() const;

};

int main()
{
    Persona *juan, *pedro;
    juan =new Persona("Juan",20,500.0);
    pedro=new Persona;

    pedro->nombre="Pedro";
    pedro->edad=30;
    pedro->salario= 600.0;

    juan->imprime();
    pedro->imprime();

    delete juan; // llama al destructor
    delete pedro;


    return 0;
}

Persona::Persona()
{
    nombre= "";
    edad=0;

}

Persona::Persona(const string &nom, int e, double s)
{
    nombre=nom;
    edad= e;
    salario = s;
}

Persona::~Persona()
{
 cout << "adios " << nombre << endl;
}
void Persona::imprime() const
{
    cout << nombre << endl;
    cout << edad << endl;
    cout << salario << endl;
    cout << endl;
}
