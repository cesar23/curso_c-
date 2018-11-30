// Introducción a C++, Nacho Cabanes
// Ejemplo 06.01:
// Primer ejemplo de cadenas de texto al estilo C
 
#include <iostream>
using namespace std;
 
int main()
{
    char texto[40];         // Para guardar hasta 39 letras
 
    cout << "Introduce tu nombre: ";
    cin >>  texto;
    cout << "Hola " <<  texto << endl;
 
    return 0;
}
 
