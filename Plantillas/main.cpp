#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // FIJATE EN LA LINEA DE ABAJO.
    //vector<vector<int>> matriz; // asi no se puede sin gnu++11
    // porque el compilador lo confunde con >>
    vector<vector<int> > matriz; // asi si.

    matriz.resize(5); // 5 filas
    unsigned long i,j;

    for(i=0; i<5; i++)
        matriz[i].resize(5); // cada fila 5 columnas

    // con esto existe una martriz de 5x5 con todo ceros.
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            matriz[i][j]= int(j);
            cout << matriz[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
