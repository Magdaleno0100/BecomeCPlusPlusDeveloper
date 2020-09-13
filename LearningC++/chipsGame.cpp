#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = .5;

int main(){

	// Declaración de varibles
	bool player1Turn = true;
	bool gameOver = false;
	int chipsInPile = 0;
	int chipsTaken = 0;
	int maxPerTurn = 0;
	string playerName[2];
	
	
	//Obtener nombre de los jugadores:
	cout << "Write your Name, player 1" << endl; 
	cin >> playerName[0];
		
	cout << "Write your Name, player 2" << endl; 
	cin >> playerName[1];
	

	srand(time(0));

	chipsInPile = (rand() % MAX_CHIPS) + 1;
	cout << "This round will start with " << chipsInPile << " chips in Pile \n"; 
	
	
	while(!gameOver){
	
		do{
			if(player1Turn)
				cout << playerName[0] << "How many chips would you like ? \n";
			else
				cout << playerName[1] << "How many chips would you like ? \n";
				
			cout << "You can only take up to ";
			
			if(static_cast<int>(MAX_TURN * chipsInPile) == 0)
				cout << "1\n";
			else
				cout << static_cast<int>(MAX_TURN * chipsInPile) << endl;
			
			cin >> chipsTaken;
			
		}while(chipsTaken > (static_cast<int>(MAX_TURN * chipsInPile)) && chipsInPile >1);
		
		chipsInPile = chipsInPile - chipsTaken;
		cout << "There are " << chipsInPile << " left in the pile";
		
		if(chipsInPile == 0){
			gameOver = true;
			if(player1Turn){
				cout << playerName[1] << ", congratulations you won\n";
			}else{
				cout << playerName[0] << ", congratulations you won\n";	
			}
		}else{
			player1Turn = !player1Turn;
		}
			
		
	}

	


	return 0;
}
