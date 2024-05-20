#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int n ,a ;
	srand(time(NULL));
	 a = rand() % 10 + 1;
	 do{
	 	cout <<"nhap vao so ngau nhien tu 1 - 10"<<endl;
	 cin>> n;
	if(n>a){
		cout <<"hay nhap so nho hon"<<endl;
	}else if(n<a){
		cout<<"hay nhap so lon hown"<<endl;
	}
	cout<<"endl";
	}while(n!=a);
	cout <<"chuc mung"<<endl;
}

