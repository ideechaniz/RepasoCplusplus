#include <iostream>

using namespace std;

class Persona
{
public:
    Persona()
    {
        nombre= "";
        salario=0.0;
    }

    Persona(const string &nom, double s)
    {
        nombre= nom;
        salario=s;
    }

     operator double() // al convertir a double obtendria el salario.
     {
         return salario;
     }

     operator string()
    {
        return nombre;
    }

private:
    string nombre;
    double salario;

};


int main()
{

    /*
    // operadores de conversion para tipos
    int x;
    double y;
    x=4;
    y= double(x); // como cast en c y= (double) x;
    */

    Persona juan("Juan", 500.0);
    double x;
    string nombre;

    x=double(juan);
    nombre= string(juan);

    cout << x << " " << nombre << endl;

    return 0;
}
