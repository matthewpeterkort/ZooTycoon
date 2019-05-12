#ifndef MONKEY_H
#define MONKEY_H

#include <iostream>
#include "animal.h"

using namespace std;

class Monkey : public Animal {
public:
	Monkey(string name);
	string get_name();
	void Generate_Bank(int &Bank);
	void Buy_Monkey(int Bank, int& Monkey_Buy_Count);
//	void Monkey_Revenue_Setter(int& Monkey_Revenue);

private:
	static const int Monkey_Cost= 15000;
        static const int Monkey_Sick_Cost= 7500; 
        static const int Monkey_Revenue= 1500;                                                                                                                                           
};
	

#endif
