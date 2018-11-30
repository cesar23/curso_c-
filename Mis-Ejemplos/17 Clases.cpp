#include <iostream>
#include <list>
#include <vector>

using namespace std;


class cuentas{
	public:
		int sumdaDos(int arg);
		int sumdaTres(int arg);
	private:
		int resultado;
};
//declarar las sentencias y decirle que  va hacer cada  funcion
int cuentas::sumdaDos(int arg){
	resultado= arg+2;
	return resultado;
}


int cuentas::sumdaTres(int arg){
	resultado= arg+3;
	return resultado;
}

int main ()
{
	
	//declaramos el objeto
	cuentas bcpCuenta;
	cout << bcpCuenta.sumdaDos(2) << endl;
	cout << bcpCuenta.sumdaTres(3) << endl;
    cin.get();

    return 0;
}
