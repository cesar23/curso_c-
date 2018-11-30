// Introducción a C++, Nacho Cabanes
// Ejemplo 04.01:
// La orden "while"
 
#include <iostream>
using namespace std;
 
int main()
{
    int numero;
 
    cout << "Teclea un numero (0 para salir): ";
    cin >> numero;
    while (numero!=0)
    {
        if (numero > 0) 
            cout << "Es positivo" << endl;
        else 
            cout << "Es negativo" << endl;
        cout << "Teclea otro numero (0 para salir): ";
        cin >> numero;
    }
 
    return 0;
}
