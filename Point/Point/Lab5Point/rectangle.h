#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "line.h"
#include "point.h"


class Rectangle : protected Line
{

protected:
	float width;
public:
	Rectangle(Point A, Point B,Point C);
	Rectangle(Line A,Line B);
	float getPerim();
	float getArea();

};

#endif
