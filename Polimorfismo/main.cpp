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

    virtual void habla()
    {
        cout << " tatatatatatat" << endl;
    }

    virtual ~Bebe()
    {

    }
private:
        string nombre;
};


class Ninyo : public Bebe
{
public:
    Ninyo(const string &nom) : Bebe(nom)
    {
        nombre=nom;
    }
    void corre()
    {
        cout << nombre << " esta corriendo... " << endl;
    }
    void habla()
    {
        cout << " GRITA!" << endl;
    }

private:
    string nombre;
};

class Adulto : public Bebe
{
public:
    Adulto(const string &nom) : Bebe(nom)
    {
        nombre=nom;
    }
    void camina()
    {
        cout << nombre << " esta caminando..." << endl;
    }
    void habla()
    {
        cout << " Hola estoy ocupado" << endl;
    }


private:
    string nombre;
};

int main()
{
    Bebe *bebes[3];

    Adulto *juan = new Adulto("Juan");
    Ninyo *juanito = new Ninyo("Juanito");
    Bebe *jr = new Bebe("Junior");

    juan -> camina();
    juanito-> corre();
    //jr -> gatea();



    cout << endl;

    bebes[0] = jr;
    bebes[0]->gatea();

    bebes[1] = juan; // juan es adulto y bebe.
    bebes[2] = juanito; // juanito es niño y bebe.

    bebes[1]->gatea();
    bebes[2]->gatea();


    Adulto *adulto;
    Ninyo *ninyo;
    Bebe *bebe;
    bebe = bebes[0];
    adulto =  static_cast< Adulto* > (bebes[1]);
    ninyo = static_cast <Ninyo *>(bebes[2]);

    adulto->camina();
    ninyo->corre();

    bebes[0]->habla();
    bebes[1]->habla();
    bebes[2]->habla();


    delete juan;
    delete juanito;
    delete jr;

    return 0;
}
