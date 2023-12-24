#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	float bb, tb, bmi;
	
	cout << "==================================\n";
	cout << "======== Body Mass Index =========\n";
	cout << "==================================\n\n\n";
	
	cout << "Masukkan Berat Badan : ";
	cin >> bb; 
	cout << "Masukkan Tinggi Badan : ";
	cin >> tb;
	if (tb>4){
		tb=tb/100;
	}
	bmi = bb/pow(tb,2);
	
	cout << "Body Mass Index : " << bmi;
	return 0;
}
