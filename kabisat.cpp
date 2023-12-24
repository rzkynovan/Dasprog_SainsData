#include <iostream>
using namespace std;

int main(){
	
	int tahun;

	
	cout <<"Masukkan Tahun : ";
	cin >> tahun;
	if(tahun%4==0){
		cout <<"Tahun " << tahun <<" Adalah Tahun Kabisat";
	} else{
		cout <<"Tahun " << tahun <<" Adalah Bukan Tahun Kabisat";
	}
	return 0;
	
}
