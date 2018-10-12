#include <iostream>
#include <vector>

using namespace std;

template<typename T> ostream &operator <<(ostream &o, const vector<T> &v);
template<typename T> vector<T> operator+(const vector<T> &x, const vector<T> &y);

template<typename T> vector<T> &operator <<(vector<T> &v, const T &val)
{
    v.push_back(val);
    return v;
}

int main()
{
    vector <int> v,w,x,z;
    v << 1 << 2 << 3 <<4 <<5;
    w << 6 <<7 <<8 <<9 <<10;
    x << 11 <<12 <<13 <<14 <<15;

    z=v+w+x;

    cout << v << endl;
    cout << w << endl;
    cout << x << endl;


    cout << z << endl; // vectores concatenados.

    /*
     * 1 2 3 4 5
     * 6 7 8 9 10
     * 11 12 13 14 15
     * 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
     */

    return 0;
}

template<typename T> ostream &operator <<(ostream &o, const vector<T> &v)
{
    typename vector<T>::const_iterator i;
    for(i= v.begin(); i!= v.end(); i++)
        o << *i << ' ' ;

    return o;
}

template<typename T> vector<T> operator+(const vector<T> &x, const vector<T> &y)
{
    vector<T> r; // resultado
    typename vector<T>::const_iterator i;

    for( i=x.begin(); i!= x.end(); i++)
        r.push_back(*i);

    for( i=y.begin(); i!= y.end(); i++)
        r.push_back(*i);

    return r;




}
