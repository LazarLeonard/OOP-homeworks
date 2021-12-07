#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "line.h"
#include "point.h"


class Circle : protected Point , protected Line
{

public:
	Circle(Point A,Point B);
	Circle(Point A, Line B);
	float getCirc();
	float getArea();
	void getCenter();

};





#endif