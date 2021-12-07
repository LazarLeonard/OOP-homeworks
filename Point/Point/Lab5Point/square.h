#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include "line.h"
#include "point.h"


class Square : protected Line
{

public:
	Square(Point A,Point B);
	Square(Line A);
	float getPerim();
	float getArea();

};

#endif