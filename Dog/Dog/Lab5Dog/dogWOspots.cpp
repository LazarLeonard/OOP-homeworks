#include "dogWOspots.h"
#include <iostream>
#include <string>
using namespace std;

WOspots::WOspots()
{
	age = 0;
	height = 0;
	weight = 0;
}

void WOspots::set_data()
{
	cout << "Set color: ";
	getline(cin, color);

	cout << "Set age: ";
	cin >> age;

	cout << "Set height: ";
	cin >> height;

	cout << "Set weight: ";
	cin >> weight;

	cout << "Set dog name: ";
	cin.ignore();
	getline(cin, name, '\n');

}

void WOspots::print_data()
{
	cout << "Color: " << color << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Name: " << name << endl;
}