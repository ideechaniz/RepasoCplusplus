#include <iostream>
#include <vector>
#include <list>

using namespace std;

template<typename T> inline vector<T> &operator<< (vector<T> &v, const T &val)
{
    v.push_back(val);
    return v;
}


template<typename T> inline list<T> &operator<< (list<T> &L, const T &val)
{
    L.push_back(val);
    return L;
}

template <typename T> list<T> convierte(const vector<T> &v);
template <typename T> ostream &operator<<(ostream &o, const vector<T> &v);
template <typename T> ostream &operator<<(ostream &o, const list<T> &L);

int main()
{
    vector<int> v;
    list<int> L;
     v <<1 <<2 <<3 <<4 <<5 <<6 <<7 <<8 <<9 <<10;

     L=convierte(v);

     cout << "vector: " << v << endl;
     cout << "Lista:  " << L << endl;

    return 0;
}

template<typename T> list<T> convierte(const vector<T> &v)
{
    list<T> L;
    //L.clear(); // vaciar lista pero ya esta limpia.
    typename vector <T>::const_iterator i;
    for( i=v.begin(); i!= v.end(); i++)
        L << *i;

    return L;
}

template <typename T> ostream &operator<<(ostream &o , const vector<T> &v)
{
    typename vector<T>::const_iterator i;
    for(i=v.begin(); i!= v.end(); ++i)
        o << *i << ' ';

    return o;
}

template <typename T> ostream &operator<<(ostream &o, const list<T> &L)
{
    typename list<T>::const_iterator i;
    for(i=L.begin(); i!=L.end(); i++)
        o << *i<< ' ' ;

    return o;
}
