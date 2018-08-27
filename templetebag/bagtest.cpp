#include "Bag.h"
using container::Bag;
#include <iostream>
using namespace std;
#include "Student.h"
using container::Student;
void shiftdown (int *array,int index, int used);
int main ()
{
	/*
	Student a[10];
	a[0] =Student("Chirstian", "Castro");
    cout<< a[0].printfirst();
*/
	Bag b1;
	Student a1("Christian","Castro");
	Student a2("Jhonatan","Valle");
	Student a3("MIKE", "ALKA");
	Student a4("Leah", "Meza");

	b1.insert (30,a1);
	b1.insert (1,a2);
	b1.insert (60,a3);
	b1.insert (60,a4);   // mike will be overwritten

	b1.print();

	cout <<"----------------------------------------------------"<<endl;
	cout << "The number of Students in the bag are:"<< b1.size() << endl;
//	cout << "Viewing a certain student with key: 25" << b1.view(25)<<endl;


  
	return 0;
}






