#include <iostream>
#include <string> // fijate que no tiene .h, con <.h> suelen ser de C

using namespace std;

int main()
{
   const char *nombre = "Juan";
   char apellido[] = "Lopez";
   cout <<  nombre << ' ' << apellido << endl;

   string nombrecompleto;
   nombrecompleto= "Juan Lopez Murrieta";
   cout << nombrecompleto << endl;

   // convertir var de c++ a array de chars de c
   const char *nombreC;
   string nom;
   nom = "Perdro Lopez";
   nombreC= nom.c_str();
   cout << nombreC << endl;

   string mystring = "Juan Lopez";  // 10 caracteres
   cout << sizeof (mystring) << endl ; // sizeof ya no me vale para contar caracteres.
   cout << mystring.size() <<endl;


   return 0;
}
