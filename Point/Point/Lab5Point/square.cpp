#include "square.h"
#include <iostream>


Square::Square(Point A,Point B)
{
	Line Buff(A, B);
	lenght = Buff.getlenght();
}

Square::Square(Line A)
{
	lenght = A.getlenght();
}
float Square::getPerim()
{
	return 4*lenght;
}
float Square::getArea()
{
	return lenght * lenght;
}