#include "point.h"
#include <iostream>
using namespace std;

using Summer::Point;

int main ()
{
   	Point p1(10.0, 5.0);
	Point p2 ;
	p2 = p1;

	//p1.setPosition(3.0,5.0); // creates a new point at this position 
   //	Point p2(p1);
   //Point p2(10.0,6.0);
   
//	cout << "This is point for x" << p2.x() << " and this is y" << p2.y();
 //   int a = 7;
//	int &b = a;
	cout << max(7,9);









	return 0;
}
template <typename Item>
Item max (Item x1, Item x2){
	if (x1 > x2){
		return x1;
	}
	else return x2;





}
