#include <iostream>
//#include <algorithm> // para foreach
#include <vector>

using namespace std;

int main()
{
    int arreglo[] { 1,2,3,4,5,6,7,8,9,10, -1 , -2 , -3};
    for(int i: arreglo) {
        cout << i << ' ';
        i+= 1;
    }
    cout << endl;

    for(int i: arreglo) { // cuidado i es una copia de cada valor.
        cout << i << ' ';
    }

    cout << endl;

    // -------Para modificar usar la referencia.
    for(int &i: arreglo) {
        cout << i << ' ';
        i+= 1;
    }
    cout << endl;

    for(int i: arreglo) { // cuidado i es una copia de cada valor.
        cout << i << ' ';
    }

    cout << endl;

    vector<int> v{ 1,2,3,4,5,6,7,8,9 };
    for(int i: v){
        cout << i << ' ';
    }
    cout << endl << endl;

    vector<vector<int>> matriz;
    matriz.resize(5);
    //for(vector<vector<int>>::iterator i = matriz.begin(); i!= matriz.end(); i++){
    for(auto i = matriz.begin(); i!= matriz.end(); i++){
        i->resize(5);
    }
    /*
     // otro modo:
     for( auto &fila: matriz){
        fila.resize(10);
     }
    */

    for(int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout << matriz[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    matriz[2][2]=1;

    // otro modo de mostrarlo usando rangos
    for(const auto &fila: matriz){ // por referencia
        for (auto i: fila){ // por copia.
            cout << i << ' ';
        }
        cout << endl;
    }
    cout << endl;

    matriz[2][2]=2;

    // otro modo mezclando tradicional y rangos
    for(auto i= matriz.begin();i!= matriz.end(); i++)
    {   for (auto j=i->begin(); j!= i->end(); j++)
            cout << *j << ' ' ;
        cout << endl;
    }
    cout << endl;
    return 0;
}
