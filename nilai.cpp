#include <iostream>
using namespace std;

int main(){
	float nilai;
	cout<<"Masukkan Nilai : ";
	cin>>nilai;
	
	if(nilai>0){
		if(nilai<86){
		cout<<"Nilai : AB \n" << "Nilai Numerik : 3.5\n" << "Keterangan : Baik Sekali\n";
	} else if(nilai<76) {
		cout<<"Nilai : B \n" << "Nilai Numerik : 3\n" << "Keterangan : Baik\n";
	} else if(nilai<66) {
		cout<<"Nilai : BC \n" << "Nilai Numerik : 2.5\n" << "Keterangan : Cukup Baik\n";
	} else if(nilai<61) {
		cout<<"Nilai : C \n" << "Nilai Numerik : 2\n" << "Keterangan : Cukup\n";
	}else if(nilai<56) {
		cout<<"Nilai : D \n" << "Nilai Numerik : 1\n" << "Keterangan : Kurang\n";
	}else if(nilai<41) {
		cout<<"Nilai : E \n" << "Nilai Numerik : 0\n" << "Keterangan : Kurang Sekali\n";
	} else{
		cout<<"Nilai : A \n" << "Nilai Numerik : 4\n" << "Keterangan : Istimewa\n";
	}
	} else{
		cout<< "Nilai Yang Anda Masukkan Tidak Valid";
	}
}
