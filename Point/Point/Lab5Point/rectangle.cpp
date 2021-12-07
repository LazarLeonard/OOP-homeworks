#include "rectangle.h"
#include <iostream>


Rectangle::Rectangle(Point A, Point B,Point C)
{
	Line BuffL(A, B);
	Line BuffW(B, C);
	lenght = BuffL.getlenght();
	width = BuffW.getlenght();
}

Rectangle::Rectangle(Line A,Line B)
{
	lenght = A.getlenght();
	width = B.getlenght();
}
float Rectangle::getPerim()
{
	return (2 * lenght) + (2 * width);
}
float Rectangle::getArea()
{
	return width * lenght;
}