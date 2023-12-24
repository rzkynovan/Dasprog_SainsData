#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	const float gaji=3500000;
	float bonus,total_gaji;
	int umur;
	string nama;
	
	cout<<"================================================ \n";
	cout<<"|| Menghitung Gaji Pekerja Bangunan Danau ITS || \n";
	cout<<"================================================ \n\n";
	
	cout<<"Masukkan Nama : ";
	getline(cin, nama);
	cout<<"Masukkan Umur : ";
	cin>>umur;
	if(umur>0){
		if (umur>=19 && umur<=29){
			bonus=0.1;
		} else if (umur>=30 && umur<=40){
			bonus=0.2;
		} else if (umur>=41 && umur<=51){
			bonus=0.35;
		} else if (umur>=52 && umur<=62){
			bonus=0.5;
		} else {
		cout<<"Umur tidak valid!";
		}
	} else {
		cout<<"Operasi Tidak Valid!";
	}
		
	bonus=gaji*bonus;
	total_gaji=gaji+bonus;
	
	cout<<"Total gaji anda adalah : Rp. " << fixed << setprecision(2) << total_gaji;
	
}
