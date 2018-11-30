
#include <string>
#include <iostream>
using namespace std;
 
 
int main()
{
    string texto;
 
    cout << "Introduce una palabra: ";
    cin >>  texto;
    cout << "Has tecleado " << texto.length()
        << " letras." << endl;    
 
    return 0;
}
 
