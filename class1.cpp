
int main (){

	
	return 0;
}
/*NOTE FIRST CLASS 
 *  * What is a variable ?
 *  2. How many primative types?
 *  3. WHat is a statement ?
 *  4. What is an expression ?
 *  5. What is a selection statemtent ?
 *  6. WHat is a switch block ?
 *
 *  In this class 50 to 60 % it will be about coding the rest will include data structure.
 *  Practice will be based on assignments - take notes,ask questions 
 *  We will be using piazza to ask questions, emial and office hours. 
 *  In blackboard theres self practice assignments - no points just for practice 
 *  For assignments theres a bar to reach to obtain point for it, if the bar is not reached then 
 *  you will not receive credit.
 *
 *  TIME AND EFFORT - I NEEED AN A 
 *  Before all classes review class notes. 
 *  Office hours 8-208 after class. 
  
*/
/*NOTE SECOND CLASS
 * A.Topics
 * Data structure - specification,design, implementation and use of basic data types
 *    1. arrays
 *    2. list 
 *    3. queues
 *    4.tress ... 
 * OOP AND C++ - clases, container, classes ,big tree
 * Standard templete libary - templetes, iterators
 *
 * Data Structure- is the organization of data in memory. Put boundaries on memory to 
 * seperate part of memory to have faster acesss of memory.
 * Store data in a specific place and later retrieve that data.
 * Goal : Have fast access to the data and store as less as possible.
 * In this cource we assume that there is a computer with unlimited random access storage and 
 * processing power. 
 *     - random acess means having acess to to any location of the storage at any time.
 * Using this model we compare the performnace of different data structures 
 *     -during this course we assume our computing model has a single computational node
 * Data structures are not compared in different computers, we do it scientfically. 
 * You can't compare data structures with time
 *     - we do it with the number of steps of the data structure. 
 *     - size of input is very important
 *     -e.g if you have n  elements unsorted the its average : n/2
 *     - if the list is already sorted - average: is log (n )
 *
 * B. What is data structure ?
 *
 *  -data structure is the organization and access methods the enables efficient access and modification of data
 *  -organization of data is how physical data is stored.( It is not related to the hardware storage)
 *  (A Data structures might be designed for a specific type of hardware storage though)
 *  -acess method means how the stored data will be accessed (inset, read , update, delete,..) 
 *  the running time of these access methods is very important. 
 *
 *  e.g of data structure : arrays, linked list, tress.
 * 
 * Real world examples:
 *
 * 1. a building can be seen as a structure, it has multiple floors and each floor may have multiple units, each 
 * unit also may have multiple rooms.
 *
 * 2.To have access to a specific unit you have to know the floor number of the unit. Then have access to the floor
 * using an elevator and have access ot the unit by knowing the number of the unit.
 *
 * 3. data structures is similar, e.g if you know that you have stored a specific number in the 10th location of a linked
 * list then you need to have access to that location using a specific algorithm that runs on each link until it reaches  
 * the specific location. 
 *
 * C. What is algorithm?
 *
 * data structure can't be define without an algorithm.
 * 1. its a step by step procedure with a specific goal
 * 2. the input of the an algorithm is called the input instance and is an input of the correct algorithm halts on 
 * the correct output.
 * 3. During this course I dont talk about parallel algorithms so the default assumption is our algorithms 
 * run on a single processor. 
 * 4. A randomized algorithm is a special type of algorithm that has random steps this either the running time, or the output 
 *  are random.
 *
 *  https://www.cs.cmu.edu/~adamchik/15-121/lectures/Sorting%20Algorithms/s:orting.html    // some sorting algorithms. 
 *  
 * D . What do you need to know before designing a data structure? 
 *  - what is the max number of elements 
 *  - what is the max size of the data
 *  - what is the infastructure that the data structure is going to be used on (e.g #of processors,type,speed,memory size,..)
 *  - how often the data structure is going to be accessed and what is the type of access
 *  - is there any power constraints.
 */
