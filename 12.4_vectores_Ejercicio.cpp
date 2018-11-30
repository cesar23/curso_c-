// Introducción a C++, Nacho Cabanes
// Ejemplo 05.04:
// Vectores, primer contacto

/*
En física se usan mucho los "vectores", para representar magnitudes que no se pueden expresar sólo con un número. 
Por ejemplo, para una temperatura basta con decir cosas como "tengo 39 grados", pero para una fuerza no basta 
con decir que es de 200 N, sino que también es importante en qué dirección (y sentido) se aplica esa fuerza: 
no tendrá el mismo efecto si se aplica en el centro de un cuerpo o en un extremo, ni si comprime que si estira. Un vector se suele representar a partir de sus "componentes", 
que son las coordenadas de su extremo (suponiendo que comienza en el punto (0,0). Un vector en el plano tendrá dos componentes (x,y) y un vector en el espacio tendrá 3 componentes (x,y,z).
como un conjunto de varias coordenadas. 
Así, un programa que pida al usuario las coordenadas de 2 vectores en el espacio y halle su vector suma sería:
*/
 
#include <iostream>
using namespace std;
 
int main() 
{      
    float vector1[3];
    float vector2[3];
    float vectorSuma[3];
    int i;
 
    // Pedimos los datos del primer vector
    for (i=0; i<3; i++)
    {
        cout << "Introduce la componente " << i 
            << " del primer vector: ";
        cin >> vector1[i];
    }
 
    // Pedimos los datos del segundo vector
    for (i=0; i<3; i++)
    {
        cout << "Introduce la componente " << i 
            << " del segundo vector: ";
        cin >> vector2[i];
    }
 
    // Calculamos la suma
    for (i=0; i<3; i++)
        vectorSuma[i] = vector1[i] + vector2[i];
 
    // Y mostramos el resultado
    cout << "El vector suma es ";
    for (i=0; i<3; i++)
        cout << vectorSuma[i] << " ";
 
    return 0;
}
 
