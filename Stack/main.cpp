#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> p; // una pila

    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);

    p.pop(); // quito el ultimo.

    cout << p.top()  << endl;// ultimo valor agregado
    return 0;
}
