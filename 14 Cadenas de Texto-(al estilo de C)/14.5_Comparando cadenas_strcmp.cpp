/*
Para comparar dos cadenas alfab�ticamente (para ver si son iguales o para poder ordenarlas, por ejemplo), usamos

strcmp (cad1, cad2);

Esta funci�n devuelve un n�mero entero, que ser�:

0 si ambas cadenas son iguales.
Un n�mero negativo, si cadena1 < cadena2.
Un n�mero positivo, si cad1 > cad2.
Hay que tener cuidado, porque las cadenas se comparan como en un diccionario, pero hay que tener en cuenta ciertas cosas:

Al igual que en un diccionario, todas las palabras que empiecen por B se consideran �mayores� que las que empiezan por A.
Si dos cadenas empiezan por la misma letra (o las mismas letras), se ordenan bas�ndose en la primera letra diferente, tambi�n al igual que en el diccionario.
La primera diferencia est� que en que se distingue entre may�sculas y min�sculas. Para m�s detalles, en el c�digo ASCII las may�sculas aparecen antes que las min�sculas, as� que las palabras escritas en may�sculas se consideran �menores� que las palabras escritas en min�sculas. Por ejemplo, �ala� es menor que �hola�, porque una empieza por �a� y la otra empieza por �h�, pero �Hola� es menor que �ala� porque la primera empieza con una letra en may�sculas y la segunda con una letra en min�sculas.
La segunda diferencia es que el c�digo ASCII est�ndar no incluye e�e, vocales acentuadas ni caracteres internacionales, as� que estos caracteres �extra�os� aparecen despu�s de los caracteres �normales�, de modo que �adi�s� se considera �mayor� que �adiposo�, porque la o acentuada est� despu�s de todas las letras del alfabeto ingl�s.
Vamos a ver un primer ejemplo que nos pida dos palabras y diga si hemos tecleado la misma las dos veces:


*/
 // Introducci�n a C++, Nacho Cabanes
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
 
