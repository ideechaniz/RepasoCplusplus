#include <iostream>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double salario;

    //void imprime(const Persona &p);
    void imprime() const;
    void cambia_edad(int e);
};


int main()
{

    Persona juan, pedro , maria;
    juan.nombre= "Juan";
    juan.edad= 20;
    juan.salario = 500.0;

    pedro.nombre= "Pedro";
    pedro.edad = 30;
    pedro.salario= 700.0;

    maria.nombre= "Maria";
    maria.edad= 35;
    maria.salario=500.0;

    juan.cambia_edad(100);

    juan.imprime();
    pedro.imprime();
    maria.imprime();

    return 0;
}

//void Persona::imprime(const Persona &p)
void Persona::imprime() const
{
    cout <<"Nombre:" << nombre << endl;
    cout <<"Edad: " << edad << endl;
    cout <<"Salario: " << salario <<endl;
    cout << endl;
}

void Persona::cambia_edad(int e)
{
    edad=e;
}
