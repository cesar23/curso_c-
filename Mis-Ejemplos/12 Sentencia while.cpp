 /*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Como usar la sentencia while
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa
using namespace std;
main()
{
	//declarando variables
	int inpar=1;
   //iniciando sentencia while
   while(inpar<100)
   {
   	cout<<inpar<<"\t";
      inpar = inpar + 2;
   }
  cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter
}
