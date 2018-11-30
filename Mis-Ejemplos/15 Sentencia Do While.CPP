/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Sentencia Do While
Sintaxis
	do
   {
   	sentencia
   }while(condicion);
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa

int opcion;
float a = 10, b = 5, r = 0;

void funcionMenu()
{
	do
   {
   	cout<<"Menu Principal"<<endl;
      cout<<"1. Suma"<<endl;
      cout<<"2. Resta"<<endl;
      cout<<"3. Multiplicacion"<<endl;
      cout<<"4. Divisio"<<endl;
      cout<<"5. Salir"<<endl;
      cin>>opcion;

      switch(opcion)
      {
      	case 1:
         	r = a+b;
            cout<<"El resultado es: "<<r<<endl;
         break;
      	case 2:
         	r = a-b;
            cout<<"El resultado es: "<<r<<endl;
         break;
      	case 3:
         	r = a*b;
            cout<<"El resultado es: "<<r<<endl;
         break;
      	case 4:
         	r = a/b;
            cout<<"El resultado es: "<<r<<endl;
         break;
         default:
         break;
      }
   }while(opcion<5);
   system("cls");
   cout<<"Salio del do while"<<endl;
   system("pause");
}


main()
{
    funcionMenu();
}
