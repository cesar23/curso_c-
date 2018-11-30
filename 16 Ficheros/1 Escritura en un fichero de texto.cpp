#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    ofstream fichero("prueba.txt");
    fichero << "Esto es una línea" << endl;
    fichero << "Esto es otra";
    fichero << " y esto es continuación de la anterior" << endl;
    fichero.close();
 
    return 0;
}
