// Introducción a C++, Nacho Cabanes
// Ejemplo 09.11:
// Intercambiar el valor de dos parámetros (estilo C++)
 
#include <iostream>
using namespace std;
 
void intercambia(int & x, int & y) 
{
    int auxiliar;
    auxiliar = x;
    x = y;
    y = auxiliar ;
}
 
int main() 
{
    int a = 5;
    int b = 12;
    cout << "a es " << a << " y b es "
        << b << endl;
 
    intercambia(a, b);
    cout << "Ahora a es " << a << " y b es "
        << b << endl;
 
    return 0;
}
