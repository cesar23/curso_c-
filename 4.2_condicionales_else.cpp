// Introducción a C++, Nacho Cabanes
// Ejemplo 03.01:
// Condiciones con if 
 
#include <iostream>
using namespace std;
 
int main() 
{
   int numero;
 
    cout << "Escribe un numero: ";
    cin >> numero;
    if (numero>0)  cout << "El numero es positivo.";
        else  cout << "El numero es cero o negativo.";
 
    return 0;  
}
 
