
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

   TODO: Whats the difference of static and dynamic array. 
   Statics is a constant pointer e.g int * cosnt thats why it only points to the first element. Thats 
   why we have to add a value to move.
   Dynamic array is usually non constant 



  




 






