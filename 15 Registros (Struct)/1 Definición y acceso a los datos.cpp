#include <string>
#include <iostream>
using namespace std;
 
 /*
Un registro es una agrupación de datos, los cuales no necesariamente son del mismo tipo. Se definen con la palabra “struct”.

Para acceder a cada uno de los datos que forman el registro, tanto si queremos leer su valor como si queremos cambiarlo, 
se debe indicar el nombre de la variable y el del dato (o campo) separados por un punto:
 */
 

 
int main()
{
    struct
    {
        string nombre;
        char  inicial;
        int   edad;
        float nota;
    } persona;
 
    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    cout << "La edad es " << persona.edad;
 
    return 0;
}
 
