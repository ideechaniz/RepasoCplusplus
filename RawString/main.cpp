#include <iostream>

using namespace std;

int main()
{
    cout << "Hola \ adios" << endl; // la \ no aparece.

    cout << R"(Hola \ adios)" << endl; // requiere de c++2011

    return 0;
}
