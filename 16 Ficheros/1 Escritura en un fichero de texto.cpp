#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    ofstream fichero("prueba.txt");
    fichero << "Esto es una l�nea" << endl;
    fichero << "Esto es otra";
    fichero << " y esto es continuaci�n de la anterior" << endl;
    fichero.close();
 
    return 0;
}
