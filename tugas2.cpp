#include<iostream>
using namespace std;
int main(){
	float p,l,t,v,lp;
	cout<<"================================================ \n";
	cout<<"|| Menghitung Volume dan Luas Permukaan Balok || \n";
	cout<<"================================================ \n\n";
	
	cout<<"Masukkan panjang : ";
	cin>>p;
	cout<<"Masukkan lebar : ";
	cin>>l;
	cout<<"Masukkan tinggi : ";
	cin>>t;
	v=p*l*t;
	lp=2*(p*l + p*t + l*t);
	cout<<"Volume balok adalah : " << v << "\nLuas permukaan balok adalah : " << lp;
	
}
