// Introducción a C++, Nacho Cabanes
// Ejemplo 03.01:
// Condiciones con if 

/*

Operadores relacionales: <, <=, >, >=, ==, !=
3.5. Operadores lógicos: &&, ||, !

*/
 
#include <iostream>
using namespace std;
 
int main() 
{
	
int a, b, resultado;
    int operacion;
 
    cout << "Escriba un numero: ";
    cin >> a;
    cout << "Escriba otro: ";
    cin >> b;
    cout << "Escriba una operacion (1 = resta; otro = suma): ";
    cin >> operacion;
    resultado = (operacion == 1) ?  a-b : a+b;
    cout << "El resultado es " << resultado;
 
    return 0;
}
 
