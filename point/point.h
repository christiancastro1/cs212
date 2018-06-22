#ifndef point_h
#define point_h

#include <iostream>

namespace Summer{

class Point {
    //friend std::istream& operator<<(std::istream& outs Point p);
	public:
		//bin/	Point (double x =0 , double y =0);
		Point(double m_x = 0 , double m_y = 0);
		void setPosition(double x, double y);
		void shift      (double dx, double dy);
		double x         ()const {return m_x;};
		double y         ()const {return m_y;};

	private:
		double m_x;
		double m_y;
};
}
#endif 
