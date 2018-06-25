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
	b1.insert(1,100);
	b1.insert(2,200);
	b1.insert(4,400);
	b1.insert(8,800);
	b1.insert(10,1000);
	b1.erase(2);

	b1.print ();
  

	
	





  
	return 0;
}
void shiftdown 	(int *array,int index, int used){

	while (index < used){
		array[index] = array[index+1];
	    index++;
	}






}





