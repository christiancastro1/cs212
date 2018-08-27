#include <iostream>
using namespace std;
#include "Node.h"
using namespace container;

int main(int argc, char *argv[])

{
	
	Node* headpointer = new Node(30);
	head_insert(headpointer,4);
	head_insert(headpointer,8);
	head_insert(headpointer,2);
	head_insert(headpointer,60);	


	size_t length = list_length(headpointer);
    listsort (headpointer, length);

	
      printlistforward(headpointer);	
	  cout << endl;

     Node* temp = listsearch_at (headpointer,4);
     printlistback(temp);


	return 0;
	}
