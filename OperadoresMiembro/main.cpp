#include <iostream>

using namespace std;

/*
 * El ejercicio esta hecho con friend comentado y luego
 * con operadores miembro sin usar friend.
 */

class Punto
{
public:
    Punto(double a=0.0, double b=0.0)
    {
        x=a;
        y=b;
    }
    void imprime() const
    {
        cout << x << "," << y << endl;
    }

  //  friend Punto operator+(const Punto &p, const Punto &q);

    Punto operator+(const Punto &p)
    {
        Punto r;
        r.x= x + p.x ;
        r.y= y + p.y ;
        return r;
    }
private:
    double x,y;

};

/*
Punto operator+(const Punto &p, const Punto &q)
{
    Punto r;
    r.x= p.x + q.x;
    r.y= p.y + q.y;
    return r;
}
*/

int main()
{
    Punto A,B(3.0,4.0),C(1.0,2.0);
    A= B + C;
    A.imprime();
    return 0;
}
