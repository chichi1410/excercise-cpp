#include <iostream>
using namespace std;
void ntrogiup(){
	cout<<"are you in need of support\n enter yes or no"<<endl;
	string help;
	const string giup("yes");
	getline(cin, help);
	if(giup == help){
		cout<<"enter your date of birth"<<endl;
	string trogiup;
	const string ngaysinh("14/10/2004");
	getline(cin, trogiup);
	if(trogiup == ngaysinh){
		cout<<"succeed!"<<endl;
		cout<<"password: hoadeptrai"<<endl;
}
	}else{
		cout<<"login error";
	}
//	string trogiup;
//	const string ngaysinh("14/10/2004");
//	getline(cin, trogiup);
//	if(trogiup == ngaysinh){
//		cout<<"succeed!"<<endl;
//		cout<<"password: hoadeptrai"<<endl;
//	}
}
int main(){
tryAgain:
cout <<"enter in username: ";
const string tendangnhap("nguyendaihoa");
string username;
getline(cin, username);
cout <<"enter in password: ";
const string matkhau("hoadeptrai");
string password;
getline (cin ,password);
if ((matkhau == password)&&(tendangnhap == username)){
	cout <<"login succeed!"<<endl;
	cout <<"name : nguyen dai hoa\n sex : 19\n profession : university studen\n interests : music"<<endl;
}
else if (matkhau == password){
	cout<<"username error "<<endl;
	goto tryAgain;
	//system("cls");
}
else if (tendangnhap == username){
	cout<<"password error "<<endl;
	ntrogiup();
	goto tryAgain;
}
else{
	cout<<"password and username error";
}
return 0;

}
