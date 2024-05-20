#include <iostream>
#include <cstdlib>
#include <ctime>
#define ROW 100
#define COL 100
using namespace std;
void nhapmang(int arr[][COL] , int &m , int &n){
	srand(time(NULL));
	cout<<"nhap vao so hang: "<<endl;
	cin>>m;
	cout<<"nhap vao so cot: "<<endl;
	cin>>n;
	for (int i=0 ; i< m ; i++){
		for(int j=0; j<n ; j++){
			arr[i][j] = rand()%100;
		}
	}
}
void xuatmang(int arr[][COL] , int &m , int &n){
	for (int i=0 ; i<m ; i++){
		for (int j = 0 ; j<n ; j++){
			cout<<arr[i][j] <<"\t";
		}
		cout<<endl;
	}
}
int main(){
	int array[ROW][COL];
	int m , n;
	nhapmang(array , m ,n);
	xuatmang(array ,m,n);
}
