/* THis is the defenition of a node. 
 *
 */
#ifndef Node_h
#define Node_h
#include <cstdlib>
using std:: size_t;

namespace container {
	class Node 
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
