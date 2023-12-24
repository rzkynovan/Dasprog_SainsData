#include <iostream>
using namespace std;

int main(){
	float tugas,kuis,ets,eas, total;
	string nama, nrp;
	
	cout<<"Masukkan Nama : ";
	getline(cin, nama);
	cout<<"Masukkan NRP : ";
	cin>>nrp;
	cout<<"Masukkan Nilai Tugas : ";
	cin>>tugas;
	cout<<"Masukkan Nilai Kuis : ";
	cin>>kuis;
	cout<<"Masukkan Nilai ETS : ";
	cin>>ets;
	cout<<"Masukkan Nilai EAS : ";
	cin>>eas;
	tugas=tugas*20/100;
	kuis=kuis*25/100;
	ets=ets*25/100;
	eas=eas*30/100;
	
	total=tugas+kuis+ets+eas;
	
	
	if(total>56){
		cout<<"Selamat Anda Lulus \n\ndengan kumulatif nilai : " << total;
	} else {
		cout<<"Anda Tidak Lulus";
	}
}
