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
	
int numero;
 
cout << "2==3 vale " << (2==3);  // Escribe 0
cout << "\n";  // 
    cout << "2!=3 vale " << (2!=3);  // Escribe 1
 
 
 cout << "----------------------------------------------------\n";  //
 
 int a, b, mayor;
 
    cout << "Escriba un numero: ";
    cin >> a;
    cout << "Escriba otro: ";
    cin >> b;
    mayor = (a>b) ?  a : b;
    cout << "El mayor de los numeros es " << mayor;
 
    return 0;
}
 
