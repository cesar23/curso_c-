#include <iostream>
using namespace std;
 
void duplica(int & x) 
{
    x = x * 2;
}
 
int main() 
{
 char *apuntador = NULL; //Declaramos un puntero
//Es recomendable inicializar un puntero en null, para detectar errores f�cilmente

char letra; //Declaramos una variable primitiva

apuntador = &letra; //Asignamos al apuntador la direcci�n de memoria de la variable primitiva

*apuntador = 'x'; //Modificamos la variable a trav�s del apuntador

cout << letra; //Muestra x por pantalla
 
    return 0;   
}
