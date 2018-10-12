#include <iostream>
#include <list>

using namespace std;

class Persona
{
public:
    Persona(Persona *padre= NULL); // juan no tiene padre.

    void cambia_nombre(const string &nom)
    {
        nombre=nom;
    }

    void imprime() const;

    void habla(const string &palabras);

    void escucha(const string &palabras)
    {
        cout << nombre << " ha escuchado: " << palabras << endl;
    }

    ~Persona();

private:
    string nombre;
    list<Persona *> hijos;
};

void Persona::habla(const string &palabras)
{
    cout << nombre << " ha dicho " << palabras << endl;
    list<Persona *>::iterator i;
    for(i=hijos.begin(); i!= hijos.end(); i++)
        (**i).escucha(palabras);
}

void Persona::imprime() const
{
    cout << nombre << endl;
    cout << endl;
}

Persona::Persona(Persona *padre) // juan no tiene padre.
// mucho cuidado con no repetir la inicializacion de valor por defecto NULL del padre aqui tambien.
{
    if (padre != NULL)
        padre->hijos.push_back(this); // el hijo se agrega al padre.
    nombre="";
 }

Persona::~Persona()
{
    cout << nombre << " ha sido eliminado" << endl;
    list<Persona *>::iterator i;
    for(i=hijos.begin(); i!= hijos.end(); i++)
        delete *i;
}
int main()
{
    Persona *juan = new Persona;
    Persona *pedrito = new Persona(juan);
    Persona *luisito = new Persona(juan);

    juan->cambia_nombre("Juan");
    pedrito->cambia_nombre("Pedrito");
    luisito->cambia_nombre("Luisito");

    juan->habla("Hola hijos");
    pedrito->habla("Bien, gracias");

    delete juan;
    //delete pedrito; Se borran desde el destructor de juan.
    //delete luisito;

    return 0;
}
