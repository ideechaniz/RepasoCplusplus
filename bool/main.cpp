#include <iostream>

using namespace std;

int main()
{

    // fijate que en C 99 habia que incluir stdbool.h y en C++ no.
    // en C el bool era un int por debajo y en c++ es un bool.

    // 1 = true
    // 0 = false

   cout << true << endl;
   cout << false << endl;

   cout << std::boolalpha << false << endl; // asi sale la palabra en vez de cero.
   cout << std::boolalpha << 0 << endl; // cuando es numerico continua siendo numerico.

    bool r = 7 >5;

    if (r)
    {
        cout << "ok" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
