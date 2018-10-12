#include <iostream>

using namespace std;

class Persona
{
public:
    Persona()
    {
        nombre="";
        edad=0;
        salario=0.0;
        for(int i=0; i<3; i++)
            num_favoritos[i]=-1;
     }

    void cambia_nombre(const string &nom)
    {
        nombre=nom;
    }

    void cambia_edad(int e)
    {
        edad=e;
    }
    void cambia_salario(double s)
    {
        salario=s;
    }

    void imprime() const;


    bool operator>(const Persona &otra)
    {
        return edad > otra.edad;
    }
    bool operator<(const Persona &otra)
    {
        return edad < otra.edad;
    }

    void operator=(const string &nom)
    {
        nombre = nom;
    }

    void operator=(int e)
    {
        edad = e;
    }

    bool operator==(const Persona &otra)
    {
        return edad == otra.edad;
    }

    bool operator!=(const Persona &otra)
    {
        return edad != otra.edad;
    }

    void operator++()
    {
        edad++;
    }

    int &operator[](int pos) // esta no es obvia.
    {
        return num_favoritos[pos];
    }

    void operator()(int n)
    {
        for(int i=0; i<n; i++)
            cout << i;
        cout << endl;

    }
private:
    string nombre;
    int edad;
    double salario;
    int num_favoritos[5];
};


void Persona::imprime() const
{
    cout << nombre << endl;
    cout << edad << endl;
    cout << salario << endl;

    for( int i=0; i<3; i++)
        cout << num_favoritos[i] << ' ';
    cout << endl;
}

int main()
{
    Persona juan,pedro;
    juan="Juan";
    juan=15;
    juan.cambia_salario(0.0);

    pedro="Pedro";
    pedro=30;
    pedro.cambia_salario(500.0);

    if (juan > pedro ){
        cout << "Juan es mas viejo que Pedro" << endl;
    }
    else
    {
        cout << "Juan es mas joven o igual que pedro" << endl;
    }

    juan[0]=1;
    juan[1]=2;
    juan[2]=5;

    juan.imprime();
    juan(5);

    return 0;
}

