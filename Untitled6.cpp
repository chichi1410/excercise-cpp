#include <iostream>
#include <string>
using namespace std;
int main(){	
    string tk;
    string pass;
	const string taikhoan ("hoa");
	tryagan:
	cout<<"hay nhap tai khoan: "<<endl;	
	getline(cin, tk);
	const string matkhau ("11");
	cout<<"hay nhap mk: "<<endl;
	getline (cin , pass);
	if((pass == matkhau)&&( tk == taikhoan)){
		cout<<"login succeed"<<endl;
		
	}else if(tk == taikhoan){
	
		cout <<"sai mk roi "<<endl;
	}else if(matkhau == pass){
		cout<<"sai tk roi"<<endl;
	}else{
		cout<<"tat ca seu sai"<<endl;
		goto tryagan;
	}
	return 0;
}
