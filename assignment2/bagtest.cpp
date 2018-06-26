#include "Bag.h"
using container::Bag;
#include <iostream>
using namespace std;
#include "Student.h"
using container::Student;
void shiftdown (int *array,int index, int used);
int main ()
{
/*	Student a[10];
	a[0] =Student("Chirstian", "Castro");
	cout << a[0].toString();*/

	Bag b1;
	b1.insert(30,1);
	b1.insert(1,1);
	b1.insert(25,1);
	b1.insert(60,1);

	b1.print();

  
	return 0;
}






