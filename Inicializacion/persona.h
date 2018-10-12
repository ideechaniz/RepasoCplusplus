#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include "computadora.h"

class Persona
{
public:
    Persona();
    void imprime() const;
private:
    //antes que c++11 no se podia hacer asignaciones en private salvo para static
    std::string mNombre = "";
    int mEdad =0;
    double mSalario = 0.0;
    Computadora mPc= Computadora(-1);

};
#endif // PERSONA_H
