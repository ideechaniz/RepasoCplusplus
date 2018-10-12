#include <iostream>

using namespace std;

struct Punto
{
    double x,y;
};

Punto operator +(const Punto &p, const Punto &q);
int main()
{
    Punto a,b,c,r;
    a.x = 1.0;
    a.y = 1.0;

    b.x = 2.0;
    b.y = 2.0;

    c.x = 3.0;
    c.y=  3.0;

    r= a+b+c; // como he usado operator + puedo operar con +
              // el + es solo un simbolo, no significa que sume salvo que dentro
              // de la funcion haga lo necesario para sumar.

    cout << r.x <<" , " << r.y << endl;

    return 0;
}

Punto operator +(const Punto &p, const Punto &q)
{
    Punto r;
    r.x=p.x + q.x;
    r.y=p.y + q.y;

    return r;
}

