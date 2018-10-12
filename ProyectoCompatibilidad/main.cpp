#include <iostream>
#include "matematicas.h"

using namespace std;

/*
 * en vez de incluir el .h tambien habria podido hacer esto con todas:
 * extern "C" {
 *      float suma(float a, float b);
 *      etc
 *  }
 */

int main()
{
    float a,b;
    a=4.5f;
    b=0.7f;

    cout << suma(a,b) << endl;
    cout << resta(a,b) << endl;
    cout << multiplica(a,b) << endl;
    cout << divide(a,b) << endl;

    return 0;
}
