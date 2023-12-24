#include <iostream>
using namespace std;

int main(){
	
	float x, sum, pemangkatan;
	int i, n;
	pemangkatan = 1;
	sum = 0;

	cout << "Banyaknya deret : ";
	cin>>n;
	cout << "Nilai x : ";
	cin>>x;
	cout << "Deret : ";

	
	for(i=1; i<=n; i++){
		cout << pemangkatan << " ";
		sum = sum+ pemangkatan;
		pemangkatan = pemangkatan * x;
	}
	
	cout << "\nHasil penjumlahan deret : " << sum;
	
}
