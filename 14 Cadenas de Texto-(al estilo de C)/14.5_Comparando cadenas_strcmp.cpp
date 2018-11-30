/*
Para comparar dos cadenas alfabéticamente (para ver si son iguales o para poder ordenarlas, por ejemplo), usamos

strcmp (cad1, cad2);

Esta función devuelve un número entero, que será:

0 si ambas cadenas son iguales.
Un número negativo, si cadena1 < cadena2.
Un número positivo, si cad1 > cad2.
Hay que tener cuidado, porque las cadenas se comparan como en un diccionario, pero hay que tener en cuenta ciertas cosas:

Al igual que en un diccionario, todas las palabras que empiecen por B se consideran “mayores” que las que empiezan por A.
Si dos cadenas empiezan por la misma letra (o las mismas letras), se ordenan basándose en la primera letra diferente, también al igual que en el diccionario.
La primera diferencia está que en que se distingue entre mayúsculas y minúsculas. Para más detalles, en el código ASCII las mayúsculas aparecen antes que las minúsculas, así que las palabras escritas en mayúsculas se consideran “menores” que las palabras escritas en minúsculas. Por ejemplo, “ala” es menor que “hola”, porque una empieza por “a” y la otra empieza por “h”, pero “Hola” es menor que “ala” porque la primera empieza con una letra en mayúsculas y la segunda con una letra en minúsculas.
La segunda diferencia es que el código ASCII estándar no incluye eñe, vocales acentuadas ni caracteres internacionales, así que estos caracteres “extraños” aparecen después de los caracteres “normales”, de modo que “adiós” se considera “mayor” que “adiposo”, porque la o acentuada está después de todas las letras del alfabeto inglés.
Vamos a ver un primer ejemplo que nos pida dos palabras y diga si hemos tecleado la misma las dos veces:


*/
 // Introducción a C++, Nacho Cabanes
// Ejemplo 06.06:
// Comparar dos cadenas
 
#include <cstring>
#include <iostream>
using namespace std;
 
int main()
{
    char texto1[40], texto2[40];
 
    cout << "Introduce una palabra: ";
    cin >>  texto1;
 
    cout << "Introduce otra palabra: ";
    cin >>  texto2;
 
    if (strcmp(texto1, texto2)==0)
        cout << "Son iguales" << endl;
    else
        cout << "Son distintas" << endl;
 
    return 0;
}
 
