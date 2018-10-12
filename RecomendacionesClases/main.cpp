#include <iostream>

using namespace std;

class Persona // las clases suelen comenzar en mayuscula por convencion
{
public:
    Persona()
    {

    }

    Persona (const string &nombre, int edad, double salario)
    {
        m_nombre = nombre;
        m_edad= edad;
        m_salario= salario;
    }
    void setNombre(const string &nombre) // usa set en vez de cambia
    {
        m_nombre = nombre;
    }

    void setEdad(int edad) // se recomienda camel case en vez de (set_Edad o set_edad)
    {
        m_edad= edad;
    }

    void setSalario(double salario)
    {
        m_salario= salario;
    }

    string getNombre() const // o dejas nombre a secas o getNombre
    {
        return m_nombre;
    }

    int getEdad() const
    {
        return m_edad;
    }
    double getSalario() const
    {
        return m_salario;
    }

protected:
private:
    string m_nombre; // se suele poner m de member o _ guion bajo.
    int m_edad;
    double m_salario;
};

int main()
{
    Persona juan;
    juan.setNombre("Juan");
    juan.setEdad(40);
    juan.setSalario(5000.0);

    cout << juan.getNombre() << endl;
    cout << juan.getEdad() << endl;
    cout << juan.getSalario() << endl;



    cout << "Hello World!" << endl;
    return 0;
}
