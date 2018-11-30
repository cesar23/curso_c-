/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Como usar sentencia if
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa
using namespace std;
main()
{
	int a;
   cout<<"Ingrese la nota del alumno ";
   cin>>a;
   if(a>=60)
   {
   	cout<<"Aprobado!!!"<<endl;
   }
   else
   {
   	cout<<"No Aprobado!!!"<<endl;
   }
    cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter
}
