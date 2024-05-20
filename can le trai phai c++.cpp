#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	cout<<"bang phong than"<<endl;
	cout << setw(5) <<left<<"id";
	cout << setw(30)<<left<<"name";
	cout << setw(20)<<right<<" year old";
	cout << setw(10)<<right<<"tu vi"<<endl;
	// dau gach ngang
	cout << setfill('-');
	cout << setw(66)<<"_"<<endl;
	// set khoang trong tro lai 
	cout << setfill(' ');
	// tiep tuc viet lenh
	cout << setw(5)<<left<<"1";
	cout << setw(30)<<left << "nguyen dai hoa";
	cout << setw(20)<<right<< "19 tuoi"<<endl; 
	cout << setw(5)<<left<<"2";
	cout << setw(30)<<left<<"van khiem tran";
	cout << setw(20)<<right<<"19 tuoi"<<endl;
	cout << setw(5)<<left<<"3";
	cout << setw(30)<<left<<"van nguyet tran";
	cout << setw(20)<<right<<"19 tuoi"<<endl;
	// endl
	cout << "bang chu nguyen dai hoa"<<endl;
	return 0;
	
	}

