#include <iostream>
#include <ctime>
#include <cstdlib>
#define ROW 100
#define COL 100
using namespace std;
void nhapmang(int arr[ROW][COL],int &m, int &n){
	srand(time(NULL));
	cout <<"nhap so hang: "<<endl;
	cin>>m;
	cout <<"nhap so cot: "<<endl;
	cin>>n;
	for(int i=0 ; i<m ;i++){
		for(int j=0 ; j<n ; j++){
			arr[i][j] = rand()%100;

		}
	}
}
void xuatmang(int arr[ROW][COL], int m , int n){
	for (int i=0 ; i<m ; i++){
		for (int j=0 ; j<n ; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int main(){
	int array[ROW][COL];
	int row,col;
	nhapmang(array,row, col);
	xuatmang(array ,row,col);
	return 0;
}
