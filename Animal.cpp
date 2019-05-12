#include <iostream>
#include "animal.h"

using namespace std;

Animal::Animal(string name, int age) {
	cout<<"Alternate animal constructor called" <<endl;
	this ->name = name;
	this ->age= age;
}

Animal::Animal(){
	cout<<"Default animal constructor called"<<endl;
	this -> name = "Specimen Unknown";
	this -> age =0;
}

string Animal::get_name(){
	return name;
}

Animal& Animal::operator++(){ // pre-increment operator
	++age;
	return *this;
}

Animal Animal::operator++(int){ //post-increment operator 
	Animal old(*this);
	++(*this);
	return old;

}
ostream & operator<<(ostream& out, const Animal& a){
	out << "Name: " << a.name << ", Age: " <<a.age;
	return out;
}
