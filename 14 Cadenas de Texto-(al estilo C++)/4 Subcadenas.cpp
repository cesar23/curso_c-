
#include <string>
#include <iostream>
using namespace std;
 
int main()
{
    string texto1, texto2, texto3;
 
    cout << "Introduce un frase: ";
    cin >>  texto1;
 
    texto2 = texto1;
    cout << "Una copia de tu texto es " << texto2 << endl;
    texto3 = texto1.substr(0, 4);
    cout << "Y sus 4 primeras letras son " << texto3  << endl;
 
    return 0;
}
 
