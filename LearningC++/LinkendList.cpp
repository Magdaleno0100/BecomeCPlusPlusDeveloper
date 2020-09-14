#include <iostream>

using namespace std;

//Definir nodo

struct Node{
	int data;
	Node *link;
};

//Forma de declarar la estructura head
typedef Node* nodePtr;

int main(){
	
	nodePtr head;
	head = new Node;
	
	head->data = 20;
	head->link = NULL;

	
	
	return 0;
}
