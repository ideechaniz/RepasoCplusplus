#include <iostream>

using namespace std;

int main()
{
    float r;
    int a,b;
    a=5;
    b=2;
    // r=(float) a/b; // en C se hacia asi
    r= float(a) / float (b); // en C++ se suele hacer asi.
    cout << a/b << endl; // da 2 en entero.
    cout << r << endl;   // da 2.5 en float.

    return 0;
}
