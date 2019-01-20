#ifndef BTNode_H
#define BTNode_H
#include "Node.h"
#include<iostream>

template <class type>
class BTNode : public Node<type> {

	public:

	BTNode(const type value = type(),BTNode<type>* leftlink = nullptr, BTNode<type>* link = nullptr):Node<type>(value,link) {
	data = value;
	left = leftlink; 
	nextright= link;
}

    void setdata(const type info){data = info;}
	type getdata()const {return data;}
    void setrightlink(BTNode* link){nextright = link;}   // right 
	BTNode* getnext(){return nextright;}                  // right 
	const BTNode* getnext ()const{return nextright;}      //right

	void setleftlink(BTNode* llink){left = llink;}
	BTNode* getleft(){return left;}
	const BTNode* getleft ()const { return left;}

	int  size (BTNode<type>* root){
		
		if(root == nullptr)return 0; 
		else {
	
         return	size(root->getleft()) + 1 + size(root->getnext());	
	}
}
	
	private:
		type data;
		BTNode* left;
		BTNode* nextright;


};
#include<vector>
template <class type>
void insert(BTNode<type>* root,const type data){

	if (root == nullptr) {
		root = new BTNode<type>(data);
	}
	else if (data < root->getdata() && root->getleft() == nullptr ){
		root->setleftlink(new BTNode <type>(data));
	}
	else if (data > root->getdata() &&root->getnext() == nullptr){
		root->setrightlink(new BTNode<type>(data));
	}
	
	else if (data < root->getdata()){
		insert(root->getleft(),data);
	}
	
	else {
		insert(root->getnext(),data);
	}

}
template<class type>
void printpreorder(BTNode<type>* root){ // preorder
	if (root == nullptr)return; 
	std::cout <<root->getdata() << " ";
	printpreorder(root->getleft());
	printpreorder (root->getnext());
}
template <class type>
void printinorder (BTNode<type>* root,std::vector<int>&array) {
	if(root == nullptr)return;
	printinorder (root->getleft(),array);
	array.push_back(root->getdata());
	printinorder (root->getnext(),array);

}
template <class type>
void printpostorder(BTNode<type>* root){
	if (root == nullptr)return;
	printpostorder (root->getleft());
	printpostorder (root->getnext());
	std:: cout << root->getdata()<< " ";
}
template <class type>
void cleartree (BTNode<type>* root){
	if(root == nullptr){
		return; 
	}
	cleartree(root->getleft());
	cleartree(root->getnext());
	delete root;
}
template <class type>
void printleaves (BTNode<type>* root){
	if (root == nullptr)return;

	if(root->getleft() == nullptr && root->getnext()== nullptr){
		std::cout<< root->getdata() << " " ;
	}
	if(root->getleft() != nullptr){
		printleaves(root->getleft());
	}
	if(root->getnext() != nullptr){
		printleaves(root->getnext());
	}


}











#endif 
