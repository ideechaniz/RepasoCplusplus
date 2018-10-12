#include <iostream>

using namespace std;

struct Punto
{
    double x,y;
    Punto (double a=0.0, double b=0.0);
    void imprime() const;
    Punto(const Punto &otro); // esto es automatico aunque no lo ponga pero asi lo puedo cambiar.
};

int main()
{

    Punto p(1.0, 2.3);
    Punto q(p); // esto es el constructor de copia. De forma implicita
    //Punto q=p; Lo de arriba es igual a esto, exactamente igual. Llama al constructor de copia.
    p.imprime();
    q.imprime();


    return 0;
}

Punto::Punto (double a, double b)
{
    x=a;
    y=b;
}

Punto::Punto(const Punto &otro)
{
    cout << "se copio" << endl;
    x=otro.x;
    y=otro.y;
}

void Punto::imprime() const
{
    cout << x << ", " << y<< endl;
}
