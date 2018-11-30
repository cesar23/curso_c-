#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main() 
{
    int n;
    srand(time(0));
    n = rand() % 10 + 1;
    cout << "Un número entre 1 y 10: " <<  n << endl;
 
    return 0;
}
