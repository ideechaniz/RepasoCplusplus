#include <iostream>

using namespace std;

int main()
{
    //int x=5;
    auto x=5;
    cout << x << endl;

    auto c="hola"; // tipo char*
    cout << c << endl;

    auto s=string("hola");
    cout << s << endl;

    int y=3;
    auto &k = y; // auto lo deduce de int.
    cout << k << endl;
    return 0;
}
