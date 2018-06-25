/*  GOAL: This class is a data structure called a bag, it will hold infomation 
 *  based on what the user inputs. A key attached to an  actual value. Every time 
 *  a user inputs a key it will automatically be sorted. The delete function will 
 *  shift elments if needed.
 *
 *
 *  bag:
 *       public : 
 *       
 *       functions:
 *       1. construtor :   bag()   // when a bag object is created it will be empty.
 *       2. void erase : precondition: bag is not empty   // post: key and element will be deleted . Shift elements if necessary
 *       3. void insert : precondition: size() < capacity. // post: will insert key and value
 *       3. shift       : shift elements from the array: precondition: array thats passed is not empty , post: elements are shifted.
 *       4. view        : precondition: array of elements is not empty. // post : prints the imformation of the key value
 *       5. CONST : int size()   post: returns the number of elements 
 *       6. bool isempty : post : retuns true if its empty else false
 *       5. +=  overloaded: // precondition : sum of bag size < max     post: sum of both 
 *       6 . NON MEMBER : + overloaded  precondition : size of both bags < max   post: return sum; 
 *
 *
 *        private:
 
 *        variables  : array of keys:     // keeps track of the key 
 *                   : array of values :  // keeps track of the values   
 *                   : count             // keeps track of how many elemnts 
 *                   : capcity          // the max number of elements allowed in the bag 
 *
 */



#ifndef bag_h
#define  bag_h
#include <cstdlib>
using std::size_t;

namespace container {

class Bag {
	public:
		Bag ();   // constructor 
		void erase(int key);  // receive key and erase the key along with element 
		void insert(const int key, const int value); // insert the key and value in a sorted way. 
		int  findposition(int *array,const int number); // returns the postion of the where the key will go. 
		void shiftup( int *array, const int index);
		void view(int key); // will print the information 
		size_t  size() const {return count; };
		bool isempty();
		void print ();
		Bag operator +=(const Bag &bag2);

	private: 
		static const int MAXIMUM = 30;
    	int value[MAXIMUM];   // keeps track of values 
		int keyarray[MAXIMUM] ;    // keeps track of key to values 
		size_t count;            // number of elements in the bag

};

}
#endif
