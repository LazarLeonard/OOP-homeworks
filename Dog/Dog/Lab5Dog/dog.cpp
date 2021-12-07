#include "dog.h"
#include <iostream>
#include <string>
using namespace std;

Dog::Dog()
{
	age = 0;
	height = 0;
	weight = 0;
}

void Dog::set_data()
{	
	cout << "Set color: ";
	getline(cin, color);

	cout << "Set age: ";
	cin >> age;

	cout << "Set height: ";
	cin >> height;

	cout << "Set weight: ";
	cin >> weight;

	cout << "Set name: ";
	cin.ignore();
	getline(cin, name, '\n');

}

void Dog::print_data()
{
	cout << "Color: " << color << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Name: " << name << endl;
}