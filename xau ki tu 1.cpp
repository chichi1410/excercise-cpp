#include <bits/stdc++.h>
using namespace std;
//int main(){
//	string s;
//	getline(cin , s);
//	stringstream ss(s);
//	//
//	string word;
//	int n =0;
//	while ( ss >> word ){
//		++n;
//	}
//	cout<< n;
//}
// -------------------------------------------------------------------------------------


// su dung vector dung vector de luu

//   int main (){
//   	string s;
//   	getline(cin , s);
//   	stringstream ss(s);
//   	// 
//   	string word;
//   //	int cnt = 0;
//   	vector<string> v;
//   	while(ss >> word){
//   		v.push_back(word);
//	   }
//	for(int i= 0 ; i<v.size() ; i++){
//		cout<<v[i]<<" ";
//	}
//}

//===================================================================== in ra man dinh chu cuoi cung  va 2 chu cai dau o hoj ddeemj

int main(){
	srand(time(NULL));
		string s;
		getline(cin ,s);
		for(int i=0 ; i<s.size() ; i++){
		//	s[i] = tolower(s[i]); // chuyen chu hoa thanh chu thuong
			s[i] = toupper(s[i]);//chuyen chu thuowng thanh chu hoa
		}
		string n;
		stringstream ss(s);
		vector <string> v;
		while( ss >> n)
		v.push_back(n);
		cout<<v.back();
		for(int i=0 ; i<v.size() -1 ; i++){
			cout<<v[i][0];
		}
		cout<<rand()%99+10<<"@gmail.com";
	return 0;
}

 
