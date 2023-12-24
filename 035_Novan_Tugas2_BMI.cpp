#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float tb,bb,bmi;
	cout<<"================================\n";
	cout<<"|| Menghitung Body Mass Index || \n";
	cout<<"================================\n\n";

	cout<<"Masukkan Tinggi Badan (CM/M) : ";
	cin>>tb;
	cout<<"Masukkan Berat Badan (KG) : ";
	cin>>bb;
	if(tb>0 && bb>0){
		if(tb>5){
			tb=tb/100;
		}
		bmi=bb/pow(tb,2);
		cout<<"\nMasukkan Body Mass Index Kamu adalah : " << bmi << endl;
		cout<<"Status : ";
		if(bmi<18.5){
			cout<<"Kekurangan Berat Badan";
		}else if(bmi>=18.5 && bmi<=24.9){
			cout<<"Normal (Ideal)";
		}else if(bmi>=25 && bmi<=29.9){
			cout<<"Kelebihan Berat Badan";
		}else{
			cout<<"Kegemukan (Obesitas)";
		}
	} else{
		cout<<"Operasi Tidak Valid!";
	}
}
