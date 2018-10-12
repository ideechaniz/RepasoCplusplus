#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
   // se hacen con punteros a funcion y es parte de c++11
   int (*suma)(int) = [](int numero) // esta funcion solo existe dentro del main
    {
        return numero +1;
    }; // importante el punto y coma.

   cout << suma(5) << endl;

    auto pordos = [](int numero)
    {
            return numero *2;
    };

    cout << pordos(5) << endl;

    cout << endl;
    vector<int> v{ 1,2,3,4,5};

    sort(v.begin(), v.end(), [](int a, int b) {
                                return a > b;
                                });
    int y=1,x=2;
    for_each(v.begin(), v.end(), [=](int i) { // el igual es para acceder a variables externas
                                 cout << i*x << endl;
                                 });
    // si en vez de = hubiese puesto x,y habria accedido solo a x e y.
    // con el = no puedo modificar, para modificar tengo que usar el simbolo &
    return 0;



}
