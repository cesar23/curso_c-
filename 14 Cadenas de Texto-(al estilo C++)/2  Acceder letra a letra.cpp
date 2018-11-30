
 
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string texto;
 
    cout << "Introduce tu nombre: ";
    cin >>  texto;
    cout << "Hola, " << texto 
		<< ". Tu inicial es " << texto[0] 
		<< " y tu segunda letra " << texto.at(1) 
		<< endl;
 
    return 0;
}
 
