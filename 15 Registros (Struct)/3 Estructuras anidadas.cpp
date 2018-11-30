#include <iostream>
#include <string>
using namespace std;
/*
Podemos encontrarnos con un registo que tenga varios datos, y que a su vez ocurra que uno de esos datos esté formado por varios datos más sencillos. 
Para hacerlo desde C++, incluiríamos un “struct” dentro de otro, así:
*/

 
struct fechaNacimiento
{
    int  dia;
    int  mes;
    int anyo;
};
 
struct datosPersona
{
    string nombre;
    char  inicial;
    struct fechaNacimiento diaDeNacimiento;
    float nota;
};
 
int main()
{
    datosPersona persona;
 
    persona.nombre = "Ignacio";
    persona.inicial = 'I';
    persona.diaDeNacimiento.mes = 8;
    persona.nota = 7.5;
    cout << "La nota es " << persona.nota;
 
    return 0;
}
