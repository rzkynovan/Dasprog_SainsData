#include <iostream>
using namespace std;

int main(){
	
	int m,h,b;
	
	
	cout <<"Masukkan nilai komponen warna merah : ";
	cin >> m;
	cout <<"Masukkan nilai komponen warna hijau : ";
	cin >> h;
	cout <<"Masukkan nilai komponen warna biru : ";
	cin >> b;
	//	&& = ,	
	if(m>b && m>h){
		cout <<"Warna dasar kombinasi warna tersebut adalah Merah";
	} else if(b>m && b>h){
		cout <<"Warna dasar kombinasi warna tersebut adalah Biru";
	} else if(h>m && h>b){
		cout <<"Warna dasar kombinasi warna tersebut adalah Hijau";
	} else if(h==m && h==b){
		cout <<"Warna dasar kombinasi warna tersebut adalah Abu-abu";
	} else {
			cout <<"Warna dasar adalah kombinasi warna";
	}
	return 0;
	
}
