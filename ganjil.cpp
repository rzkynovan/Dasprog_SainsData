#include <iostream>
using namespace std;

int main(){
	int i;
	cout<<"Masukkan Bilangan : ";
	cin>>i;
	
	if(i%2==0 && i > 0){
		cout<<"Anda memasukkan bilangan genap";
	} else {
		cout<<"Anda Memasukkan bilangan ganjil";
	}
}
