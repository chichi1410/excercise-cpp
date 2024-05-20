#include <iostream>
using namespace std;
void bien1(int x,int y){
	cout<<x + y<<endl;
}
int bien(int x, int y){
return x + y;
}
int main(){
	int a(4);
	bien1(2,2);
	bien1(a,2);// co the goi ham bang bien hoac gia tri cu the
	cout<<bien(3,4)<<endl;
	return 0;
}
