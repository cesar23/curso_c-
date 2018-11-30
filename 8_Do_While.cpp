// Introducción a C++, Nacho Cabanes
// Ejemplo 04.02:
// La orden "do..while"
 
#include <iostream>
using namespace std;
 
int main()
{
    int valida = 711;
    int clave;
 
    do
    {
        cout << "Introduzca su clave numérica: ";
        cin >> clave;
        if (clave != valida) 
            cout << "No válida!" << endl;
    }
    while (clave != valida);
 
    cout << "Aceptada." << endl;
    return 0;
}
