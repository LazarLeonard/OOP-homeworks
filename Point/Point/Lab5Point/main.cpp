#include <iostream>
#include "point.h"
#include "line.h"
#include "circle.h"
#include "square.h"
#include "rectangle.h"

using namespace std;

int main()
{
	float l;
	Point A(2, 2);
	Point B(4, 2);
	Point C(6, 6);
	Point D(9, 6);
	
	Point Buff(0, 0);

	Line L1(A, B);
	Line L2(C, D);

	Circle Circ(A,B);
	//Circle Circ(B, L1);

	Square S(L1);

	//Rectangle R(A, B, C);
	Rectangle R(L1, L2);
	cout << "Points:" << endl;
	A.printPoint();
	B.printPoint();
	C.printPoint();
	D.printPoint();

	cout << endl << "Line:" << endl;
	l = L1.getlenght();
	cout << l << endl;
	cout << endl << "Cirlce:" << endl;
	l = Circ.getArea();
	cout << l << endl;

	l = Circ.getCirc();
	cout << l << endl;

	Circ.getCenter();
	cout << endl <<"Square:" << endl;
	l = S.getArea();
	cout << l << endl;

	l = S.getPerim();
	cout << l << endl;
	cout << endl << "Rectangle:" << endl;
	l = R.getArea();
	cout << l << endl;

	l = R.getPerim();
	cout << l << endl;
	system("pause");

	return 0;
}