#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // int arreglo[]= {1 ,2 ,3 ,4 ,5}; // modo tradicional
    int arreglo[] {1 ,2 ,3 ,4 ,5}; // modo C++11, le falta el igual.
    const unsigned int tam= sizeof(arreglo) / sizeof(int);

    unsigned int i;
    for(i=0; i< tam; i++)
        cout << arreglo[i] << ' ';

    cout << endl;
    vector<int> v({ 1, 2, 3, 4, 5, 6 });
    //vector<int> v= { 1, 2, 3, 4, 5, 6 }; // en C++98 inicial con llaves no se permite.
    for(i=0; i< v.size(); i++)
        cout << v[i] << ' ';

    cout << endl;

    //  INITIALIZER LIST
    initializer_list<int> L { 1,2,3,4,5,6,7,8,9,10};
    initializer_list<int>::iterator j;
    for(j=L.begin();j!=L.end(); j++)
        cout << *j << ' ';

    cout << endl;


    return 0;
}
