#include <iostream>

using namespace std;

// int suma1(int numero);
auto suma1(int numero) ->int;

auto suma2(int numero) -> decltype(numero +1);

int main()
{
    cout << suma1(5)<< endl;
    cout << suma2(5)<< endl;

    return 0;
}

auto suma1(int numero) -> int
{
    return numero +1;
}

auto suma2(int numero) -> decltype(numero +1)
{
    return numero +1;
}
