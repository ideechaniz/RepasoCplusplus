#include <iostream>

using namespace std;

int main()
{
    double a, b, r;

    a=1;
    b=0;
    try {
        if(b == 0) throw "El valor b es 0 ";

        r=a/b;
        cout << r << endl;
    } catch (const char *error) {
        cout << "Error: " << error << endl;
    }
    return 0;
}
//