/*NOTE THIRD CLASS
 * Statement - its an instructions that can be executed and ends with a semicolon ;
 * Expression - is a combination of values, variables, operators, and calls to functions. 
 * Expressions need to be evaluated to give a result.
 *
 * TO email him only use his google email which its his name @gmail.com 
 * A: LastName_FirstName_assignmnet#.zip
 *
 * DEF: Precondition - is a stament giving the condition that is required to be true when a function is called.
 * The function is not guaranteed to perform as it should unless the precondition is true.
 *
 * DEF: Postcondition - is a statemnt describing what will be true when a function call is complete. If the function
 * is correct and the precondition was true when the function was called,then the function will complete, and the 
 * postcondition will be true when the function call is complete. 
 *
 * This is a way to describe the functionality of a function. Should be the first thing to do when writing a function
 *   - the programmer who calls a function ensures that the precondition is valid.
 *
 * DEF : Specitificaton - is the precise description of the problem
 *     : Design         - formualating a step by step solution to the problem (algorithm)
 *     : Implementation - its the actual C++ code that carries out the design.
 * DEF : Pseudocode     - combination of english and c++ to make it more clear of what we're trying to accomplish.
 *
 * DEF : Procedural Abstraction - when we just care what a function does rather than how it does it. 
 *
 *  A. Running time analysis -BIG O (depends on input size)
 *
 *   - number of steps related to the input size
 *   Linear Time - O(n)
 *   Quadratic time - O(n^2)
 *   Logarithmic time - O(log n)
 *
 *   O() are infinite sets of functions
 *
 *   e.g Suppose we have 2 same computers and we will run an algorithm. One works works at 3n and the other n.
 *   Related to time the n finishes faster. 
 *
*   Assymtoic Running time class ??  gives you information when n goes to infinity, 
 *
 * TODO Write fibonacci using recursive 
 *
 *
 */
