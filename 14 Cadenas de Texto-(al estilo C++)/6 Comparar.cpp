#include <string>
#include <iostream>
using namespace std;
 
int main()
{
    string texto1, texto2;
 
    cout << "Introduce una palabra: ";
    cin >>  texto1;
 
    cout << "Introduce otra palabra: ";
    cin >>  texto2;
 
    if (texto1 == texto2)
        cout << "Son iguales" << endl;
    else
        cout << "Son distintas" << endl;
 
     cout << "De otra manera: " << endl;
 
     if (texto1.compare(texto2) == 0)
        cout << "Son iguales" << endl;
    else
        cout << "Son distintas" << endl;
 
    return 0;
}
 
