#include <iostream>
using namespace std;
int main(){
	
	string yourname;
	int day, total_gaji;
	const int gaji = 150000;
	
	cout << "====================================\n";
	cout << "======= GAJI + BONUS PEKERJA =======\n";
	cout << "====================================\n\n\n";
	
	cout << "Nama pekerja : ";
	getline(cin,yourname);
	cout << "Hari bekerja : "; cin >> day; "hari";
	total_gaji = day*(gaji*120/100);
	cout << "Total Gaji : Rp. " << total_gaji;
	
	return 0;
}
