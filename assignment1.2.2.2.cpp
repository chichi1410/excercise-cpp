#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAX 100
using namespace std;
void nhapmang(int arr[],int &n){
	cout<<"nhap vao gia tri cua mang";
	cin>>n;
	srand(time(NULL));	
	for (int i=0 ; i<n ; i++){
		arr[i] = rand()%100+1;
	}
}
void xuatmang(int arr[], int &n){
	for(int i=0; i<n ; i++){
		cout<<"id["<<i<<"] ="<<arr[i]<<" "<<endl;
	}
}
void hoanvi(int &a, int &b){
	int temp =a;
	a=b;
	b=temp;
}
void sapxep(int arr[], int n){
	for (int i=0; i<n-1 ; i++){
		for (int j=i+1 ; j<n ;j++){
			if (arr[i]>arr[j])
			hoanvi(arr[i],arr[j]);
		}
	}
}
int timkiem(int arr[], int n ,int x){
	for (int i=0 ; i<n ; i++){
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
	nhapmang(array,n);
	xuatmang(array,n);
	// 
	cout<<"sap xep mang theo thu tu tawng dan"<<endl;
	sapxep(array ,n);
	xuatmang(array, n);
	// 
	cout<<"nhap vao gia tri can tim kiem(id hoac ma )"<<endl;
	int vitri;
	int x;
	do{
	cin>>x;
	vitri = timkiem(array, n, x);
	if(vitri == -1){
		cout<<"da nhap sai"<<endl;
	}else{
		cout <<"vi tri can tim "<<vitri<<endl;
	}
}while(vitri == -1);
	return 0;
}
