#include <iostream>

using namespace std;

class Persona
{
public:
    Persona(){}
    Persona(int edad, const string &nombre);
    void setEdad(int edad);
    void setNombre(const string &nombre);
    int edad() const;
    string nombre() const;

private:
    mutable int m_Edad;
    string m_Nombre;
};

Persona::Persona(int edad, const string &nombre)
{
    m_Edad= edad;
    m_Nombre= nombre;
}

void Persona::setEdad(int edad)
{
    m_Edad=edad;
}
void Persona::setNombre(const string &nombre)
{
    m_Nombre= nombre;
}
int Persona::edad() const
{
    m_Edad = m_Edad +1; // aunque sea const al ser mutable me deja.
    return m_Edad;
}
string Persona::nombre() const
{
    return m_Nombre;
}
int main(int argc, char *argv[])
{

    Persona juan;
    juan.setNombre("Juan");
    juan.setEdad(30);
    cout << "nombre: " << juan.nombre() << endl;
    cout << "edad: " << juan.edad() << endl;

    return 0;
}
