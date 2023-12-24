#include <iostream>
using namespace std;
int main(){
	
	int p, l, t, volume, luas_permukaan;
	
	cout << "==============================================\n";
	cout << "====== Volumme dan Luas Permukaan Balok ======\n";
	cout << "==============================================\n\n\n";
	
	cout << "Masukkan Panjang : ";
	cin >>p; 
	cout << "Masukkan lebar : ";
	cin >>l;
	cout << "Masukkan tinggi : ";
	cin >>t;
	
	volume = p*l*t; //rumus volume
	luas_permukaan = 2*(p*l+p*t+l*t); //rumus luas permukaan
	
	cout << "\nVolume Balok : " << volume;
	cout << "\nLuas Permukaan : " << luas_permukaan;
	
	return 0;
}
