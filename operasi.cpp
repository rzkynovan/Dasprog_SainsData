#include <iostream>
using namespace std;

int main(){
	
	int bil1,bil2, hasil;
	string operasi;
	
	cout <<"Masukkan Bilangan Pertama : ";
	cin >> bil1;
	cout <<"Masukkan Bilangan Kedua : ";
	cin >> bil2;
	cout <<"Masukkan Operasi Matematika (+, -, *, /) : ";
	cin >> operasi;
	if(operasi == "+"){
		hasil=bil1+bil2;
	}else if(operasi == "-"){
		hasil=bil1-bil2;	
	}
	else if(operasi == "*"){
		hasil=bil1*bil2;	
	}
	else if(operasi == "/"){
		hasil=bil1/bil2;
	}
	else{
		cout <<"Operasi tidak valid! ";
		return 0;
	}
	
	
	cout <<"Hail Operasi : " << hasil;
	}
	