/*NOTE Fourth Class  
 *    - JUNE 7TH 201 --------------- --------------- ---------------8
 *      For input size of n,
 *    1. Average case : all possible cases the the algorithm runs on\#of cases
 *    2. Worst   case : the time of the worst possible case
 *    3. Best    case : the time of the best possible case
 *
 *    e.g Say we have a list of unsorted numberts from a1 to an
 *               {a1, a2, a3, a4 .... an}
 *    and we want to seach x containted in the list.
 *
 *    Best : O(1) this scenario is the best becasue if you search for x and a1 happens to be 
 *    x then it took 1 step to find it.
 *
 *    Worst : O(n) this is the worst scenario because if x is not in the beginning you might have 
 *    to search the entire list until you find it.
 *
 *    Average: its the summation of all posibble cases divided by all possible cases.
 *        - 1 + 2 + 3 + ... n / n 
 *          (n(n+1)/2)/n  = n+1/2  // the constants can be dropped leaving us with O(n)
 *       
 *IDEA Since this was a linear seach we work on the assumption that the probability to find x in index i 
 *     is the same as finding y in index j.
 *
 *   A . Compiler - its a sofware application that converts Object oriented programming into machine language. (executable)
 *
 *   B . Debugger - its also a sofware application that can act as an assembler, disassembler allowing users to interactively 
 *   examine memory content (in assembly,hexadecimal,ASCII),make changes and execute.During run time it can check the state of 
 *   variables.
 *
 *                       Classes 
 --------------------------------------------------------------------------------
    -with classes we will make our own data types
	-we will create libraries of adt
	-container classes - collection of same object types

  IDEA Memory is an array of byte.Each byte has an adress.
       - adresss is not written in memory, its a way for the processor to access the memory.

	   e.g  Each one of these block is a byte(8 bits)
	   int x = 5;
	   Depending on what processor we're using it will store it using Big Endian or Little Endian.
	   In this example we will use Little Endian so we bill take the least significant bit to store first.
	   Since an interger is 32 bits it will use 4bytes, so 4 blocks. 5 = 0101 in binary
	   ---------------
           00000101     //F56C
	   ---------------
	      00000000      //F56D
	   ---------------
	      00000000      //F56E
	   --------------- 
	      00000000      //F56F
	   ---------------
	e.g F56D can be easily turned into binary
	    F - 1111
		5 - 0101
		6 - 0110
		D - 1101
*/
/* NOTE CLASSES

  1. Mechanisim to create objects and member functions 
  2. Support information hiding 

  e.g A class to store and manipulate a single point on a plane.
        - initialize
		- retrievel
		- shift
  It will contain to components that will be private and can only be acessed by member functions.

    class point {  // this is the class defenition or interface.The header will end with .h so point.h

	public:
	// this will be the section where the prototype of the functions will be defined
	void setPosition(double x, double y);
	void shift      (double dx, double dy);
	double  x       ()const {return m_x}; // the const means that these functions won't change the infomation
	double y        ()const {return m_y};
	
	private:   // only member functions can access this infomation.
	int m_x;
	int m_y;
	}
   
	The implementation of this class will be saved in another file called point.cpp
           - function implementation void point::setPostion(x,y)
		     basically saying that this function is in the scope of point
		   - in the body of the function member variables and functions can all be accessed
------------------------------------------------------------
        		   CONSTRUCTOR
------------------------------------------------------------
  -constructor name is the same as the class, does not contain a return type.
  -they are implemented justr like any other member function.
  -is a special type of subroutine called to create an object. It prepares the new object for use, 
  often accepting arguments that the constructor uses to set required member variables.
  -stablishes the invariant of the class.

DEF: The invariant expression describes a condition that should always be true in an object life.

  1. Data emcapsulation enforces invariants
  2. Prevents unrestricted access

  If we dont make our own contructor an automatic constructor weill be created.
  - we can create as many constructors as we want, the parameter numbers must be different to tell them apart.

                  Copy Constructor
------------------------------------------------------------
- a copy constructor is a constructor with exactly one parameter
- to copy the data of an object to another
    e.g 
	point p1(-1,8);
	point p2(p1);   or point p2 = p1;

                   Header Gaurd
--------------------------------------------------------------
1.Header guards are little pieces of code that protect the contents of a header file from being included more than once.

2.Header guards are implemented through the use of preprocessor directives. The C/C++ preprocessor directives all start 
with the # character. 
     - they are invoked by the compiler before compilation.

e.g Problem:
                           #include "A.h"          #include "A.h"
class A                    class B                 #include "B.h"
{                          {
  int x;                      A a;
public:                       int y;               A a;
};                         public:                 B b;
                           };


A.h                         B.h                      htest.cpp

Running g++ htest.cpp results in the following error:

In file included from B.h:1,
                 from htest.cc:2:
A.h:2: error: redefinition of `class A'
A.h:2: error: previous definition of `class A'

SOLUTION: One solution is to simply delete the #include "A.h" in htest.cpp

                    or 
To create header guards place:
#ifndef unique_symbol
#define unique_symbol
at the beginning of the header file to be protected and #endif  (unique_symbol) at the end of the header file.

IDEA The first time one of the unique symbols in a header guard is encountered, the #ifndef statement is true.
The symbol is not defined. Because of that, all of the code between the #ifndef and #endif is included and sent 
to the compiler. If the symbol were defined, the code between the directives would be ignored. 

*/
/*NOTE VALUE SEMANTIC 
 
    Value Semantics of a class determines how values are copied from one object to another.
	In C++ theres two ways of doing this: Basically all the member variables from one object
	are copied into another instancel 

	    1. Assignment operator
        Using = we can copy the values of the member variables from the right into the object on the left.
		e.g Point p1 (3,5);
		    Point p2 =p1.     // p2 will have the same values as p1.

		2. Copy Contructor
		C++ comes with a built in copy constructor that we can simmply use, it only works when instantiating an object.
		e.g Point p1(3,5);                                          
		    Point p2(p1); // this will work just fine or Point p2 = p1;

		Lets say we instantiated an object without giving it a value.
		e.g Point p1(3,5);
		    Point p2;
			p2(p1);      // this will not work  
			
 
 */
