#include <iostream>
#include "arreglo.h"

using namespace std;
/* Tutorial de uso basico de doxygen
 *
 * Para seguir el ejercicio:
 * $ sudo apt-get install doxygen doxygen-gui
 * $ mkdir Documentacion
 * $ pwd
 * $ doxywizard
 */

int main()
{
    const double valores[] = {1 ,2, 3, 4, 5, 6, 7, 8, 8 };
    Arreglo<double> A(valores, sizeof(valores)/sizeof(double));

    cout << "Valores: " << A           << endl;
    cout << "Media : "  << A.media()   << endl;
    cout << "Mediana: " << A.mediana() << endl;
    cout << "Moda: "    << A.moda()    << endl;
    return 0;
}

