/*
Juan Jose Molina
Correo: juanjosemolinaguate@gmail.com
Twiter: @Juanjo_Molina
Blog: http://cparaprincipiantes2012.blogspot.com/
Declaracion de variables
*/
#include <iostream>//desplegar la ejecucion del programa
#include <cstring>//hacer pausa en el programa
//#include <math>//libreria para utilizar funciones matematicas
#include <cmath>

//declaracion de variables globales
char c='\0';
using namespace std;
int main(){
	//declaracion de variables locales
	int n1=9, n2=3;//se le asigno un valor a cada variable
   float r=0;//se inicializo una variable
   double raiz=0;//se inicializo una variable

   //se realizaron operaciones
   r=n1+n2;
   raiz = sqrt(n1);

   //desplegando resultados
   cout<<"suma es "<<r<<c<<endl;
   cout<<"raiz es "<<raiz<<endl;
   cin.get(); // hace que la ejecucíon se detenga hasta que se presione enter
  // system("pause");//agregando pausa al programa para ver los resultados en consola
  return 0;
}

