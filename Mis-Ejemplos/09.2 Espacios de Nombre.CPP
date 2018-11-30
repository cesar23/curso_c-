/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twiter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Declaracion de constantes en C y C++
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa

namespace ciudad
{
	int calle;
}

namespace pueblito
{
	int calle;
}


using namespace ciudad;
int main()
{
	calle=12;
	std::cout<<pueblito::calle<<std::endl;
	std::cout<<calle<<std::endl;


   std::cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter
  // system("pause");//agrega una pausa en el programa hasta que se presiona una tecla
    return 0;
}//fin del main()

