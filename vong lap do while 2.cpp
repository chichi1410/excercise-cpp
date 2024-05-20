#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	int selection;
	do{
		cout<<setw(20)<<left<<"menu"<<endl;
		cout<<"1.banh tran tron"<<endl;
		cout<<"2.tra sua"<<endl;
		cout<<"3.ca vien chien"<<endl;
		cout<<"4.cafe sua"<<endl;
		cout<<"5.cafe den"<<endl;
		cout<<"enter your selection"<<endl;
		cin>>selection;
	}while (selection > 5 || selection < 1);
	cout<<"succeed!";
}
