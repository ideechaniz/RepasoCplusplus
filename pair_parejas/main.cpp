#include <iostream>

using namespace std;

template <typename tipo1 , typename tipo2> void imprime(const pair<tipo1, tipo2> &p)
{
    cout << p.first << ' ' << p.second << endl;
}

int main(int argc, char *argv[])
{

    pair<string, double> p0;
    p0.first= "Juan";
    p0.second=5000.0;

    pair<int, float> p1;
    p1.first = 3;
    p1.second= 4.5f;

    imprime(p0);
    imprime(p1);

    return 0;
}
