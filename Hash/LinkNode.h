#ifndef LinkNode_h
#define LinkNode_h
#include "Node.h"
#include <iostream>
#include <typeinfo>
template <class type>
class LinkNode:public Node<type> { 

	public:

    LinkNode(const type value = type(),LinkNode<type>* link = nullptr):Node<type>( value,link) {
	data = value;
	nextright = link; 
}
    void setdata(const type info){data = info;}
	type getdata()const {return data;}
    void setrightlink(LinkNode* link){nextright = link;}
	LinkNode* getnext(){return nextright;}
	const LinkNode* getnext ()const{return nextright;}

	int  size (LinkNode* headpointer){

	LinkNode* cursor; 
	int count = 0;
	for (cursor = headpointer; cursor != nullptr; cursor = cursor->getnext()) {
		count++;
	}
	return count; 
}

	private:
	type data;
	LinkNode* nextright;
}; 
template<class type>
void printlist (LinkNode<type>* headpointer){
	LinkNode<type>* cursor =nullptr;
	//listsort(headpointer,cursor->size(headpointer));

	for (cursor = headpointer; cursor != nullptr; cursor = cursor->getnext()) {
		std::cout <<cursor->getdata () << " ";
       
	}
}
template<class type>
void insert (LinkNode<type>*& headpointer,type data){

	LinkNode<type>* temp = headpointer;
	headpointer = new LinkNode<type>(data,temp);
}
template <class type>
void listsort (LinkNode<type>*& heapoiner, int length ){
	LinkNode<type>* i;
	LinkNode<type>* j; 


	for (int temp= length-1; temp != 0 ; temp--) {
		i = heapoiner;

		for(j = i->getnext(); j !=nullptr; j = j->getnext()){

			if (i->getdata() <= j->getdata()){
				i = i->getnext();
			}
			else {
				switch_val(i,j);
				i = i->getnext();
			}
		}
	}
}
template <class type>
void switch_val( LinkNode<type>* i, LinkNode<type>* j ){
	type temp = i->getdata();
	i->setdata(j->getdata());
	j->setdata(temp);
}

template <class type>
void remove(LinkNode<type>*& headpointer, const type unwanted){
	LinkNode<type>* cursor = headpointer;
	if(headpointer->getdata() == unwanted){
		LinkNode<type>* temp = headpointer;
		headpointer = headpointer->getnext();
		delete temp;
	}
	else {

	while ( cursor->getnext()->getdata() != unwanted && cursor->getnext() != nullptr){
		cursor = cursor->getnext();
	}
	LinkNode<type>* temp = cursor->getnext();
	cursor->setrightlink(temp->getnext());
	delete temp;

	}
}
template <class type>
void clearlist (LinkNode<type>* head){
	if (head == nullptr)return;
	else {
		clearlist(head->getnext());
			delete head;
	}
}
#endif 
