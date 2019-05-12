#ifndef SEAOTTER_H                                                                                                                                                       
#define SEAOTTER_H

#include <iostream>
#include "animal.h"

using namespace std;

class SeaOtter : public Animal {
public:
        SeaOtter(string name);
        string get_name();

private:
        static const int SeaOtter_Cost= 5000;
	static const int SeaOtter_Revenue= 250;
	static const int SeaOtter_Sick_Cost= 2500;



};
#endif
