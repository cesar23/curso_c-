#include "iostream"
#include "<cstring>"

using namespace std;

int main()
{
    int edades[] = {1,2,9,8,16,32,9,50,36,20,1,87};
    
    cout<<sizeof(edades)<<sizeof(edades[0])<<endl;
    int limite = (sizeof(edades)/sizeof(edades[0]));
    
    cout<<limite<<endl;
    for (int i = 0; i < limite; i++)
    {
            cout<<edades[i]<<endl;
    }
}
