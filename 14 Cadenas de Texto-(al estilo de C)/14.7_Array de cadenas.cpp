#include <iostream>
using namespace std;
 
int main() 
{      
    char mensajeError[5][80] = {
        "Fichero no encontrado",
        "El fichero no se puede abrir para escritura",
        "El fichero está vacío",
        "El fichero contiene datos de tipo incorrecto"
        "El fichero está siendo usado"
    };
 
    cout << "El segundo mensaje de error es: " 
        << mensajeError[1] << endl;
    cout << "La primera letra del tercer mensaje de error es: "
        << mensajeError[2][0] << endl;
 
    return 0;
}
