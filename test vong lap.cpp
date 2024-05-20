#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	int selection;
	do{
	//	system("cls"); // dung de reset lai vong lap moi
		cout<<setw(20)<<right<<"menu"<<endl;
		cout<< setfill('*');
		cout<<setw(30)<<"*"<<endl;
		cout<<"1.banh tran tron"<<endl;
		cout<<"2.tra sua"<<endl;
		cout<<"3.ca vien chien"<<endl;
		cout<<"4.cafe sua"<<endl;
		cout<<"5.cafe den"<<endl;
		cout<<"enter your selection"<<endl;
		cin>>selection;
		if (cin.fail()){ // dung de tranh gap vong lap vo tan		   
		   	cin.clear();
		   	cin.ignore(32767 ,'\n');
		   }
	}while (selection > 5 || selection < 1);
	cout<<"succeed!";
}
