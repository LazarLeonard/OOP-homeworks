#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED
#include <string>

using namespace std;

class Dog
{
	protected:
		string name;
		int age;
		int height;
		int weight;
		string color;
	public:
		Dog();
		void set_data();
		void print_data();


};

#endif
