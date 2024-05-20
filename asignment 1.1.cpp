#include <iostream>
#include <cstdlib>
#include <ctime>;
#define MAX 10
using namespace std;
int main(){
	srand(time(NULL));
	int arr[MAX]{};
	for (int i=0; i < MAX ;i++){ 
		arr[i] = rand() % 100 + 1;
		
	}for (int i=0 ; i<MAX ; i++){
		cout<<"id:"<<arr[i]<<endl;
	}
}
