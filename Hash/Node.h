#ifndef Node_h
#define Node_h 
#include <iostream>
template <class type>
class Node {

	public: 
	    Node(const type value = type(),Node<type>* link = nullptr) {
	        data = value;
	        nextright = link; 
		}
		virtual ~Node (){
		}


		virtual void setdata(const type info) { 
			data = info;
		}


		virtual type getdata()const { return data;}

		virtual void setrightlink (Node* link ) {nextright = link;}
		virtual Node* getnext(){return nextright;}
		virtual const Node* getnext()const {return nextright;}

		virtual int  size  (Node* headpointer) 
		{
          Node* cursor; 
          int count = 0;

	      for (cursor = headpointer; cursor != nullptr; cursor = cursor->getnext()) {
		  count++;
        	}

        return count;

		}
		
	protected: 	
		type data;
		Node* nextright;
	
};
#endif 
