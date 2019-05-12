#ifndef MEERKAT_H
#define MEERKAT_H
#include <iostream>
#include "animal.h"

using namespace std;

class Meerkat : public Animal {
public:
        Meerkat(string name);
        string get_name();

private:
        static const int Meerkat_Cost=500;
	static const int Meerkat_Sick_Cost=250;
	static const int Meerkat_revenue=25;



};
#endif
