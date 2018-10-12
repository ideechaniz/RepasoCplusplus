#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
    // Esto es para c++11, mira el CMakeLists.txt
    // Similar a pair<int, float> p1;
    // pero las tuplas admiten una cantidad indefinida de valores.

    // Esto es un ejemplo muy pobre. es mucho mejor la de
    // https://thispointer.com/c11-stdtuple-tutorial-examples/

    tuple<int, int> t1;
    tuple<int, double, string> t2;
    tuple<char, int, string> t3;

    get<0>(t1) = 1;
    get<1>(t1) = 2;

    get<0>(t2)=10;
    get<1>(t2)=-2.7;
    get<2>(t2)="Pedro";

    get<0>(t3)='@';
    get<1>(t3)=90;
    get<2>(t3)="Juan";

    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << endl;
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;
    cout << get<2>(t2) << endl;
    cout << endl;
    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl;
    cout << get<2>(t3) << endl;
    cout << endl;

    return 0;
}
