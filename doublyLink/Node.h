/* THis is the defenition of a node. 
 *
 */
#ifndef Node_h
#define Node_h
#include <cstdlib>
using std:: size_t;

namespace container {
	class Node {  
	public:
	typedef int value_type;

	Node(const value_type &init_data = value_type(),Node *init_link = nullptr, Node *back = nullptr){   // default constructor, 3 ways of initialize a node. 
		data = init_data;
		link = init_link;   // link to the next
		prev = back;

	}
	void set_data(const value_type &value){ data = value;};        // inline member function to set data
	void set_link(Node* linkpointer)      { link = linkpointer;};  // inline memeber function to set link
	void setlink_prev(Node* previous)     { prev = previous;};   
	value_type get_data()const {return data;};                           // constant function that returns data of node
	const Node* get_link()const {return link;};                           // constant function that only for nonconstant or constant
	Node* get_link(){return link;};
	const Node* get_prev()const {return prev;}; 
	Node* get_prev(){return prev;}; 

	private:
		value_type data;
		Node* link;
		Node* prev;
	};
	 size_t list_length (const Node* headpointer);
	 void list_insert (Node*& headpointer, Node::value_type newvalue, int index);
	 void head_insert (Node*& headpointer ,Node::value_type newvalue);
	 void tail_insert (Node* tail, Node::value_type newvalue);
	 void printlistforward(Node* headpointer);
	 void printlistback (Node* tail);
	 Node* listsearch (Node* headpointer, const Node:: value_type findval);
     const Node* listsearch (const Node* headpointer, const Node:: value_type findval);
	 Node* listsearch_at    (Node* headpointer, size_t index);      //returns a pointer to a node at this index location. 
	 const Node* listsearch_at    (const Node* headpointer, size_t index);
	 void  listsort      (Node*& headpointer,size_t length); 
	 void switch_val   ( Node* i ,Node* j);

}

#endif 
