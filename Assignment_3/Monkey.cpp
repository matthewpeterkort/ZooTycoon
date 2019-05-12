#include <iostream>
#include "Monkey.h"

using namespace std;

Monkey::Monkey(string name): Animal(name,0){
//	cout<<"Default monkey constructor called"<<endl;
	
}
string Monkey::get_name(){
	string monkey_name = Animal::get_name();
	return monkey_name;
}
//void Monkey::Monkey_Revenue_Setter(int& Monkey_Revenue){	
//	Monkey_Revenue=1500;
//
/*void Buy_Monkey(int Bank, int& Monkey_Buy_Count){
	cout<<"You Have Bought A Rhesus Macaque from the local Monkey Research Lab for 15000"<<endl;
	Bank=Bank-15000;
	cout<<"This should be garbage"<<Monkey_Buy_Count<<endl;
	if (Monkey_Buy_Count >=0){
		Monkey_Buy_Count++;
		return;}
	Monkey_Buy_Count=0;
	

}
*/
	
	
