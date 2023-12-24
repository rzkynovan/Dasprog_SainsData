#include <iostream>
using namespace std;

int main(){
	
	int jk,jr;
	string nama, jenisKelamin, jenisRambut;
	
	cout <<"Siapa Namamu? : ";
	getline(cin,nama);
	cout <<"Apa jenis kelaminmu? : \n1. Laki-laki\n2. Perempuan \nPilihan: ";
	cin >> jk;
	cout <<"Apa jenis rambutmu? : \n1. Ikal dan Panjang\n2. Ikal dan Pendek\n3. Lurus dan Panjang\n4. Lurus dan Pendek \nPilihan: ";
	cin >> jr;

	switch(jk){
		case 1:
			jenisKelamin="Laki-Laki";
			
			break;
		case 2:
			jenisKelamin="Perempuan";
			
			break;
		
		default:
			cout <<"Input tidak valid! ";
			
			
	}
	

	switch(jr){
		case 1:
		jenisRambut="Ikal dan Panjang";
			break;
			case 2:
		jenisRambut="Ikal dan Pendek";
			break;
			case 3:
		jenisRambut="Lurus dan Panjang";
			break;
			case 4:
		jenisRambut="Lurus dan Pendek";
			break;
			
		default:
			cout <<"Input tidak valid! ";
	}
	
	cout <<"Nama : " << nama;
	cout<< "\nJenis Kelamin : " << jenisKelamin;
	cout<< "\nJenis Rambut : " << jenisRambut;
}
	
