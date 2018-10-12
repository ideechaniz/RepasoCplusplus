#include <iostream>

using namespace std;

namespace Seccion1
{
    int x;
}

namespace Seccion2
{
    float suma(float a, float b);
    float resta(float a, float b);
    float multiplica(float a, float b);
    float divide(float a, float b);
}

using namespace Seccion2; // si pongo esto al usarlo no necesito los ::
int main()
{
    Seccion1::x=45;
    cout << Seccion1::x << endl;

    cout << "suma=" << Seccion2::suma(1,2) << endl;
    cout << "resta=" << resta(2,1) << endl;

    return 0;
}


namespace Seccion2
{
    float suma(float a, float b)
    {
        return a+b;
    }
    float resta(float a, float b)
    {
        return a-b;
    }
    float multiplica(float a, float b)
    {
        return a*b;
    }
    float divide(float a, float b)
    {
        return a/b;
    }
} // end namespace Seccion2
