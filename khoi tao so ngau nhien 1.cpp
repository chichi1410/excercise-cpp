#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int n ,a ;
	cout <<"nhap vao so ngau nhien tu 1 - 10"<<endl;
	cin>> n;
	srand(time(NULL));
	 a = rand() % 10 + 1;
	if(n>a){
		cout <<"hay nhap so nho hon"<<endl;
	}else if(n<a){
		cout<<"hay nhap so lon hown"<<endl;
	}else if(n==a){
		cout<<"chuc mung ban da nhap dung"<<endl;
	}
	return 0;
}
