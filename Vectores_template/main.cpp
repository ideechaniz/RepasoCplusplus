#include <iostream>
#include <vector>

using namespace std;

template <typename T> ostream &operator <<(ostream &o, const vector<T> &v);

template <typename T> inline vector<T> &operator<<(vector<T> &v, const T &val)
{
    v.push_back(val);
    return v;
}

int main()
{
    vector<int> v;
    vector<float> w;
    vector<char> c;
    vector<double> d;

    v << 1 << 2 << 3 << 100 << 500 << -1000 << -1 << 0 << 20;
    w << 3.14f << 3.9f << 100.5f << 100.03f << 100.01f << -1.12345f;
    c << '@' << '#' << '?' << '$' << '&' << '*' << '/' << ')';
    d << 1.0 << 2.0 << 3.1 << 3.2 << -3.3 << 100.001 << 500.05 << -0.00001;

    cout << v << endl;
    cout << w << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}

template <typename T> ostream &operator<<(ostream &o, const vector<T> &v)
{
    typename vector<T>::const_iterator i;
    for(i= v.begin(); i!= v.end(); i++)
       o << *i << ' ' ;

    return o;

}
