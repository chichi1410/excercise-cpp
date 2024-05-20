#include <iostream>
#define ROW 5
#define COL 10
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int a[ROW][COL] {};
	for ( int i=0 ; i<ROW ; i++){
		for(int j=0 ; j<COL ; j++){
			a[i][j] = rand() % 100;
			cout << a[i][j] << "\t";
		}
		cout<<endl;
	}
}


