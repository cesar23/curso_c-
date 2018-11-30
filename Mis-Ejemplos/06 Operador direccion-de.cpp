/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Operador direccion de
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa
using namespace std;
main()
{
	int a = 7;//declaracion de variables
   int b = 10;
   cout<<"La direccion de a es: "<<&a<<" y tiene un valor de: "<<a<<endl;//desplegando posicion en memoria y valor de variable
   cout<<"La direccion de b es: "<<&b<<" y tiene un valor de: "<<b<<endl;
   cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter
}
