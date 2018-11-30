/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
While anidado
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa
using namespace std;
main()
{
	int i=1, j=1;
   while(i<=3)
   {
   	cout<<"i vale: "<<i<<endl;
      while(j<=3)
      {
      	cout<<" j vale: "<<j<<endl;
         j++;
      }
      cout<<endl;
      i++;
      j=1;
   }
   cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter
}
