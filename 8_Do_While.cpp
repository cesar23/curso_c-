// Introducci�n a C++, Nacho Cabanes
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
        cout << "Introduzca su clave num�rica: ";
        cin >> clave;
        if (clave != valida) 
            cout << "No v�lida!" << endl;
    }
    while (clave != valida);
 
    cout << "Aceptada." << endl;
    return 0;
}
