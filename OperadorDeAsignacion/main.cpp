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

    void imprime() const
    {
        cout << nombre << endl;
        cout << edad << endl;
        cout << salario << endl;
        cout << endl;
    }

    void operator=(const string &nom)
    {
        nombre = nom;
    }

    void operator=(int e)
    {
        edad = e;
    }

private:
    string nombre;
    int edad;
    double salario;
};

int main()
{
    Persona juan;
    juan="Juan";
    juan=15;
    juan.cambia_salario(0.0);
    juan.imprime();
    return 0;
}
