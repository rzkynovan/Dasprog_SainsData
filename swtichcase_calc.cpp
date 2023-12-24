#include <iostream>
using namespace std;

int main(){
	
	int bil1,bil2, hasil;
	char operasi;
	
	cout <<"Masukkan Bilangan Pertama : ";
	cin >> bil1;
	cout <<"Masukkan Bilangan Kedua : ";
	cin >> bil2;
	cout <<"Masukkan Operasi Matematika (+, -, *, /) : ";
	cin >> operasi;

	switch(operasi){
		case '+':
			hasil=bil1+bil2;
			break;
		case '-':
			hasil=bil1-bil2;
			break;
		case '*':
			hasil=bil1*bil2;
			break;
		case '/':
			hasil=bil1/bil2;
			break;
		default:
			cout <<"Operasi tidak valid! ";
	}
	
	cout <<"Hail Operasi : " << hasil;
}
	
