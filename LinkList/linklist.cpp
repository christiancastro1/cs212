 #include "Node.h"
#include <iostream>
using namespace std;
namespace container 
{
size_t list_length (const Node* headpointer){   // function that tells you how many nodes are in the list

	const Node* cursor;
	size_t count = 0; 
	  for (cursor = headpointer; cursor != nullptr ; cursor = cursor->get_link()) {
			count++;
		}
	return count;
	}
void list_insert (Node*& headpointer, Node::value_type newvalue, int index) {
	 if (index == 0){ head_insert (headpointer,newvalue); return;} 
	 Node* cursor = headpointer; 

	 for (size_t i =1; i < size_t(index); i++) {
		 cursor = cursor->get_link();
	 }
	 cursor->set_link(new Node(newvalue,cursor->get_link() ));
	}

void head_insert (Node*& headpointer ,Node::value_type newvalue){   // needs to be by reference since you need to change where it points to. 
	headpointer = new Node (newvalue , headpointer) ;              // since new returns the adress of the new node, headpointer will not point to that
		                                                          // and it will link to the previous head. 
}
void printlist (Node* headpointer){

	Node* cursor;
	for (cursor = headpointer; cursor != nullptr ; cursor = cursor->get_link()) {
		cout << cursor->get_data() << " ";

	}
	cout<<endl;
}
Node* listsearch (Node* headpointer, const Node::value_type findval){
	Node* target;


	for ( target = headpointer; target !=nullptr; target = target->get_link() ) {
		if (target->get_data() == findval){ return target;}
	}
	return target;

}
const Node* listsearch (const Node* headpointer, const Node::value_type findval){    // when ever a function returns a pointer to a node, there should be 
	const Node* target;                                                              // two overloaded functions, one for const objects


	for ( target = headpointer; target !=nullptr; target = target->get_link() ) {
		if (target->get_data() == findval){ return target;}
	}
	return target;

}








}

