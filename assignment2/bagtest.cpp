#include "Bag.h"
using container::Bag;
#include <iostream>
using namespace std;
#include "Student.h"
using container::Student;
int main ()
{
	Student a[10];
	a[0] =Student("Chirstian", "Castro");
	cout << a[0].toString();




  
	return 0;
}





