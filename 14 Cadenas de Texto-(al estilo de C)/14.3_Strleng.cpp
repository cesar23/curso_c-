// Introducción a C++, Nacho Cabanes
// Ejemplo 06.03:
// Longitud de una cadena
 
#include <cstring>
#include <iostream>
using namespace std;
 
 
int main()
{
    char texto[40];
 
    cout << "Introduce una palabra: ";
    cin >>  texto;
    cout << "Has tecleado " << strlen(texto)
        << " letras." << endl;    
 
    return 0;
}
