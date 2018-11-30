#include <iostream>
using namespace std;
 
void duplica(int & x) 
{
    x = x * 2;
}
 
int main() 
{
 char *apuntador = NULL; //Declaramos un puntero
//Es recomendable inicializar un puntero en null, para detectar errores fácilmente

char letra; //Declaramos una variable primitiva

apuntador = &letra; //Asignamos al apuntador la dirección de memoria de la variable primitiva

*apuntador = 'x'; //Modificamos la variable a través del apuntador

cout << letra; //Muestra x por pantalla
 
    return 0;   
}
