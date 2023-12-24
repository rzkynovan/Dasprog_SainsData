#include<iostream>
using namespace std;
int main(){
	const int gaji_harian = 150000;
	int hari_bekerja,gaji,total_bonus,total_gaji;
	string nama;
	
	
	cout<<"================================================ \n";
	cout<<"|| Menghitung Gaji Pekerja Bangunan Danau ITS || \n";
	cout<<"================================================ \n\n";
	
	cout<<"Masukkan Nama : ";
	getline(cin, nama);
	cout<<"\n";
	cout<<"Berapa hari anda bekerja? : ";
	cin>>hari_bekerja;
	cout<<"\n";
	gaji=gaji_harian*hari_bekerja;
	total_bonus=20*gaji/100;
	total_gaji=gaji+total_bonus;
	
	cout<<"Total gaji anda adalah : Rp. " << total_gaji;
	
}
