#include <iostream>
#include <fstream>

using namespace std;

//prototype function's
void LeerArchivo(string);
void EscribirEnArchivo(string);


int main(){
	
	/*
	Para leer un archivo : ifstream
	Para escribir en un archivo. ofstream
	*/
	
	string nombreArchivo = "archivoA.txt";	
	LeerArchivo(nombreArchivo);	
	EscribirEnArchivo(nombreArchivo);
	LeerArchivo(nombreArchivo);	
	
	//Agregar texto al archivo sin sobre escribirlo
	
	
}//end main

void LeerArchivo(string nombreArchivo){
	ifstream archivo;
	archivo.open(nombreArchivo.c_str());
	
	string texto;
	
	if(!archivo.fail()){
		while(archivo >> texto){
			cout << "Ejemplo de texto: " << texto << endl;
		}
	}
	
	archivo.close();
}

void EscribirEnArchivo(string nombreArchivo){
	ofstream archivo;
	archivo.open(nombreArchivo.c_str());
	if(!archivo.fail()){
		string mensaje = "Ejemplo de entrada de datos";
		archivo << mensaje << endl;	
	}
	archivo.close();

}
