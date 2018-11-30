/*
Asignando a una cadena el valor de otra: strcpy, strncpy; strcat

------------------------------------------------------------------

strcpy (destino, origen);

Es decir, debemos usar una funci�n llamada �strcpy� (string copy, copiar cadena), que se encuentra tambi�n en �string.h�. Vamos a ver dos ejemplos de su uso:

strcpy (saludo, "hola");

strcpy (textoDefinitivo, textoProvisional);

Es nuestra responsabilidad que en la cadena de destino haya suficiente espacio reservado para copiar lo que queremos. Si no es as�, estaremos sobreescribiendo direcciones de memoria en las que no sabemos qu� hay.
Para evitar este problema, tenemos una forma de indicar que queremos copiar s�lo los primeros n bytes de origen, usando la funci�n �strncpy�, as�:

strncpy (destino, origen, n);

Vamos a ver un ejemplo, que nos pida que tecleemos una frase y guarde en otra variable s�lo las 4 primeras letras:



*/
 
#include <cstring>
#include <iostream>
using namespace std;
 
int main()
{
    char texto1[40], texto2[40], texto3[10];
 
    cout << "Introduce un frase: ";
    cin >>  texto1;
 
    strcpy(texto2, texto1);
    cout << "Una copia de tu texto es " << texto2 << endl;
    strncpy(texto3, texto1, 4);
    cout << "Y sus 4 primeras letras son " << texto3  << endl;
 
    return 0;
}
 
