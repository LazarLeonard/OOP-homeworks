#include <iostream>
#include "line.h"

float Line::getlenght()
{ 
	return lenght; 
}

Line::Line()
{
	lenght = 0;
}

Line::Line(Point A, Point B)
{
	lenght = sqrt((B.getx() - A.getx())*(B.getx() - A.getx()) + (B.gety() - A.gety())*(B.gety() - A.gety()));
}

Line& Line::operator=(const Line& val)
{
	this->lenght = val.lenght;
	return *this;
}