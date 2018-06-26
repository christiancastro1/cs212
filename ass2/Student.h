/*NAME : CHRISTIAN CASTRO
 * CLASS: CSC212
 *
 *	public:
		Student (string first = "EMPTY", string last = "EMPTY");
		string printfirst()const {return firstname;};  post : return first name    
		string printlast ()const {return lastname; };  post : retunrs last name
		int    printage  ()const {return age;};        post : returns the age
        void   setage    (int old); pre: receives age   post: sets age
		string toString  ()const;  // prints name and last 

	private:
		string firstname;
		string lastname ;
		int    age      ;
	
 */
#ifndef Student_h
#define Student_h
#include <string>
using std :: string;

namespace container {
class Student{
	public:
		Student (string first = "EMPTY", string last = "EMPTY");
		string printfirst()const {return firstname;};      
		string printlast ()const {return lastname; };
		int    printage  ()const {return age;};
        void   setage    (int old);
		string toString  ()const;

	private:
		string firstname;
		string lastname ;
		int    age      ;
	
};
}
#endif

