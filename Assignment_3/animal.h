// Animal Class
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal{
public:
	Animal(); // default constructor
	Animal(string, int); // alternate constructor 
	string get_name();
	Animal& operator++(); //pre-increment	
	Animal operator++(int); //post-increment
	friend ostream& operator<<(ostream& out, const Animal& a);
private:
	string name;
protected:
	 int age;

};
#endif 
