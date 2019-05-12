#include <iostream>
#include "Monkey.h"
#include "animal.h"
#include "Zoo.h"
#include "SeaOtter.h"
#include "Meerkat.h"

using namespace std;

int main(){

//	Animal a1("Animal started at Age 0",0);
//	Monkey m1("Monkey started at Age 0");
	//cout<<++a1<<endl;
	//cout<<m1++<<endl;
	int Bank,Monkey_Buy_Count,Meerkat_Buy_Count,Sea_Otter_Buy_Count;
	string* Monkeys=NULL;
	//Zoo* Zoo::AddTo_Monkey_Array(string* Monkeys, int Bank, int& Monkey_Buy_Count)
	Zoo Object;
	Object.Generate_Bank(Bank);
	Object.Set_Buy_Count_Values(Monkey_Buy_Count,Meerkat_Buy_Count,Sea_Otter_Buy_Count);
	Object.Buy_Monkey(Bank);
//	Object.AddTo_Monkey_Array(Monkeys,Bank,Monkey_Buy_Count);

	return 0;


}
