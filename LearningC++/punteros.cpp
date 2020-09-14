#include <iostream>

using namespace std;

int main(){
	
	int valor1 = 0;
	//Declaración de puntero
	int *puntero1;
	
	//Asignación de puntero
	puntero1 = &valor1;
	
	//asignación de valor a puntero, con esto cambiamos el valor de valor1
	*puntero1 = 42;
	
	cout << valor1 << " and pointer is " << *puntero1 << endl;
	
	
	
	return 0;
}
