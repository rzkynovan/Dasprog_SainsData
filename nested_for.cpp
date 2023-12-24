#include <iostream>
using namespace std;

int main(){
	
	float x, sum, pemangkatan, pembagi, ans;
	int i, n;
	pemangkatan = 1, pembagi = 1, ans = 1, sum = 0;

	cout<<"Masukkan Nilai N : ";
	cin>>n;
	cout<<"Masukkan Nilai X : ";
	cin>>x;

	// n = 10;
	// x = 3;
	
	if (n>0)
	{
		for(i=1; i<=n; i++){
		cout << ans << " ";
		sum += ans;
		pemangkatan = pemangkatan * x;
		ans=pemangkatan/pembagi;
		pembagi *= i+1;
		
		} 
	} else {
		cout<<"Operasi tidak valid!";
	}
	
	cout << "\nHasil penjumlahan deret : " << sum;
	
}

