#include <iostream> // no llevan punto h
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// typedef struct Punto Punto; // en C++ es automatico, no hace falta ponerlo.

struct Punto
{
    double x,y;
};

/* como en C. En C++ se haria en una clase.
struct Persona
{
    char *nombre;
    int edad;
    float salario;
};
*/

int main() // cuando son void no hace falta ponerlo. Para variadica hacen falta los ...
{
    Punto P,Q;
    P.x=0.0;
    P.y=0.5;
    Q.x=1.4;
    Q.y=0.6;
    (void) P;
    (void) Q;

    cout << "Hello World!" << endl; // endl se usa mas que \n

    int *a,i;

    // Modo en C:
    a= (int *) calloc(10, sizeof(int));
    for(i=0;i<10; i++)
    {
        a[i]=i;
        printf("%d\n", a[i]);
    }
    free(a);
    printf("\n");

    // Modo en C++:
    a=new int[10];
    for(i=0;i<10; i++)
    {
        a[i]=i;
        cout << a[i] << endl;
    }
    cout << endl;
    delete[] a;

    // --------------

    int *p;
    p= new int;
    *p=5;
    cout << "valor int: " << *p <<endl;
    delete p;


    char nombre[50], apellido[50];
    cout << "Nombre y apellido?:";
    cin >> nombre >> apellido;
    cout << nombre << ' ' << apellido <<endl;

    int x;
    cout << "Ingrese un numero: ";
    cin >> x;
    cout << x << endl;


    return 0;
}
