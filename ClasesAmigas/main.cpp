#include <iostream>

using namespace std;

class Punto
{
public:
    Punto(double a=0.0, double b=0.0)
    {
        x=a;
        y=b;
    }

    friend class Persona; // ahora la clase persona puede modificar los privates de punto.

private:
    double x,y;
};

class Persona
{
public:
    Persona()
    {
        P.x=1.0;
        P.y=1.0;
    }
    void imprime() const
    {
        cout << P.x << ", " << P.y << endl;
    }
private:
    Punto P;
};

int main()
{
    Persona juan;
    juan.imprime();
    return 0;
}
