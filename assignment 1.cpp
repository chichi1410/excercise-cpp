#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define MAX 20
void khoitaoid(){
static int id(0);
++id;
cout<<"id:"<<id<<"= ";
}
int main (){
	
	int arr[MAX]{};
	srand(time(NULL));
	for (int i=0 ; i< MAX ; i++){
	//	cout << "a[" << i <<"] "<<endl;;
		
		arr[i] = rand() % 100 + 1;
		
	}
	for (int i=0 ; i< MAX ; i++){
		khoitaoid();
		cout <<"a["<<i<<"]"<< arr[i] <<" "<<endl;
		cout << arr[15];
	 
	}
}
