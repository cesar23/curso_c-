#include <string>
#include <iostream>
using namespace std;
 
int main()
{
    string texto1, texto2, texto3;
 
    cout << "Introduce tu nombre: ";
    cin >>  texto1;
 
    cout << "Introduce tu apellido: ";
    cin >>  texto2;
 
    texto3 = texto1 + " " + texto2;
    cout << "Te llamas " << texto3 << endl;
 
    string texto4;
    texto4.assign(texto1);
    texto4.append(" ");
    texto4.append(texto2);
    cout << "O bien " << texto4 << endl;
 
    return 0;
}
