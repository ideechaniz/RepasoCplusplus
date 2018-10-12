#include <iostream>

using namespace std;

// Tutorial sobre Constructor EXPLICIT en Lenguaje C++

class Punto
{
public:

    explicit Punto(double x) // fijate en esta sin explicit
    {
        mx=x;
        my=0.0;

    }
    Punto(double x, double y)
    {
        mx=x;
        my=y;
    }
    Punto(const Punto &p)
    {
        mx= p.mx;
        my= p.my;
    }

    void setX(double x)
    {
        mx=x;
    }
    void setY(double y)
    {
        my=y;
    }
    double getX() const
    {
        return mx;
    }
    double getY() const
    {
        return my;
    }

private:
    double mx, my;
};

void imprime(const Punto &p);

int main()
{
    Punto P(4.5);
    Punto Q(4.2, 2.5);
    Punto R(P);

    imprime(P);
    imprime(Q);
    imprime(R);
    //imprime(8.8); // fijate en esta, sin explicit al llamar a imprime crea el punto.
    imprime(Punto(8.8));
    return 0;
}

void imprime(const Punto &p)
{
    cout << p.getX() << ", " << p.getY() << endl;
}