/*NOTE POINTERS AND DYNAMIC MEMORY. 
    
    In the book they use NULL but, we should't use this. Use nullprt instead.
	When you create a constructor the access to the default constructor is removed.
	    - constructor is public since any instance can access it.
    For assignment dont have a sort fucntion, the add should sort things and remove. 
	Binary search and use arrays 
	
    Static array the size of the array must be constant. Value sematics is safe.
	
	Want to specify the size of the bag during run time??

	Pointers 
------------------------------  
   & reference operator  // returns the address of the variable e
   * pointer operator 
   
   Pointer is adress, when we dereference it using * it provides direct access to the 
   content of the variable. Youre basiclaly able to change the content of it. 

   Dynamic Variables
------------------------------
  int *p1;
  p1 = new int; // p1 holds the address of the interger object. These variables dont have a name. 
  *p1 = 20;

  New operator does two thing declares a variable in dynamic memory and returns the address of it. 
  It basically creates an object int.

  Declaring an array at once ?
------------------------------
  int *p1;
  p1 = new int[4];  // creates an array of integers
  p1 [2] = 20;

  A. If you want to create an array of objects, the class needs a default constructor.
  e.g If we want to create an array of student objects:  Student *ptr =  new Student[5] // not recommended
  Student must have a default constructor. 

  B. Array of pointers 
  e.g Student **ptr = new Student *[5];    // pointer to pointer  this is more reliable 

  ptr[0] = new Student ("Sam", "s" , "2324");

  Pointer Arithmitic
------------------------------  
int *p1;                      Lets say the adress is 900 p1 = 900;
p1 = new int [4];
p1[2] = 20;
cout << *(p1 + 2);           p1 +2 = 908  not 902. Because its 2*size of type. In this care its 2*4

TIP: p++ automatically goes to the next object. 

point *p1;
p1 = new point (1.0,2.0);
cout << (*p1).x();
cout << p1->x();   // this is the same as above. 

When passing a pointer to a function its passed by value. Theres no such things as passed by pointer. 
       DELTE OPERATOR
------------------------------
  Relase any dynamic meory that is no longer needed. The object is removed.
e.g 
  delte i_ptr
  delete [] d_ptr 

  A. Pointers as Constant : int * const j_ptr = i_ptr; l


 */
/* NOTE Dynamic Classes

   The limitation of a static bag is that the size is fixed for every object. 

   GOAL: Create a bag that has no limitation on size, now differen instances will have different size.
   Solution: provide control over size in running time, by:
   1. pointers and dynamic memory 
   2. dynamic arrays    // size can be specified at runtime. Fixed length once you alocate it. 
   3. dynamic classes

   Dynamic memory allocation happens in the constructor. The value semantics are not safe for dynamic bag.

   Default size :e.g 
   
   public: 
       static const size_t DEFAULT_CAPACITY = 20;
	   bag (size_type ini_cap = DEFAULT_CAPACITY);  // constructor in the class interface 

	   Implementation of constructor:
	   bag :: bag(size_type init_cap)   // dont give this a value here it will give an error. 

	   IMPORTANT : PASS BY VALUE USES COPY CONSTRUCTOR    .For dynamic bag the value semantic is not safe

	   TIP: Assignmeent operator should be member function.

	   MIGHT ME ON TEST : QUESTION WHen creating a copy constructor why is it not safe passing by value:
	   Answer : THis is not safe because youre trying to define a copy construtor for this class, it is not yet
	   defined. Passing by value is completed using a copy constructor but thats the contradiction it is not 
	   yet defined. 
	   
	   DESTRUCTOR 
------------------------------
  GOAL :return an object dynamci memory to the heap when the object is no longer in use.

  A. The primary purpose is to return an objects dynamci memory to the heap
     1. No parameter and no return type

     e.g bag ::~bag()
	 {
	    delete [] data;
	 }
 */
