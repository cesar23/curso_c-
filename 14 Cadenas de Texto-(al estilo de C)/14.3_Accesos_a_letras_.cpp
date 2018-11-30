// Introducción a C++, Nacho Cabanes
// Ejemplo 06.02:
// Cadenas de texto: acceder letra a letra
 
#include <iostream>
using namespace std;
 
int main()
{
    char texto[40];
 
    cout << "Introduce tu nombre: ";
    cin >>  texto;
    cout << "Hola, " << texto << ". Tu inicial es " 
        << texto[0] << endl;
 
    return 0;
}
