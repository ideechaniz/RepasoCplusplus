#include <iostream>

using namespace std;

int suma(int a, int b)
{
    cout << "int" << endl;
    return a+b;
}

float suma(float a, float b)
{
    cout << "float" <<endl;
    return a+b;
}

int main()
{
    cout << suma(1, 2) << endl;
    cout << suma(1.0f, 2.0f) << endl;
    return 0;
}
