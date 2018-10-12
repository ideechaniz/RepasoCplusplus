#include <iostream>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double salario;

    static string videojuego; // hay que darle valor fuera de la estructura al ser static

    static void imprime(); // static aqui permite ejecutar la funcion sin necesidad de tener una persona.
};

string Persona::videojuego ="Crash Bandicoot";

int main()
{
    Persona juan, luis;

    juan.nombre= "Juan";
    juan.edad=20;
    juan.salario= 500.0;

    luis.nombre = "Luis";
    luis.edad= 31;
    luis.salario = 600.0;
    luis.videojuego = "Mario 64"; // Pero la variable es compartida porque es static.

    cout << luis.videojuego << endl; // ahora luis y juan tienen el mismo videojuego.
    cout << juan.videojuego << endl;

    juan.imprime();
    Persona::imprime();
    return 0;
}
void Persona::imprime() // sin const
{
    cout << videojuego<< endl; // pero solo puedo acceder a variables estaticas
}
