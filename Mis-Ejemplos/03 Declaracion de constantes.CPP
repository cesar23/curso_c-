/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twiter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Declaracion de constantes en C y C++
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa
#define GRAVEDAD 9.8//define no lleva punto y coma se declaro una constante
const double PI = 3.1416;//const lleva punto y coma se declaro una constante
using namespace std;
int main()
{
	cout<<"uso de constantes usando #define "<<GRAVEDAD<<endl;//desplegando valores de la constante
   cout<<"uso de constantes usando const "<<PI<<endl;//desplegando valores de la constante
   cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter
  // system("pause");//agrega una pausa en el programa hasta que se presiona una tecla
    return 0;
}//fin del main()

