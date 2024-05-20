#include <iostream>
using namespace std;
//void nbien(int &y){
//	cout<<"y="<<y<<endl;
//	y= 69;
//	cout<<"y="<<y<<endl;
//}
void nbien(int a,int b,int &out1, int &out2){ //hamf ko dung const
	out1 = a+b;
	out2 = a-b;
}
void nnbien(const int &hoa){ // ham dung const
	cout<<hoa<<endl;
//	hoa=69;// ko hop le vi co const
}
int main(){
	int a(6) , b(9);
	int c ,d;
	nbien (a , b, c, d);// chi co the gan 1 bien ko the gán so
	cout << " a + b :"<<c<<endl;
	cout << " a - b :"<<d<<endl;

	int x(1);
	nnbien(x);// dung const co the vua gan so vua gan bien
	nnbien(x+1);
	nnbien(5);
	 return 0;
}
