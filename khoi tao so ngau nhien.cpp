#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	for (int i=0 ; i<10;i++){
		int a = rand() % 100 + 1;
		cout <<a<<endl;
	}
}
