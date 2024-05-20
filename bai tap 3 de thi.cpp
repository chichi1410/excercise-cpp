#include <iostream>
#define MAX 100
using namespace std;
void nhapmang(int arr[] , int &n){
	cout<<"nhap so luong phan tu trong mang: ";
	cin>>n;
	for(int i=0 ; i<n ;i++){
		cout<<"nhap phan tu thu "<<i+1<<" : ";
		cin>>arr[i];
	}
}
void xuatmang(int arr[] , int &n){
	for (int i=0 ; i<n ; i++){
		cout<<arr[i]<<"\t";
	}
}
int timkiem(int arr[] , int n , int x){
	for(int i=0 ; i<n ; i++){
		if(arr[i] == x)
		return i+1;
	}
	return -1;
}
int main(){
	int arr[MAX];
	int n;
	nhapmang(arr , n); 
	xuatmang(arr , n);
	//
	int x;
	cout<<"nhap gia tri can tim kiem : ";
	cin>>x;
	int find = timkiem(arr , n , x);
	if(find == -1){
		cout<<"ko tim thay"<<endl;
	}else{
		cout<<find<<endl;
	}
	return 0;
}
