#include "dog.h"
#include "dogWspots.h"
#include "dogWOspots.h"
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{	
	WOspots first;
	Wspots second;
	Dog third;

	first.set_data();
	first.print_data();
	cout << endl << endl;

	second.set_data();
	second.print_data();
	cout << endl << endl;

	third.set_data();
	third.print_data();

	system("pause");
	return 0;

}