#include <iostream>
#include <string>
using namespace std;
int main(){
	const string tendangnhap("nguyendaihoa");
	const string matkhau("hoadeptrai");
	string username;
	string password;
	do{
		system("cls");
		cout <<"username: "<<endl;
		getline(cin ,username);
		cout <<"password: "<<endl;
		getline(cin ,password);
		
		
	}while(tendangnhap != username || matkhau != password);
	cout<<"login succeed!"<<endl;
}
