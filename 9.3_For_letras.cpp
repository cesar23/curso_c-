// Introducción a C++, Nacho Cabanes
// Ejemplo 04.06:
// "for" que usa "char"
 
#include <iostream>
using namespace std;
 
int main()
{
    char letra;
 
    for (letra='a'; letra<='z'; letra++)
        cout << letra;
 
    return 0;
}
