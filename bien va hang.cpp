#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	// gan bien
const double speed_of_sound{343};
const double speed_of_light{299792};
const double speed_of_human{0.5};
// goi bien
cout<<"speed rankings"<<endl;
cout<<setw(6)<<left<<"top";
cout<<setw(20)<<left<<"speed";
cout<<setw(40)<<left<<"don vi tinh";
cout<<setw(0)<<right<<"name"<<endl;
//
cout << setfill('-');
cout<<setw(90)<<"_"<<endl;
cout << setfill(' '); 
//
cout <<setw(6)<<left<<"1";
cout <<setw(20)<<left<<speed_of_light;
cout <<setw(40)<<left<<"km/s";
cout<<setw(30)<<left<<"speed 0f light"<<endl;
cout <<setw(6)<<left<<"2";
cout <<setw(20)<<left<<speed_of_sound;
cout <<setw(40)<<left<<"km/s";
cout<<setw(30)<<left<<"speed 0f sound"<<endl;
cout <<setw(6)<<left<<"3";
cout <<setw(20)<<left<<speed_of_human;
cout <<setw(40)<<left<<"km/s";
cout<<setw(30)<<left<<"speed 0f human"<<endl;

//cout<<"van toc am thanh bang : "<<speed_of_sound<<"km/s"<<endl;
//cout<<"van toc anh sang bang : "<<speed_of_light<<"km/s";
return 0;
}
