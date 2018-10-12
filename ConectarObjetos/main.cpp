#include <iostream>

using namespace std;

class Persona
{
public:
    Persona()
    {
        nombre="";
        edad=0;
        salario=0.0;       
     }

    void cambia_nombre(const string &nom)
    {
        nombre=nom;
    }

    void cambia_edad(int e)
    {
        edad=e;
    }
    void cambia_salario(double s)
    {
        salario=s;
    }

    void imprime() const;

    void conecta(Persona *otra)
    {
        amigo=otra;
    }

    void habla(const string &palabras)
    {
        cout << nombre << " ha dicho " << palabras << endl;
        amigo->escucha(palabras);
    }
    void escucha(const string &palabras)
    {
        cout << nombre << " ha escuchado: " << palabras << endl;
    }
private:
    string nombre;
    int edad;
    double salario;
    Persona *amigo;
};


void Persona::imprime() const
{
    cout << nombre << endl;
    cout << edad << endl;
    cout << salario << endl;
    cout << endl;
}

int main()
{
    Persona juan,pedro;
    juan.cambia_nombre("Juan");
    pedro.cambia_nombre("Pedro");

    juan.conecta(&pedro);
    juan.habla("Hola Pedro como estas");

    pedro.conecta(&juan);
    pedro.habla("Bien, gracias");

    return 0;
}

