#include <iostream>
using namespace std;
int main(){
	int month, day;
	cout<<"enter month: "<<endl;
	cin>>month;
	switch(month){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			day = 30;
			break;
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		    day = 31;
		    break;
		default:
			day = 28;
		}
	cout << day;
	
	return 0;
}
