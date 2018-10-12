#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector <vector<int> > leeMatriz(const string &nombreArchivo);
ostream &operator <<(ostream &o, const vector<int> &v);
ostream &operator <<(ostream &o, const vector<vector<int> > &matriz);

int main()
{
    vector<vector<int> > matriz;
    matriz = leeMatriz("/home/noise/matriz.txt");
    cout << matriz << endl;

    return 0;
}

vector <vector<int> > leeMatriz(const string &nombreArchivo)
{
    vector<vector<int> > matriz;
    int nfilas, ncols, i , j;

    ifstream a;
    a.open(nombreArchivo.c_str() );
    if (!a.is_open() ) return matriz;

    a >>nfilas >>ncols;
    matriz.resize(nfilas);

    for(i=0; i< nfilas; i++)
        matriz[i].resize(ncols);

    for(i=0; i< nfilas; i++)
        for(j=0;j<ncols; j++)
            a >>matriz[i][j];

    return matriz;
}

ostream &operator <<(ostream &o, const vector<int> &v)
{
    vector<int>::const_iterator i;
    for(i=v.begin(); i!= v.end(); i++)
        o << *i << ' ' ;

    return o;
}

ostream &operator <<(ostream &o, const vector<vector<int> > &matriz)
{
    vector<vector<int> > :: const_iterator i;
    for(i= matriz.begin(); i!= matriz.end(); i++)
        o << * i << endl;

    return o;

}
