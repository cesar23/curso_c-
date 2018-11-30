#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    ifstream fichero("prueba.txt");
    string linea;
 
    fichero >> linea;
 
    cout << "Se ha leido: " << endl;
    cout << linea << endl;
 
    fichero.close();
 
    return 0;
}
 
