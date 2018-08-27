#ifndef HashBucket_h
#define HashBucket_h

/*     void insert (value,)
 */
#include "Node.h"
#include "LinkNode.h"
#include "BTNode.h"
#include "cstdlib"
template<class type>
class HashBucket{
	public: 
	    const static int DEFAULT_SIZE = 10;
     	HashBucket (int sizetable = DEFAULT_SIZE  ){
			hashtable = new Node<type>*[sizetable];
			size      = sizetable+1;

			for (size_t i = 0; i < size_t(size-1);i++) {
				hashtable[i] = nullptr;   // every bucket is nullptr until its filled.
			}
		}
		~HashBucket (){
		}

		void inserttable (type value);// insets an item 
		Node<type>* rehash (); // makes the size of the array bigger. And passes eveything from old to new 
		int  hash   (type value);// returns the index of where the value will go 
		bool isEmpty(Node<type>* head); // returns true if empty else false
		bool remove (type value); // if item is in the table it will be removed and return true, else false. 
		type retrieve (type value);
		void clear ();
		int tablesize()const {return size;}
		void switchtoBT(int index); 
		friend void switchtoLL (int index);
	    void printall();
	
	private:
		Node<type>** hashtable;
		size_t count;
		int size;
		
};
template <class type >
void HashBucket<type>:: inserttable (type value){     //insets an item 
	int index = hash(value);

	if(hashtable[index] == nullptr){
		Node<type> * base = new LinkNode<type>(value);
//		LinkNode<type> *headpointer = dynamic_cast<LinkNode<type>*>(base); // important
		hashtable[index] = base;   // will use headpointer instead of base from now on 
		count++; // only when its inputed in a different bucket. 
		return;
	}
	LinkNode<type> *headpointer = dynamic_cast<LinkNode<type>*>(hashtable[index]);
	if((hashtable[index])!= nullptr && headpointer->size(headpointer) ==12 ){
	switchtoBT(index); 
	}
	if(headpointer->size(headpointer) < 12) {
		insert(headpointer, value);
	}
	else {
		BTNode<type>* root = dynamic_cast<BTNode<type>*>(hashtable[index]);
		insert(root,value);
	}


	
}
template <class type>
void HashBucket<type>:: printall (){

	
	for (int i = 0; i < size-1; i++) {
		if(hashtable[i] == nullptr){
				}
		else{
	
		LinkNode<type> *headpointer = dynamic_cast<LinkNode<type>*>(hashtable[i]);
	    printlist(headpointer);
		}

		}


}
template <class type>
void HashBucket<type>:: switchtoBT(int index){

	LinkNode<type> *cursor =  dynamic_cast<LinkNode<type>*>(hashtable[index]);


	Node<type> * base = new BTNode<type>();
	BTNode<type> *headpointer = dynamic_cast<BTNode<type>*>(base);
	
	for (; cursor != nullptr ; cursor =cursor->getnext()) {
		insert(headpointer, cursor->getdata());
	}
	
	clearlist(dynamic_cast<LinkNode<type>*>(hashtable[index]));
	hashtable[index] = base;
	


}
template <class type>
void switchtoLL(int index){

	Node<type> * base = new BTNode<type>();
	LinkNode<type> *headpointer = dynamic_cast<LinkNode<type>*>(base);
	inserttoLL(HashBucket<type>::hashtable[index], headpointer);
	cleartree(HashBucket<type>::hashtable[index]);
	HashBucket<type>::hashtable[index] = headpointer;

}
template<class type>
void inserttoLL(BTNode<type>* root,LinkNode<type>* headpointer){
	if(root == nullptr)return; 
	else{
		insertoLL(root->getleft());
		insert(headpointer,root->getdata());
		insertoLL(root->getnext());
	}

}
template <class type >
Node<type>* HashBucket<type>::rehash (){ // makes the size of the array bigger. And passes eveything from old to new 


}
template <class type >
int HashBucket<type>:: hash  (type value){// returns the index of where the value will go 
    int hashindex = 0; 
	hashindex = value % HashBucket<type>::size-1;
	return hashindex;
   
}
template <class type >
bool HashBucket<type>::isEmpty(Node<type>* head){ // returns true if empty else false

   return true;
}
template <class type >
bool HashBucket<type>:: remove (type value){ // if item is in the table it will be removed and return true, else false. 
	bool con = true;
	if (count != 0) con = false;
	return con;
  
}
template <class type >
type HashBucket<type>::retrieve (type value){
	int i = hash(value);
	hashtable[i];
	type temp =  0;
	return temp; // not complete 
}
template <class type >
void HashBucket<type>::clear (){
}
#endif
