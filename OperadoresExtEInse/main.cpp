#include <iostream>

using namespace std;

class Punto
{
public:
    Punto(double a=0, double b=0)
        :x(a), y(b) // esto es otro modo de hacerlo.
    {
        // modo tradicional:
        //x=a;
        //y=b;
    }
    friend ostream &operator<<(ostream &i, const Punto &p);
    friend istream &operator>>(istream &i, Punto &p);

private:
    double x,y;

};

/*
 *  << Insercion  In
 *  >> Extraccion Out
 */
ostream &operator<<(ostream &i, const Punto &p);
istream &operator>>(istream &i, Punto &p);

int main()
{

    Punto P,Q;
    cout << "Ingrese un punto: ";
    cin >>P;
    cout << endl << "Ingrese otro punto: ";
    cin >> Q;
    cout << endl << "El punto P es " << P << endl;
    cout << "El punto Q es " << Q << endl;

    return 0;
}


ostream &operator<<(ostream &o, const Punto &p)
{
    return o << p.x << "," << p.y;
}

istream &operator>>(istream &i, Punto &p)
{
    return i >> p.x >> p.y; // al meterlo separalo por espacio.
}
