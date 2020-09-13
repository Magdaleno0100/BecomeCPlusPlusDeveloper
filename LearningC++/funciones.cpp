
#include <iostream>
using namespace std;

//prototype function's
void PrintHBD();
void PrintHBD(string, int&);


int main(){
	int valorPorReferencia = 10;
	cout << valorPorReferencia << endl;
	PrintHBD();
	PrintHBD("Magdaleno", valorPorReferencia);
	
	
	cout << valorPorReferencia << endl;
	return 0;
}

void PrintHBD(){
	cout << "Happy Birthday to you\n";
}

void PrintHBD(string name, int& valor){
	valor++;
	cout << "Happy Birthday to you "<<name<<endl;
}




