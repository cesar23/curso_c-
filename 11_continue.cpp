/ Introducción a C++, Nacho Cabanes
// Ejemplo 04.09:
// "for" interrumpido con "continue"
 
#include <iostream>
using namespace std;
 
int main()
{
    int i;
 
    for (i=0; i<=10; i++)
    {
        if (i==5) continue;
        cout << i << " ";
    }
 
    return 0;
}
 
