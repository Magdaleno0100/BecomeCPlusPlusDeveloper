#include <iostream>

using namespace std;

int main(){
	
	int valor1 = 0;
	//Declaraci�n de puntero
	int *puntero1;
	
	//Asignaci�n de puntero
	puntero1 = &valor1;
	
	//asignaci�n de valor a puntero, con esto cambiamos el valor de valor1
	*puntero1 = 42;
	
	cout << valor1 << " and pointer is " << *puntero1 << endl;
	
	
	
	return 0;
}
