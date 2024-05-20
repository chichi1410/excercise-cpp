#include <iostream>
#include <string>
using namespace std;
struct connguoi{
	connguoi(string ht ,int t, float v1 , float cc){
		tuoi = t;
		vong1 = v1;
		chieucao = cc;
		hoten = ht;
	}
	string hoten;
	int tuoi;
	float vong1;
	float chieucao;
};
int main(){
//   connguoi thao(22,99,1.6);
//   connguoi binh(20,98,1.65);
//   connguoi linh(21,77,1.5);
//   connguoi *bo_nhi = NULL;
//   bo_nhi = &thao;
//   thao.tuoi = 100;
//   cout<<(*bo_nhi).tuoi;

// su dung con tro trong mang
connguoi hoiphunu[4]{
	connguoi("thao",22,99,1.6),
	connguoi("binh",20,98,1.65),
    connguoi("lan",21,77,1.5),
    connguoi("linh",21,77,1.5)
};
connguoi *bo_nhi = NULL; 
for ( bo_nhi = hoiphunu; bo_nhi < hoiphunu +4  ; bo_nhi++){
	cout<<(*bo_nhi).hoten;
}

}
