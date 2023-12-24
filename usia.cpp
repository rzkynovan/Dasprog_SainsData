#include <iostream>
using namespace std;

int main(){
	
	int usia;
	
	cout <<"Masukkan Usia Anda : ";
	cin >> usia;
	if(usia>0){
		if(usia>=18){
		cout <<"Kategori usia anda adalah dewasa ";
		} else{
			cout <<"Kategori usia anda adalah anak-anak ";
		}
	}
	else{
		cout <<"Usia tidak valid! ";
	}
}
