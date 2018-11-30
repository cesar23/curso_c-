
// Modificar el valor de un parámetro (estilo C)
 
#include <iostream>
using namespace std;
 
void duplica(int *x) 
{
    *x = *x * 2;
}
 
int main() 
{
    int n = 5;
    cout << "n vale " << n << endl;
    duplica(&n);
    cout << "Ahora n vale " << n << endl;
 
    return 0;   
}
