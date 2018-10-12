#include <iostream>

using namespace std;

// una interfaz es una clase abstracta, no se pueden crear objetos de ese tipo de clase.

class Persona
{
public:
    virtual void habla(const string &palabras) const =0; // el metodo igual a cero funcion virtual pura.
    virtual void camina(int km) const = 0;
    virtual void trabaja (int hr) = 0;
    virtual void juega(int hr) const =0;

    // los virtuales hay que volver a definirlos en el heredero.

    double obtiene_salario() const
    {
        return salario;
    }

    virtual ~Persona()
    {

    }

protected:
    double salario;
};

class Juan : public Persona
{
public:
    Juan()
    {
        salario= 0.0;
    }
    void habla(const string &palabras) const
    {
        cout << palabras << endl;
    }
    void camina(int km) const
    {
        cout << "Juan ha caminado " << km << " km" << endl;
    }
    void trabaja(int hr)
    {
        salario = hr * 20.0;
    }
    void juega(int hr) const
    {
        cout << "Juan ha jugado " << hr << " horas"<<endl;
    }


};


int main()
{
    Juan J;
    J.habla("Hola mundo");
    J.camina(20);
    J.trabaja(8);
    J.juega(3);

    cout << J.obtiene_salario() << endl;

    return 0;
}
