#include <iostream>
#include "point.h"

using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int px, int py)
{
	x = px;
	y = py;
}

void Point::setx(int px) {
	x = px;
}
void Point::setyt(int py) {
	y = py;
}

void Point::printPoint()
{
	cout << x << " " << y << endl;
}

int Point::getx() 
{ 
	return x; 
}
int Point::gety() 
{ 
	return y;
}

Point& Point::operator=(const Point& val)
{
	this->x = val.x;
	this->y = val.y;

	return *this;
}


