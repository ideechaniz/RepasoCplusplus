#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v; // es de tipo entero, podia haber puesto otro tipo.
    v.push_back(3); // se lo meto al final
    v.push_back(6);
    v.push_back(9);
    v.push_back(10);

    int tam = v.size();
    for (int i=0; i<tam; i++)
        cout << v[i] << endl;

    return 0;
}
