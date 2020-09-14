#include <iostream>

using namespace std;


//Definiendo una estructura:
struct students{
	string name;
	float GPA;
};

//Definiendo una clase

class BanckAccount{
	private:
	 float balance;
	
	public:
		BanckAccount();
		void Deposit(float);
		void WithDrawl();
		float getBalance();
};

//Contructor de clase
BanckAccount::BanckAccount(){
	balance = 0;	
	cout << "Cuenta creada" << endl;
}

//get Balance method
float BanckAccount::getBalance(){
	return balance;
}

int main(){
	
	students Estudiante1;
	
	Estudiante1.name = "Magda";
	Estudiante1.GPA = 8.0;
	
	BanckAccount cuenta;
	cout << "Balance: " << cuenta.getBalance() << endl; 
	
	return 0;
}//end main
