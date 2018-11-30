// Introducción a C++, Nacho Cabanes
// Ejemplo 04.04:
// "for" anidados - tablas de multiplicar
 
#include <iostream>
using namespace std;
 
int main()
{
    int tabla, numero;
 
    for (tabla=1; tabla<=5; tabla++)
        for (numero=1; numero<=10; numero++)
            cout << tabla <<  " por " <<  numero
                << " es " << tabla*numero << endl;
 
    return 0;
}
 
