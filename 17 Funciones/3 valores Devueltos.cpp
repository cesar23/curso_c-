#include <iostream>
using namespace std;
 
int cuadrado(int n) 
{
    int resultado = n*n;
 
    return resultado;
}
 
int main() 
{    
    int numero;
 
    cout << "Dime un n�mero: ";
    cin >> numero;    
    cout << "Su cuadrado es " << cuadrado(numero) << endl;
 
    return 0;
}
 
