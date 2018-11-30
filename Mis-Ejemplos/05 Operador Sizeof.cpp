/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Operador sizeof
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa
using namespace std;
main()
{
	int a = 0;//declaracion de variables
   a = sizeof a;//utilizando sizeof para un identificador
   cout<<"El valor de a es de: "<<a<<" bytes"<<endl;
   cout<<"El valor del tipo de variable double es de: "<<sizeof(double)<<" bytes"<<endl;//utilizando sizeof para un tipo de variable
   //system("pause");//agregando una pausa a un programa 
    cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter
}
