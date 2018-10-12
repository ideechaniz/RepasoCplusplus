#include <iostream>
#include <vector>
#include <list>

using namespace std;

template<typename Tipo> Tipo suma(const Tipo &a, const Tipo &b)
//auto suma(const auto &a, const auto &b) // en teoria va con c++14
{
    return a+b;
}

//void imprime(auto c) // en teoria va con c++14
template<typename T> void imprime(const T &c)
{
    //typename decltype(c)::const_iterator i; // esto va a partir de c++11 si es c en vez de &c
   // typename T::const_iterator i; // y en vez de esto dentro del for auto i
    for(auto i=c.begin(); i!= c.end(); i++)
        cout << *i << ' ' ;
    cout << endl;
}

int main()
{
    cout << suma(1,2) << endl;
    cout << suma(2.3, 5.7) << endl;
    cout << suma(string("hola"), string(" mundo!")) << endl;

    vector<int> v(10,1);
    list<int> L(10,2);
    imprime(v);
    imprime(L);

    return 0;
}
