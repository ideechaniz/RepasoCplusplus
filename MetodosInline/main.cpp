#include <iostream>

using namespace std;
class Punto
{
public:
    Punto(double a=0.0, double b=0.0) // si las funciones se meten dentro son inline.
    {
        x=a;
        y=b;
    }
    double obtiene_x() const
    {
        return x;
    }
    double obtiene_y() const
    {
        return y;
    }
    void cambia_x(double a)
    {
        x=a;
    }
    inline void cambia_y(double b); // esta es otra forma de que sea inline

private:
    double x,y;
};

int main()
{
    Punto A, B;
    A.cambia_x(0.0);
    B.cambia_y(-4.5);

    cout << "Hello World!" << endl;
    return 0;
}

inline void Punto::cambia_y(double b) // esta es otra forma de que sea inline
{
    y=b;
}
