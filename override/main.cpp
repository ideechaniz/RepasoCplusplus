#include <iostream>

using namespace std;

// override se incluyo en c++11

class Base
{
public:
    virtual void imprime() const
    {
        cout << "base" << endl;
    }
    virtual ~Base()
    {

    }
};

class Derivada : public Base
{
public:
    void imprime() const override // se pone para que me recuerde que lo estoy sobreescribiendo
    {                              // si no lo pongo lo sobreescribe igual.
        cout << "derivada" << endl;
    }
    ~Derivada() override
    {

    }


};

int main()
{
    Derivada d;
    d.imprime();
    return 0;
}
