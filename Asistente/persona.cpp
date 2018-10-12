#include "persona.h"

Persona::Persona()
{
    m_nombre= "";
    m_edad=0;
    m_salario=0.0;
}

Persona::Persona(const std::string &nombre, int edad, double salario)
{
    m_nombre= nombre;
    m_edad= edad;
    m_salario=salario;
}
