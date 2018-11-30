// Introducción a C++, Nacho Cabanes
// Ejemplo 06.01c:
// Entrada/salida de enteros al estilo C
 
#include <cstdio>
 
int main()
{
    int n;
    float x;
 
    printf("Dime un entero: ");
    scanf("%d", &n);
    printf("Y un real: ");
    scanf("%f", &x);
    printf("El entero es %d y el real es %f\n", n,x);
 
    return 0;
}
