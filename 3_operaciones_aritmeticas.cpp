
#include <iostream>
 
int main () 
{
    std::cout << "Hola, " << "Nacho";
    std::cout << "\n";
    std::cout << "5+7=" << 5+7;
    
    //Pedir datos al usuario
     int numero;
    std::cout << "Dime un número: ";
    std::cin >> numero;
    std::cout << "El triple de tu número es " << numero*3;
    
    /*
    std::cin >> numero; se encarga de leer lo que introduzca el usuario y de guardarlo dentro de la variable "numero".
	(Atención: se usan símbolos de "mayor que", al contrario que en "cout", como forma de expresar que los datos van "hacia la variable".
    */
    
    
    
     int n1;
    int n2;
    int suma;
 
    std::cout << "Dime un numero: ";
    std::cin >> n1;
    std::cout << "Dime otro numero: ";
    std::cin >> n2;
    suma = n1 + n2;
    std::cout << "Su suma es " << suma;
    
    
    
    return 0;
}
 
