#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void imprime(int i)
{
    cout << i << endl;
}

bool compara(int a, int b)
{
    return a > b;
}

int main(int argc, char *argv[])
{
    vector<int> v;
    vector <int> :: iterator x;
    v.push_back(1);
    v.push_back(10);
    v.push_back(2);
    v.push_back(8);
    v.push_back(0);
    v.push_back(7);
    v.push_back(3);


    sort(v.begin(), v.end()); // dentro de algorithm

    for(int i =0; (int) i<v.size(); i++)
        cout << v[i] << endl;

    cout << endl;
    x= find(v.begin(), v.end(), 8);
    cout << *x << endl; // el puntero x apunta a donde esta 8 y alli tengo 8.
    cout << ( x == v.end()) << endl;


    sort(v.begin(), v.end(), compara); // para ordenar de mayor a menor.
    cout << endl;
    for_each(v.begin(), v.end(), imprime);

    // count:
    cout << endl;
    v.push_back(3); // repe de aqui abajo
    v.push_back(10);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    int cantidad = count(v.begin(), v.end(), 1); // cuantos unos?
    cout << cantidad << endl;

    return 0;
}
