#include <iostream>
#include <iomanip>
using namespace std;
void hovaten() {
	string nho("nguyen dai ");
	string nten("hoa");
	string nhovaten = nho + nten ;
	cout<<"code by: "<<nhovaten<<endl;
	}
void nname(){
	string nho;
	cout<<"nhap ho cua ban: ";
	getline( cin , nho);
//	cin.ignore(32767,'\n');
	string nten;
	cout<<"hay nhap ten cua ban: ";
	getline( cin,nten);
	string name = nho + nten;
	cout<<"you name is: "<<name<<endl;	
}
void ageofsex() {
	int nage;
	cout<<"enter you age: ";
	cin>>nage;
	cin.ignore(32767, '\n');
	string nsex;
	cout<<"enter you sex: ";
	getline(cin ,nsex);
	cout<<"you age is: "<<nage<<endl;
	cout<<"you sex is: "<<nsex<<endl;
	cout<<"you have interests in music and watching movies"<<endl;
	}
	int main(){
		cout<<setw(40)<<left<<"code by: ";
		hovaten();
		cout<<setfill('-');
		cout<<setw(100)<<"-"<<endl;
		nname();	
		ageofsex();
		return 0;
		}
