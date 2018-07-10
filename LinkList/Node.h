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

	Node(const value_type &init_data = value_type(),Node *init_link = nullptr){   // default constructor, 3 ways of initialize a node. 
		data = init_data;
		link = init_link;
	}
	void set_data(const value_type &value){ data = value;};        // inline member function to set data
	void set_link(Node *linkpointer)      { link = linkpointer;};  // inline memeber function to set link
	value_type get_data()const {return data;};                           // constant function that returns data of node
	const Node* get_link()const {return link;};                           // constant function that only for nonconstant or constant
	Node* get_link(){return link;};

	private:
		value_type data;
		Node *link;
	};
	 size_t list_length (const Node* headpointer);
	 void list_insert (Node*& headpointer, Node::value_type newvalue, int index);
	 void head_insert (Node*& headpointer ,Node::value_type newvalue);
	 void printlist   (Node* headpointer);
	 Node* listsearch (Node* headpointer, const Node:: value_type findval);
     const Node* listsearch (const Node* headpointer, const Node:: value_type findval);
	 

}

#endif 
