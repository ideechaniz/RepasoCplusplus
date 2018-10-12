#include <iostream>

using namespace std;

class Persona
{
 public:
    Persona();
    Persona(const string &nom, int e, double s);
    Persona(const Persona &otra);
    ~Persona();

    void imprime() const;
    void cambia_nombre(const string &nom);
    void cambia_edad(int e);
    void cambia_salario(double s);
    string obtiene_nombre() const;
    int obtiene_edad() const;
    double obtiene_salario() const;

 private: // si lo pongo antes de public sin indicar private tambien es private
    string nombre;
    int edad;
    double salario;
    // pero se suele poner lo private al final
};

int main()
{
    Persona juan, luis("Luis", 30, 500.0);

    /* Ya no se puede hacer asi porque son private
    juan.nombre="Juan";
    juan.edad=35;
    juan.salario=700;
    */

    juan.cambia_nombre("Juan");
    juan.cambia_edad(35);
    juan.cambia_salario(700.0);

    cout << juan.obtiene_salario() <<endl;

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

void Persona::cambia_nombre(const string &nom){
    nombre= nom;
}
void Persona::cambia_edad(int e)
{
    edad=e;
}
void Persona::cambia_salario(double s){
    salario=s;
}

string Persona::obtiene_nombre() const
{
    return nombre;
}

int Persona::obtiene_edad() const
{
    return edad;
}

double Persona::obtiene_salario() const
{
    return salario;
}
