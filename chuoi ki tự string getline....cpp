#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	string ntenban;
	string ntuoiban;
	cout<<"nhap ten cua ban: ";
	getline ( cin , ntenban );
	cout<<"nhap tuoi cua ban: ";
//	cin>>tenban;// chuong trinh nay xuat ra thieu dau cach nguyen dai hoa xuat ra dc chu nguyen
 // de khac phuc ta dung lenh getline de hien thi full hoj va ten
	getline( cin , ntuoiban);
	cout<<"you name: "<<ntenban<<endl;
	cout <<"you age: "<<ntuoiban<<endl;
	
	// them ham de xoa bo nho dem khi thieu cin hoac cout
	// cin.ignore(32767, '\n');
	 // cau lenh nay dung de xoa dau enter vi khi có dau nay lam chuong trinh ket thuc khi chua chay het lenh
	   
	   cout<<setfill('-');
	   cout<<setw(30)<<"-"<<endl;
	// noi chuoi lai voi nhau
	string nho;
	string nten;
	cout<<"nhap ho cua ban: ";
	getline(cin ,nho );
	cout<<"nhap ten cua ban: ";
	getline( cin , nten);
	
	string hovaten = nho + nten;
	cout << "you full name: "<<hovaten<<hovaten.length();// ho va ten . size la so ki tu trong ten
	return 0;
 }
