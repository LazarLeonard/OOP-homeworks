#include "circle.h"
#include <iostream>
#define pi 3.14159

using namespace std;

Circle::Circle(Point A,Point B)
{	
	x = A.getx();
	y = A.gety();
	Line RAD(A, B);
	lenght = RAD.getlenght();
}

Circle::Circle(Point A, Line B)
{
	x = A.getx();
	y = A.gety();

	lenght = B.getlenght();
}


float Circle::getCirc()
{
	return 2 * pi*lenght;
}
float Circle::getArea()
{
	return pi * (lenght*lenght);
}

void Circle::getCenter()
{
	cout << "Center is: (" << x << ";" << y << ")" << endl;
}