#include <iostream>
using namespace std;
int main(){
	int n(1);
	tryAgain:
	cout<< n++ << endl;
	// vong lap vo tan
	// can them dk if n<100 de dung khi n chay den 100
	goto tryAgain;

	return 0;
}
