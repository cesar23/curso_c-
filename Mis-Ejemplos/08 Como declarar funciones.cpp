/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Como declarar funciones
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa
using namespace std;
//Declarando funcion
float suma(int a, int b)
{
	int sum;
   sum = a + b;
   return (sum);
}

//Declarancdo funcio
void mensaje(void)
{
	cout<<"Gracias por tu atencion!!"<<endl;
}

main()
{
	//Declarando variables
	int n1, n2, res;
   cout<<"Ingrese un numero ";
   cin>>n1;
   cout<<"Ingrese un numero ";
   cin>>n2;
   //Llamando funcion y asignando valores
   res = suma(n1, n2);
   //Desplegando resultados
   cout<<"Resultado "<<res<<endl;
   //Llamando funcion
   mensaje();
   //Pausa a la ejecucion del programa
   cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter

}


