/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Operador de indireccion
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa
using namespace std;
main()
{
	int a = 30;//declaracion de variable
   int *puntero;//declaracion de puntero
	puntero = &a;//asignamos la direccion de memoria a puntero
	cout<<"La direccion de memoria de a es: "<<&a<<" y su valor es: "<<a<<endl;//desplegamos valores
   cout<<"La direccion de memoria de puntero es: "<<puntero<<" y su valor es: "<<*puntero<<endl;//desplegamos valor de puntero
    cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter
}
