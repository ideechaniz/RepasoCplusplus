#include <iostream>
#include <sstream> // para hacer lectura y escritura en/de strings

using namespace std;



int main()
{

    int a,b;
    string s,x;

    ostringstream o;
    o << 1 << " " << "hola" << ' ' << 10 ;
    s=o.str();
    cout << s << endl;

    cout << endl;

    istringstream i(s);
    i>> a >> x >> b;

    cout << a << endl;
    cout << x << endl;
    cout << b << endl;

    return 0;
}
