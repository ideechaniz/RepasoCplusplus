#include <iostream>
#include <cstdlib> // para malloc

using namespace std;

// El variante transporta datos del tipo que quieras.

class Variante
{
public:
    Variante()
    {
        mptr=NULL;
    }

    template <typename T> Variante(const T &val)
    {
        mptr= malloc(sizeof(T));
        *(T *) mptr = val;
    }
    template <typename T> void setValor(const T &val)
    {
          free(mptr);
          mptr= malloc(sizeof(T));
          *(T *) mptr = val;
    }
    template <typename T> const T &getValor() const
    {
         return *(T *) mptr;
    }

    ~Variante()
    {
        free(mptr);
    }

private:
    void *mptr;

};

struct Punto
{
    double x,y;

    Punto (double a, double b)
    {
        x=a;
        y=b;
    }
};

int main()
{
    Variante v; // almacena un valor del tipo que se necesite.
    v.setValor<int>(45);
    cout << v.getValor<int>() << endl;

    v.setValor<double>(3.1416);
    cout << v.getValor<double>() << endl;

    //Esto no va:
    //v.setValor<Punto>(3.4,5.7);
    //cout << v.getValor<Punto>() << endl;
    Variante w(Punto(3.4,5.7));
    // No va  cout << w.getValor<Punto>() << endl;
    Punto P = w.getValor<Punto>();
    cout << P.x << "," << P.y << endl;

    Variante va(new int[10]);
    int *a=va.getValor<int *>();

    for(int i=0; i<10; i++)
    {
        a[i]=i;
        cout << a[i] << ' ' ;
    }
    cout << endl;
    delete[] a;

    return 0;
}
