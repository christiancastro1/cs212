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
   
	cout << "This is point for x" << p2.x() << " and this is y" << p2.y();
	return 0;
}
