// Introducción a C++, Nacho Cabanes
// Ejemplo 04.08:
// "for" interrumpido con "break" 
 
#include <iostream>
using namespace std;
 
int main()
{
    int i;
 
    for (i=0; i<=10; i++)
    {
        if (i==5) break;
        cout << i << " ";
    }
 
    return 0;
}
 
