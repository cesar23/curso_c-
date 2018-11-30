#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main()
{
    cout << "Dime el nombre del fichero: ";
    string nombre;
    getline(cin, nombre);
 
    ifstream fichero(nombre.c_str());
    string linea;
 
    getline(fichero,linea);
    cout << "Se ha leido: " << endl;
    cout << linea << endl;
 
    fichero.close();
 
    return 0;
}
 
