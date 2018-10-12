#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    list <int> L;
    list<int>::iterator i; // un puntero para iterar.

    L.push_back(1);
    L.push_back(2);
    L.push_back(3);

    for(i=L.begin(); i!= L.end(); i++)
        cout << *i+1 <<endl;

    return 0;
}
