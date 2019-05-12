#include <iostream>
#include "animal.h"
#include "Meerkat.h"
#include "Monkey.h"
#include "Zoo.h"
#include "SeaOtter.h"
#include <string>

using namespace std;

Zoo::Zoo(){
}
Zoo::Zoo(string* Monkeys){
	Monkeys= new string[Array_Growth_Count];
}
Zoo::~Zoo(){
	delete [] Monkeys;
}
	
Zoo& Zoo:: operator=(const Zoo& old_obj){
//      cout<<"Assignment operator invoked!"<<endl;
        if (this != &old_obj){
                delete [] Monkeys;
		//int j,k;
	//	k=Keep_track_of_stuff(j);
                Monkeys = new string[Array_Growth_Count];
                for (int i=0; i<(Array_Growth_Count); i++){
                        Monkeys[i] = old_obj.Monkeys[i];
                }
        }
        return *this;
}

//void Zoo::Create_Monkey_Array(string* Monkeys){
//	Monkeys= new string[Array_Growth_Count];
//
//	}	
void Zoo::Generate_Bank(int& Bank){
        Bank=100000;
}

void Zoo::Buy_Monkey(int Bank){
        cout<<"You Have Bought A Rhesus Macaque from the local Monkey Research Lab for 15000"<<endl;
        Bank=Bank-15000;
	cout<<"the New value of Bank is"<<Bank<<endl;
}

void Zoo::Set_Buy_Count_Values(int &Monkey_Buy_Count,int &SeaOtter_Buy_Count, int& Meerkat_Buy_Count){
	Monkey_Buy_Count=0;
        SeaOtter_Buy_Count=0;
        Meerkat_Buy_Count=0;
}
void Zoo::Menu(int Monkey_Buy_Count,int SeaOtter_Buy_Count, int Meerkat_Buy_Count,int Bank){
	int input;	
	cout<< "The value of Monkey Buy Count"<<Monkey_Buy_Count<<endl;
        cout<<"The value of Sea Otter Buy Count"<<SeaOtter_Buy_Count<<endl;
        cout<<"The value of Meerkat Buy Count"<<Meerkat_Buy_Count<<endl;
	cout<<"What would you like to do?"<<endl;
	cout<<"1. Buy Monkey"<<endl;    
        cout<<"2. Buy Sea Otter"<<endl;
        cout<<"3. Buy Meerkat"<<endl;   
        cout<<"4. Buy nothing, (do nothing)"<<endl;
	cin>>input;
	switch(input){
		case 1:
		Monkey_Buy_Count++;
		Buy_Monkey(Bank);			
		break;
		case 2:
		SeaOtter_Buy_Count++;
		break;
		case 3:
		Meerkat_Buy_Count++;
		break;
	}
}
	

Zoo* Zoo::AddTo_Monkey_Array(string* Monkeys, int Bank, int Monkey_Buy_Count){
        if (Monkey_Buy_Count >=0){
                Monkey_Buy_Count++;
	}
	else{ 
		Monkey_Buy_Count=0;
	}
	string dummy_str="Monkey ";
	dummy_str.append(to_string(Monkey_Buy_Count));
	cout<<dummy_str<<endl;
	Monkeys[Monkey_Buy_Count]=dummy_str;
	cout<<"The value of Monkey array "<<dummy_str<<endl;

}
	




