#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

// using namespace std; no se debe hacer en los .h
class Persona
{
public:
    Persona();
    Persona(const std::string &nombre, int edad, double salario);

    void setNombre(const std::string &nombre)
    {
        m_nombre = nombre;
    }
    void setEdad(int edad)
    {
        m_edad= edad;
    }
    void setSalario(int salario)
    {
        m_salario = salario;
    }

    std::string getNombre() const
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

    friend inline std::ostream &operator<<(std::ostream &o, const Persona &p);

private:
    std::string m_nombre;
    int m_edad;
    double m_salario;
};

inline std::ostream &operator<<(std::ostream &o, const Persona &p)
{
    return o << p.m_nombre << ' ' << p.m_edad << ' ' << p.m_salario;
}

#endif // PERSONA_H
