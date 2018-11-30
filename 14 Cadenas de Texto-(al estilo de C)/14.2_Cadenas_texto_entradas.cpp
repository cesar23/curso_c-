// Introducción a C++, Nacho Cabanes
// Ejemplo 06.01b:
// Cadenas de texto al estilo C... con funciones de C
 
#include <cstdio>
 
int main()
{
    char texto[40];         // Para guardar hasta 39 letras
 
    printf("Introduce tu nombre: ");
    scanf("%s", texto);
    printf("Hola, %s\n", texto);
 
    return 0;
}
 
