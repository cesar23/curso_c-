// Introducci�n a C++, Nacho Cabanes
// Ejemplo 05.04:
// Vectores, primer contacto

/*
En f�sica se usan mucho los "vectores", para representar magnitudes que no se pueden expresar s�lo con un n�mero. 
Por ejemplo, para una temperatura basta con decir cosas como "tengo 39 grados", pero para una fuerza no basta 
con decir que es de 200 N, sino que tambi�n es importante en qu� direcci�n (y sentido) se aplica esa fuerza: 
no tendr� el mismo efecto si se aplica en el centro de un cuerpo o en un extremo, ni si comprime que si estira. Un vector se suele representar a partir de sus "componentes", 
que son las coordenadas de su extremo (suponiendo que comienza en el punto (0,0). Un vector en el plano tendr� dos componentes (x,y) y un vector en el espacio tendr� 3 componentes (x,y,z).
como un conjunto de varias coordenadas. 
As�, un programa que pida al usuario las coordenadas de 2 vectores en el espacio y halle su vector suma ser�a:
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
 