/*NOTE LINK LIST
1. Each node in the linked list is a class as shown here.
e.g  class node {
     public:                        // what is a node? A note is basically an object that contains a date field and a link and a link
	                                  to the next node.
	 tydef int value_type;

	 private:
     value_type data;
	 node *link;         // its a pointer to another node type

1. WHen the list is empty the *link pointer will point to nothing basically: NULL , nullptr.
2. A program can keep tack of the first node by using a pointer variable such as head_prt.
NOTE: The head_prt itself is not a node -- its a pointer to a node. 

3. If you make a link list in the stack you can't motify it in  another function. For this reason 
we will store the in the heap. 

4. All the nodes will be in the heap, we will have a pointer that points to the first node.
    -first node shouldn't be on the stack because we wouldnt be able to add a node to the beginning.

5. In memory they aren't connected sequentially, they just point to the adress of the next node. 

ADVANTAGES: -The size of the list can grow as needed, by allocating and dealocating during run time. 
            -no memory waste. 

DISADVANTAGE -to see a certain element it takes O(N),since it has to iterate thought the entire list.�

B. The node class is fundamental to linked lists
    a. The private member variables 



	HEAD POINTERS 
------------------------------
the most common way to access a linked list is through the first element. AKA HEAD OF THE LIST
- a pointer that points to the head is known as the head pointer. e.g node *headprt;

  We can access the information that of the node that this pointer points to. e.g (*headprt).get_data()   or headprt->get_data()
  The parenthesis are necessary for this because the function get_data has a higher precedence thatn the dereference operator. 

  Alternative way: MEMBER SELECTION OPERATOR(->)    e.g headprt->get_data();

     TAIL POINTER
------------------------------
We also can have access to the last element by having a pointer that points to the tail. AKA TAIL POINTER

------------------------------
   -When a node doesnt point at anything we cant use the variable NULL OR nulptr to make the explicit. 

   2 types of situations: 
         1. the final node points to nothing.
		 2. the list is empty, theres nothing to point.

      CONSTRUCTOR 
------------------------------
the default constructor for the node is e.g 

node ( const value_type &init_data = value_type()    // typedef int value_type;     using  the built in typye constructor, same as int () 
       cont  node *init_link = NULL ); 

The constructors implementation merely copies init_datav to data and init_link to link,


      CONST NODE OBJECTS 
------------------------------
-if we create a const node * pointer then we can't access non constant functions.
-We are restricted from using non constant function to enoforce encapsulation, because the node is constant.

   IDEA: If we want to have a constant node that doesnt change, then we need a constant link function, Because if we had 
   a regular pointer, then it can easily access the nonmemeber functions and change the information. 

- this pointer will ony be able to access constant functions. 
- nonconstant objects can access constant and nonconstant functions but, constant objects can  only can access constant functions. 
- a constant function should never provide information that can be later used to alter the link list.

When to provide both const and noncont versoin of a memeber function ?
   -when the return value of a memeber function is a pointer to a node, you should generally 
   have two versions. a const version that returns a const node*, and an ordinary version that returns and ordinary poiter to a node. 
   
   e.g 1: Nonconstant :  node* link () {return link;};
       2: constant    :  const node* link () const {return link;};
   

 */
 /*NOTE TEMPLETE PROGRAMING
  *
   TEMPLETE FUNCTION
------------------------------
    *Suppose your progam uses 1000000 different data types and you need a maximum function for each....??
    
	- Templete function, that will be completed during call time. It will be initialize depending on the actual parameters.
	
	e.g  templete <class Item>  // This is called a *templete prefix* // Item is a template parameter. 
	     Item maximum (Item a, Item b)
		 {  
		    if (a > b) return a;
			else       return b; 
		 }
		 Alternative way instead of <class Item> is <typename Item> but older compilers dont support this. 

	One simple solutuion would be to add a typedef add the top and change it to another type but, this would only work 
	if this type has > defined, also since its being passed by value it uses the copy constructor so that also needs to be defined.

	1. Templete programming allows us to call a function as many times as we want with different types.

   2.The compiler looks at the function call,examines the type of the arguments. Then the compiler generates the 
   function based on the type thats needed. 

   - the linker does not work for templete programming. 
   - the type variable is used at least once in the parameter list. Or else it will give an error.

   e.g: 
   templete <typename item>
   int compare (item a, item b) {
     if (a > b) return 1;

	 if (a < b) return -1;

	 return 0;
   }


   int main ()
   {
     cout << compare(1,2) << endl;
	 cout << compare(1.2,1.1) << endl;
   }
   This functions compared can be used by any primative type or any class the has the >,< and copy constructor defined. 

   TEMPLETE CLASSES 
------------------------------
   1. Templete prefix should go right before the class defenition. e.g
   templete <class Item>
   class bag {}

   - Item is now defined and can be used just like any other data type. 

	OUTSIDE OF THE TEMPLETE DEFENITION (AFTER THE SEMICOLON ON THE CLOSING BRACKET):

	2. The templete prefix is put before function prototype and defenition, for memember and nonmemeber functions.
	These are now templete functions. 
    
	3. Any used of Bag is now going to be Bag< Item >, this tells the compiler that its a templete class.Except the constructor
        e.g:  templete<class Item>
		      bag<Item> operator +(cosnt bag<Item>& b1, const bag<Item>&bag2)

		e.g constructor: templete<class item>
		                 bag <item> :: bag ()

	4. Outside of the class defintion to use a certain type like size_type,  we must add typename to tell the compiler that the 
	expression bag<item> :: size_type is the name of a data type.
	    e.g : before : bag::size_type bag:: count (const value_type& target)const ...
              
		Now : templete<class Item>
		       typename bag<Item>::size_type  bag<Item>::count(const value_type& target)const


	In the header file (class definition ) it is required to have the function defenitions but we would like 
    to keep the implementation in a seperate file. For this reason we will use the preprocessor directive include at 
	the bottom of the header file.

	IMPORTANT: In the implementation file avoid the use of using. e.g using std; instead std::cout ...
	-Implementation file name is bag4.template
   
	USING TEMPLETE CLASS 
------------------------------
  bag <string> b1;
  bag <int >  b2;

  The templete parameter has been instantiated


   ITERATOR
------------------------------ 
iterator is a class, the * and ++ need to be overloaded.
5 operators should be overloaded for the iterator 







  */
