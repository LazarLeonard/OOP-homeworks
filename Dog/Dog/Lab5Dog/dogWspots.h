#ifndef DOGWSPOTS_H_INCLUDED
#define DOGWSPOTS_H_INCLUDED
#include "dog.h"

using namespace std;

class Wspots : public Dog
{
	protected:
		int spots;
	public:
		Wspots();
		void set_data();
		void print_data();
};

#endif
