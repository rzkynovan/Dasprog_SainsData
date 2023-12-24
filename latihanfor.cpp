//Faktorial of n

#include <iostream>
using namespace std;

int main(){
	int i, n, faktorial;
	faktorial=1;
	cout<<"Masukkan angka terakhir : ";
	cin>>n;
	for(i=1; i<=n; i++){
		cout << i << " ";
		faktorial *= i;
	}
	cout << "\nHasil Perkalian : ";
		cout<< faktorial ;
	return 0;
}	

