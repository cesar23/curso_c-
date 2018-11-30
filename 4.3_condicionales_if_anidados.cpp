// Introducción a C++, Nacho Cabanes
// Ejemplo 03.01:
// Condiciones con if 
 
#include <iostream>
using namespace std;
 
int main() 
{
	
int numero;
 
    cout << "Escriba un numero: ";
    cin >> numero;
    if (numero < 0)
        cout << "El numero es negativo.";
    else 
        if (numero == 0)
            cout << "El numero es cero.";
        else
            cout << "El numero es positivo.";
 
    return 0;
}
 
