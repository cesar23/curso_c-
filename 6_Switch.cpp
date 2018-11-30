// Introducción a C++, Nacho Cabanes
// Ejemplo 03.12:
// Condiciones con switch 
 
#include <iostream>
using namespace std;
 
int main()
{
  int numero;
 
  cout << "Introduce un numero del 1 al 10: ";
  cin >> numero;
  switch (numero)
  {
    case 1: cout << "Uno";
            break;
    case 2: cout << "Dos";
            break;
    case 3: cout << "Tres";
            break;
    case 4: cout << "Cuatro";
            break;
    case 5: cout << "Cinco";
            break;
    case 6: cout << "seis";
            break;
    case 7: cout << "Siete";
            break;
    case 8: cout << "Ocho";
            break;
    case 9: cout << "Nueve";
            break;
    case 10: cout << "Diez";
            break;
    default:  cout << "Valor incorrecto!";
  }
 
  return 0;
}
