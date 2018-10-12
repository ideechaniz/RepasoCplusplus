#include <iostream>

using namespace std;

class Bebe
{
public:
    Bebe(const string &nom)
    {
        nombre=nom;
    }

    void gatea()
    {
        cout << nombre << " esta gateando..." << endl;
    }

private:
        string nombre;
};


class Ninyo
{
public:
    Ninyo(const string &nom)
    {
        nombre=nom;
    }
    void corre()
    {
        cout << nombre << " esta corriendo... " << endl;
    }
private:
    string nombre;
};

class Adulto : public Bebe, public Ninyo
{
public:
    Adulto(const string &nom) : Bebe(nom), Ninyo(nom)
    {
        nombre=nom;
    }
    void camina()
    {
        cout << nombre << " esta caminando..." << endl;
    }

private:
    string nombre;
};

int main()
{
    Adulto juan("Juan");
    juan.camina();
    juan.gatea();
    juan.corre();
    return 0;
}
