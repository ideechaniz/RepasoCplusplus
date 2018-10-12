#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ofstream archivo;
    archivo.open("/home/noise/document.txt");

    if (!archivo.is_open() )
    {
        cout << "Error del archivo" << endl;
        return 1;
    }

    string s1,s2;
    int x,y,z,a,b,c,d;
    x=0;
    y=1;
    z=2;

    archivo << "Hola archivo " << 9 << endl;
    archivo << x << " " << y << " " << z;
    archivo.flush();
    archivo.close();

    ifstream lee;
    lee.open("/home/noise/document.txt"); // paso de volverlo a comprobar ahora.
    lee >> s1 >> s2 >> a >> b >> c >> d;
    lee.close();

    cout << s1 <<endl;
    cout << s2 <<endl;
    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;
    cout << d <<endl;

 return 0;
}
