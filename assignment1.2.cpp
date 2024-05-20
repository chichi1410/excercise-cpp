#include <iostream>
#include <ctime>
#include <cstdlib>
#define MAX 100
using namespace std;
//void hoanvi (int &a , int &b);
	void hoanvi(int &a , int &b)
	{
		int temp =a;
		a = b;
		b = temp;		
	}
	void sapxep(int arr[] ,int n){
	for (int i=0 ; i<n-1 ; i++){
		for (int j=i+1 ; j<n ; j++){
			if(arr[i]>arr[j])
				hoanvi(arr[i],arr[j]);
			}
		}
	}
	void nhapmang(int arr[] , int &n){	
		srand(time(NULL));
		cout<<"nhap vao n"<<endl;
		cin>>n;
		for(int i=0 ; i<n ; i++){
			arr[i] = rand();
		}
	}
	void xuatmang(int arr[] , int &n){
		for(int i=0 ; i<n ; i++){
			cout<<"id:"<<i<<"="<<arr[i]<<endl;
		}
	}
	int timkiem(int arr[], int n , int x){
		for(int i=0 ;i<n; i++){
			if (arr[i] == x)
			return i;
			if(i == x)
			return arr[i];
		}
		return -1;
	}
	void addphantu(int arr[], int &n , int vitri , int x ){
		if (vitri >= 0 &&  vitri <= n){
			for(int i=n ; i>=vitri ; i--)		
			arr[i] = arr[i-1];
			arr[vitri] = x;
			n++;
		}
		cout <<"nhap sai vi tri roif ba"<<endl;		
	}
	void deletephantu(int arr[], int&n, int vitri , int x ){
	 if (vitri >=0 && vitri <= n){
	 	for (int i=vitri ; i< n - 1 ; i++)
	 		arr[i] == arr[i+1];
	 		n--;
		 }
	 }
	
int main(){
		int array[100];
		int size;
		nhapmang(array , size);
		xuatmang(array , size);
		
		cout<<"nhap vao dia chi can tim kiem"<<endl;
		int x;
		cin>>x;
		int vitri;
		vitri = timkiem(array , size ,x);
		if( vitri == -1){
			cout<<"khong tiem thay"<<endl;
		}else{
			cout<<"vi tri"<<vitri<<endl;
		}
        cout<<"sap xep mang "<<endl;
		sapxep(array , size);
		xuatmang(array , size);
		 //
		 cout <<"add phan tu"<<endl;
		 int vitri2;
		 int giatri;
		 cout<<"nhap vao vi tri can chen"<<endl;
		 cin>>vitri;
		 cout<<"nhap vao gia tri can them "<<endl;
		 cin>>giatri;
		 addphantu( array ,size , vitri2 , giatri);
		 deletephantu(array ,size , vitri2, giatri);
	}

