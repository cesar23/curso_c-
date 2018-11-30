/*
Podemos ver si una cadena contiene un cierto texto, usando "strstr", que devuelve 0 si no la contiene, o un valor distinto en caso de que sí la contenga, así:ver un primer ejemplo que nos pida dos palabras y diga si hemos tecleado la misma las dos veces:


*/
// Introducción a C++, Nacho Cabanes
// Ejemplo 06.07:
// Buscar una subcadena dentro de otra cadena
 
#include <cstring>
#include <iostream>
using namespace std;
 
int main()
{
    char texto1[40], texto2[40];
 
    cout << "Introduce una palabra: ";
    cin >>  texto1;
 
    cout << "Introduce otra palabra a buscar en ella: ";
    cin >>  texto2;
 
    if (strstr(texto1, texto2)==0)
        cout << "La primera NO contiene a la segunda" << endl;
    else
        cout << "La primera contiene a la segunda" << endl;
 
    return 0;
}
