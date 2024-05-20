#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
int array[4] = { 5, 7, 8,9};
cout<<typeid(array).name<<endl;
cout<<sizeof(array)<<endl;

int *ptr = array;
 cout<<typeid(ptr).name<<endl;
 cout<<sizeof(ptr)<<endl;
 system('pause'); 
 return 0;
}
