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

