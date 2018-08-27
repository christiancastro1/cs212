 #include "Node.h"
#include <iostream>
#include <cassert>
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
	 size_t size = list_length(headpointer)-1;
	 if (index == 0){ head_insert (headpointer,newvalue); return;} 

	 else if(size_t(index) == size){
		 size_t index = list_length(headpointer)-1;
		 Node* tail = listsearch_at (headpointer,index);
		 tail_insert (tail,newvalue);
	 }
	 else {

	 Node* cursor = headpointer;
	 for (size_t i = 0; i < size_t(index-1) ; i++) {
		 cursor = cursor->get_link();
	 }
	 cursor->set_link(new Node(newvalue, cursor->get_link(),cursor));    // cursor is going to be the previous.
	 }

	}
void head_insert (Node*& headpointer ,Node::value_type newvalue){   // needs to be by reference since you need to change where it points to. 
	Node* temp = headpointer;
	headpointer = new Node (newvalue , headpointer) ;              // since new returns the adress of the new node, headpointer will not point to that
    headpointer->set_link(temp);
	temp->setlink_prev(headpointer);

}
void tail_insert (Node* tail, Node::value_type newvalue){
	tail->set_link(new Node(newvalue,nullptr,tail));
	tail = tail->get_link();
}
void printlistforward (Node* headpointer){
	Node* cursor;
	for (cursor = headpointer; cursor != nullptr ; cursor = cursor->get_link()) {
		//cout <<" Data :"<< cursor->get_data() << " Previous "<< cursor->get_prev()<< " Forward: " << cursor->get_link() << endl;
       cout << cursor->get_data() << " "; 
	}
}
void printlistback(Node* back){
	Node* tail;

	for (tail = back; tail != nullptr; tail = tail->get_prev() ){
		cout << tail->get_data() << " ";
	}

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
Node* listsearch_at(Node* headpointer, size_t index){    // this function just send a pointer to a node thats in a specific index. 
	Node* cursor = headpointer;
	assert(index <= list_length(headpointer)-1);   // index must be valid 

	for (size_t i = 0; i < index ; i++) {
		cursor = cursor->get_link();
	}
	return cursor;
}
const Node* listsearch_at (const Node* headpointer, size_t index){

    const Node* cursor = headpointer;
	assert(index < list_length(headpointer)-1);   // index must be valid 

	for (size_t i = 0; i < index ; i++) {
		cursor = cursor->get_link();
	}

	return cursor;
}
void listsort (Node*& heapoiner, size_t length ){
	Node* i;
	Node* j; 


	for (size_t temp= length-1; temp != 0 ; temp--) {
		i = heapoiner;

		for(j = i->get_link(); j !=nullptr; j = j->get_link()){

			if (i->get_data() <= j->get_data()){
				i = i->get_link();
			}
			else {
				switch_val(i,j);
				i = i->get_link();
			}
		}
	}
}

void switch_val( Node* i, Node* j ){
	Node::value_type temp = i->get_data();
	i->set_data(j->get_data());
	j->set_data(temp);


}

}

