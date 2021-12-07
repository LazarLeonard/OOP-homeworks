#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

#include "point.h"

class Line  
{

protected:
	float lenght;
public:
	Line();
	Line(Point A, Point B);
	float getlenght();
	Line &operator=(const Line&val);

};

#endif