#include "dogWspots.h"
#include <iostream>
#include <string>
using namespace std;

Wspots::Wspots()
{
	age = 0;
	height = 0;
	weight = 0;
	spots = 0;
}

void Wspots::set_data()
{
	cout << "Set color: ";
	getline(cin, color);

	cout << "Set age: ";
	cin >> age;

	cout << "Set height: ";
	cin >> height;

	cout << "Set weight: ";
	cin >> weight;

	cout << "Set number of spots: ";
	cin >> spots;

	cout << "Set dog name: ";
	cin.ignore();
	getline(cin, name, '\n');

}

void Wspots::print_data()
{
	cout << "Color: " << color << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Number of spots: " << spots << endl;
	cout << "Name: " << name << endl;
}