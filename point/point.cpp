#include "point.h"   //#pragma once
namespace Summer {
Point::Point (double x , double y){

	m_x = x;
	m_y = y;

}
void Point:: setPosition(double x, double y){
	m_x = x;
	m_y = y;
}
void Point:: shift      (double dx, double dy){
	m_x += dx;
	m_y += dy;
	}
}

