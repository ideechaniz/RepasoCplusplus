#include <iostream>

using namespace std;

enum class Color // sin class no me deja volver a definir ROJO AZUL Y BLANCO
{
    ROJO,
    AZUL,
    BLANCO
};

enum class ColorPrimario
{
    ROJO,
    VERDE,
    AZUL
};


int main()
{
    //int color = AZUL; // sin class se podia pero ya no
    Color color = Color::AZUL;

    switch (color){
    case Color::AZUL:
        cout << "azul" << endl;
        break;
    case Color::BLANCO:
        cout << "blanco" << endl;
        break;
    default:
        break;
    }

    return 0;
}
