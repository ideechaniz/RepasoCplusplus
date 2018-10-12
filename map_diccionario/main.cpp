#include <iostream>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{
    map<string, double> personas;
    map<string, double> :: iterator i;

    personas["Juan"] = 300.0;
    personas["Pedro"] = 400.0;
    personas["Maria"] = 500.0;
    personas["Luis"] = 600.0;

    for(i= personas.begin();i!= personas.end(); i++ )
        cout << i->first << ": " << i->second << endl;

    // fijate que los ordena alfabeticamente pero eso da igual.

    return 0;
}
