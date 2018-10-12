#include <iostream>
#include <fstream>

using namespace std;

string lee(ifstream &a);
int cuenta(const string &contenido, char c);

// Busca cuantas comas hay en un texto
int main()
{
    int cantidad;
    string contenido;
    ifstream texto;

    texto.open("/home/noise/repos/texto.txt");
    if (!texto.is_open() )
    {
        cout << "Error, no se ha podido abrir el archivo" << endl;
        return 1;
    }

    contenido = lee(texto);
    cantidad= cuenta(contenido, ',');
    cout << "Comas=" << cantidad << endl;
    cout << "Equivalente a: cat texto.txt |grep -o ',' |wc -l" << endl;
    // o solo con grep cat texto.txt |grep -o ',' | grep -c ''
    return 0;
}

string lee(ifstream &a)
{
    string s, contenido;
    while(getline(a,s))
        contenido+=s + "\n";

    return contenido;
}

int cuenta(const string &contenido, char c)
{
    int contador=0;
    string::const_iterator i;
    for(i=contenido.begin(); i!=contenido.end(); i++)
        if (*i == c) contador++;

    return contador;

}
