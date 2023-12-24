#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a,b,c, D;
	cout<<"Masukkan A : ";
	cin>>a;
	cout<<"Masukkan B : ";
	cin>>b;
	cout<<"Masukkan C : ";
	cin>>c;
	
	D=pow(b,2)-4*a*c;
	
	if(D>=0){
		cout<<"Akar Real : " << D;
	} else {
		cout<<"Akar Imajiner : " << D;
	}
}
