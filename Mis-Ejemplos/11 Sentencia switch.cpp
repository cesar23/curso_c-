 /*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Como usar la sentencia switch
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa

//funcion para suma
int suma(int a, int b)
{
	int res;
   res = a + b;
   return(res);
}

//funcion para suma
int resta(int a, int b)
{
	int res;
   res = a - b;
   return(res);
}

main()
{
	//declaracion de variables
	int a, b, c, opcion;
   //pidiendo datos al usuario
   cout<<"Ingrese primer numero: ";
   cin>>a;
   cout<<"Ingrese segundo numero: ";
   cin>>b;
   //mostrando menu
   cout<<"Menu"<<endl;
   cout<<"1. Suma"<<endl;
   cout<<"2. Resta"<<endl;
   cout<<"Seleccione una opcion: "<<endl;
   cin>>opcion;
   //declarando sentencia switch
   switch(opcion)
   {
   	case 1:
      	c = suma(a,b);
         cout<<"Suma: "<<c<<endl;
      break;
   	case 2:
      	c = resta(a,b);
         cout<<"Resta: "<<c<<endl;
      break;
      default:
      	cout<<"Opcion no valida"<<endl;
      break;
   }//fin de sentencia switch
   system("pause");
}
