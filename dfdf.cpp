#include <iostream>
#include <ctime>
#include <cstdlib>
#define MAX 100
using namespace std;
void nhapmang(int arr[] , int &n){
	srand(time(NULL));
	cout<<"nhap mang"<<endl;
	cin>>n;
	for (int i=0 ; i<n ; i++){
		arr[i] = rand()%100;
	}
}
void xuatmang(int arr[] , int &n){
	for(int i=0 ; i<n ; i++){
		cout<<"id["<<i<<"]="<<arr[i]<<endl;
	}
}
void hoanvi(int &a , int &b){
	int temp = a;
	a =b; 
	b = temp;
}
void sapxep(int arr[] , int n){
	for (int i=0 ; i<n-1 ; i++){
		for (int j=i+1 ; j<n ; j++){
			if(arr[i] > arr[j])
			hoanvi(arr[i] , arr[j]);
		}
	}
}
int timkiem(int arr[] ,int n , int x){
	for(int i=0 ; i<n ; i++){
		if(arr[i] == x)
		return i;
		if(i == x)
		return arr[i];
	}
	return -1;
}
int main(){
	int array[MAX];
	int n;
	nhapmang(array, n);
	xuatmang(array, n);
	cout<<"ham sau khi sawps xep: "<<endl;
	sapxep(array , n);
	xuatmang(array , n);
	cout<<"nhap dia chi can tim kiem: ";
	int x;
	int timkiemm = timkiem(array ,n ,x);
	do{
//	int x;
	cin>>x;
	//int timkiemm = timkiem(array ,n ,x);
	
		cout<<"vi tri: "<<timkiemm<<endl;
	}while(timkiemm == -1);
	cout<<"loi";
	return 0;
}
