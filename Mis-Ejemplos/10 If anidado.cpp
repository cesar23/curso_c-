/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twitter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Programa Como sentencia else if
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa

main()
{
	inicio:
	int a, b, c;
   cout<<"Ingrese el primer numero: ";
   cin>>a;
   cout<<"Ingrese el segundo numero: ";
   cin>>b;
   cout<<"Ingrese el tercer numero: ";
   cin>>c;
   if(a>b && a>c)
   {
   	cout<<"El primer numero es el mayor"<<endl;
   }
   else
   {
   	if(b>a && b>c)
      {
      	cout<<"El segundo numero es el mayor"<<endl;
      }
      else
      {
      	if(c>a && c>b)
         {
         	cout<<"El tercer numero es el mayor"<<endl;
         }
      }
   }
   system("pause");
   system("cls");
   goto inicio;
}