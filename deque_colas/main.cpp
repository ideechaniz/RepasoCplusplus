#include <iostream>
#include <deque> // cola

using namespace std;

int main(int argc, char *argv[])
{
    deque<int> c;
    c.push_back(1);
    c.push_back(2);
    c.push_back(3);


    c.push_front(0); // te cuelas en la cola y te pones primero.
    c.pop_back(); // tirar el ultimo.

    cout << "ultimo " << c.back() << endl;  // ultimo valor, el de atras.

    cout << "primero " << c.front() << endl; // el primero el de enfrente
    return 0;
}
