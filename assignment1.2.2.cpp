
#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAX 100
using namespace std;
    void nhapmang(int arr[] , int &n){
		srand(time(NULL));
		cout<<"nhap vao gia tri cua mang: ";
		cin>>n;
		for(int i=0 ; i<n ; i++){
			arr[i]= rand()%100+1;
		}
    }
    void xuatmang(int arr[], int &n){
    	for(int i=0 ; i<n  ; i++){
    		cout<<"id["<<i<<"] = "<<arr[i]<<endl;
		}
	}
	void hoanvi(int &a , int&b){
		int temp =a ;
		a=b;
		b=temp;
	}
	void sapxep(int arr[] , int n){
		for(int i=0 ; i<n-1 ;i++){
			for(int j=i+1 ; j<n ; j++){
				if(arr[i]>arr[j])
				    hoanvi(arr[i],arr[j]);
			}
		}
	}
	int timkiem(int arr[],int n, int x){
		for(int i=0 ;i<n; i++){
			if(arr[i] == x)
			return i;
	        if(i == x)
			return arr[i];
		}
	return -1;	
	}
int main(){
	int array[100];
	int size;
	nhapmang(array, size);		
	xuatmang(array, size);
	//sapxep mang
	cout<<"sap xep tu be den lon"<<endl;
	sapxep(array , size);
	xuatmang(array, size);
	//tim kiem mang
	cout<<"nhap gia tri can tiem kiem"<<endl;
	int timkiemm;
	int x;
	cin>>x;
	timkiemm = timkiem(array,size,x);
	if(timkiemm == -1){
		cout<<"da nhap sai"<<endl;
	}else 
	cout <<"vi tri: "<<timkiemm<<endl;
}
