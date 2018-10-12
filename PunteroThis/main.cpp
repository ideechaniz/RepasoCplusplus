#include <iostream>

using namespace std;

struct Persona
{
    string nombre;

    Persona *obtiene();
};

int main()
{
    Persona juan = { "Juan" };
    Persona *p;
    p=juan.obtiene();
    p->nombre = "Juanito";
    cout << juan.nombre << endl;
    return 0;
}

Persona *Persona::obtiene()
{
    return this; // El puntero hacia el objeto juan.
                 // El puntero this es que modifica la estructura Persona.
}
