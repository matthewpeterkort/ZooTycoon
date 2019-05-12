#ifndef ZOO_H
#define ZOO_H
#include <iostream>
#include <string>

using namespace std;

class Zoo{
public:
	Zoo();
	Zoo(string* Monkeys);
	~Zoo();
	string* Meerkats;
	string* Monkeys;
	string* SeaOtters;
	void Keep_track_of_stuff(int& j);
	Zoo& operator=(const Zoo&);
//	void Create_Monkey_Array(string* Monkeys);
	Zoo* AddTo_Monkey_Array(string* Monkeys, int Bank, int Monkey_Buy_Count);
	void Buy_Monkey(int Bank);
	void Set_Buy_Count_Values(int &Monkey_Buy_Count,int &SeaOtter_Buy_Count, int& Meerkat_Buy_Count);
	void Menu(int Monkey_Buy_Count,int SeaOtter_Buy_Count, int Meerkat_Buy_Count,int Bank);
	void Generate_Bank(int & Bank);

	
private:
	static const int Array_Growth_Count=  20;
	static const int Monkey_Litter_Size= 1;
	static const int SeaOtter_Litter_Size= 2;
	static const int Meerkat_Litter_Size=5;
	static const int Base_Food_Cost=40;



};
#endif
