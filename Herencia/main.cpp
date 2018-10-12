#include <iostream>

using namespace std;
// una herencia en C++ es que una clase herede de otra.

class Bebe
{
public:
    void gatea()
    {
        cout << nombre << " gateando ..." << endl;
    }

    void cambia_nombre(const string &nom)
    {
        nombre=nom;
    }

    void imprime() const
    {
        cout << nombre << endl;
    }

// Si esta private no puedo acceder pero siendo protected los que hereden pueden.
// Pero siendo protected no se puede modificar por quienes lo hereden.
protected:
    string nombre;

};


class Adulto : public Bebe // el adulto puede hacer todo lo que el bebe hace.
{
public:
    void camina()
    {
        cout << nombre << " caminando ... " << endl;
    }
};

int main()
{
    Adulto papa;
    Bebe jr;

    jr.cambia_nombre("Junior");
    papa.cambia_nombre("Juan");

    jr.gatea();
    papa.camina();
    papa.gatea();

    return 0;
}
