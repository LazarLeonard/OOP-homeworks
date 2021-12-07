#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include <iostream>

class Point {

protected:
	int x;
	int y;
public:
	Point();
	Point(int px, int py);
	
	void setx(int px);
	void setyt(int py);
	
	int getx();
	int gety();

	void printPoint();

	Point &operator=(const Point&val);

};

#endif

