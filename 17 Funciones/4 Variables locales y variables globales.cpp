#include <iostream>
using namespace std;
 
int n = 5;   // Variable global
 
void duplica(int n) 
{
    n = n * 2;  // Cuidado: variable local (parámetro)
}
 
int main() 
{    
    int x = 5;  // Variable local, no usada
 
    cout << "n vale " << n << endl;
    duplica(n);
    cout << "Ahora n vale " << n << endl;
 
    return 0;
}
