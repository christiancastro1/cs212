#include <iostream>
using namespace std;
#include "Node.h"
using namespace container;

int main(int argc, char *argv[])

{
	Node* headpointer = new Node(5);
	head_insert(headpointer,4);
	head_insert(headpointer,3);
	head_insert(headpointer,2);
	head_insert(headpointer,1);	
	
		
	list_insert(headpointer,100,1);

	Node* find = listsearch (headpointer,30);
	
	if (find == nullptr) cout << "NOT FOUND";
	else cout <<  "the number was found !!" << find->get_data();


	return 0;

