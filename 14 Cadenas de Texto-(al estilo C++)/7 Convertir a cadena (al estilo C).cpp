#include <string>
#include <iostream>
using namespace std;
 
 /*
 Muchas órdenes existentes en C y en C++ esperan que, si se le indica algún texto, éste sea "al estilo de C" (un array de caracteres), y no trabajan correctamente con datos de tipo "string".

No es un gran problema: podemos obtener una cadena "al estilo C" a partir de un string si le añadimos al final ".c_str()"
 */
int main()
{
    string texto1, texto2;
 
    cout << "Introduce una palabra: ";
    cin >>  texto1;

        
 printf("%s", texto1.c_str());
    return 0;
}
 
