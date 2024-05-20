#include <iostream>
#include <string>
using namespace std;
int s_bien_tinh(){// su dung return nho khai bao int ko dung void
	static int s_bien(0);
	++s_bien;
	return s_bien;
	}
//int main(){
//	s_bien_tinh();
//	s_bien_tinh();
//	s_bien_tinh();
//	return 0;
//	}
int main(){
	int nid1 = s_bien_tinh ();
	string name("nguyen");
	int nid2 = s_bien_tinh();
	string name1("dai");
	int nid3 = s_bien_tinh();
	string name2("hoa");
	cout<<"id:"<<nid1  <<name<<endl;
	cout<<"id:"<<nid2  <<name1<<endl;
	cout<<"id:"<<nid3  <<name2<<endl;
	return 0;
	}