/*NOTE RECURSIVE THINKING
 * SEE AT LECTURE 1 hello.cpp
 */
 /*NOTE BINARY TREES
  * We can partition the data to make it easier to search for a specific data.
    - the data is compressed 

 A binary tress is made out of nodes just like the link list. 
   - The top most node is the root that doesnt have a parent.
   - A node can contain two childs at most, left and right child
   - a node that doesnt contains a child is called a leaf. 
   - two nodes with the same parent are called siblings
 DEF: Ancestor is the parent of the parent until you reach the root.
      Decendant is the children of a node. 
	  Depth of a tree, maximum depth of a leave, count up until you reach root.

 1.  A full binary tree (sometimes proper binary tree or 2-tree) is a tree in which every node other than the leafs has two children.
     - the depth of each leave is the same

 2.  A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as 
     far left as possible.  
 3. Balance ??

 ARRAY REPRESENTATION OF B-TREE
------------------------------ 
We can represent a complete binary tree as an array, starting from the root at index 0.
From left to right, the left child takes the next position then the right and so on. 
e.g    A
      / \
	 L  G
	/ \ / \
   O  R I T
  /\ /
 H M S

 array: A L G O R I T H M S
 index: 0 1 2 3 4 5 6 7 8 9

 Benefits of array representation: 

 1. Root is at index 0 
 2. A nonroot parent can be found at location (i-1/2).  e.g R is at index 4, its parent is L. 
    - so (4-1)/2 = 1. As we can see L is at index 1.
 3. Suppose a node is at index i, if it has chidren then the location would be
    - left: 2i+1
	- right:2i+2

	TRAVERSAL OF B-TREE
------------------------------------------------------------
1. PREORDER TRAVERAL
   - process the root
   - process the left of the node with recursive call
   - process the right of the node with recursive call

2. INORDER TRAVERSAL 
   - process the nodes in the left subtree recursively
   - process the root 
   - process the nodes in right subtree recursively 

3. POST ORDER TRAVERSAL 
   - process the nodes in the left subtree recursively
   - process the nodes in the right subtree recursively
   - process the root




	 
Pesudocode for delete_tree;

delete_tree (root)
   if (root == nullptr)
   return 
   delete_tree (root->left);
   delete_tree (root->right)
   delete root;

preorder, and inorder. Any tree,

Predecesor, subsecor ?? 
  */
 /*NOTE HASH TABLES
   Hash value is an index of where the value will be inserted. 
   Hash function receives a value and returns an index. 
   
   e.g size % value = index

   If the keys are the same the values will be replaced... when we have hash conflicts 
   we chaine the values.
   Array of pointer to head of link list. 

   Hash table insertion is O (1) because we just need to calculate the remainder of the key over the 
   size, getting a value index. Then we just need to insert into an array. 

   - load factor of hash table how much data is stored based on the size. f
   -hash table you need key and value. 
   

  */
 /*NOzTE HEAP
  * a heap is a kind of complete binary tree.
  * priority que are the same, maxium priority is on top
*/
 /*  TODO: Questions 
   1. Whats the difference of static and dynamic array. 
   Statics is a constant pointer e.g int * cosnt thats why it only points to the first element. Thats 
   why we have to add a value to move.
   Dynamic array is usually non constant 

   2. WHats the difference between variables on the stack and the dynamic?
   -variables in the stack have an identifier while the ones in the dynamic dont. 
   -variables in the stack are managed by the computer while the ones on the heap 
   are managed by the programmer. 
    3. Can you increased the size of the a dynamic array ? NO 

	4. What is an object ? Object is an instance of the type the user creates. 
	5. WHats the difference of a class and object ? Class is the definition of the data type, object is an instance 
	of that class.
	6. Whats is the state of an object ? the variables are the state of the objects, basically the invariants. if two
	objects have the same information then they have equal state.

	7. WHat happens to the default constrcutor when another contructor is created ? it becomes available
	8. What is a friend function ?
	9. Another time encapsulation doesnt happen ? object instances of the same class dont have encapsulation. 
	10. Whats is a macro gaurd ?
	11. WHat is namespace ? 
	12. Prototype of nonmember function should be in class definition, when we include the header file it will say that 
	these functions exist, then the linker will link to the class implementation. 
	13. WHat is the running time for insertion in hash table ? O(1)
	14. WHy do we need 
	15. Heap insert using an array. Need to know the formulas. 



	*/
/*NOTE SORTING ALGORYTHM
 * Quadratic Algorythm: Insertion sort O (n^2)




   



 */
#if 0	
Array search - unsorted O(n)
	          - sorted O(log n)
 Binary tree insert - worst O (n)    balance and not balance. 
	             - best (log n)

Compare all data structures best,worst and average. 

Unordered list : search : O (n)     insert: O (1)                 remove: O(1)      Average: n +1 + 1 = O(n)
ORDER list     : search : O (log n) insert: O (n) cause of shift  remove: O(n)      Average:O (n)
Balanced Tree  : search : O (log n )insert: O (log n)             remove: O(log n ) Average: O(n)
	 
Full leafs are in the same level  : every full is a balance
complete tree is balance

Balance tree: leafs are almost in the same level.
        
#endif 

DATE: 6/28/18 






 





