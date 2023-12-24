#include <iostream>
using namespace std;

int main(){
	int i, n;
	cout<<"Masukkan Jumlah Deret : ";
	cin>>n;
	int fib[n]={0,1};
	cout<<fib[1]<<" ";
	

	for(i=2; i<=n; i++ ){
		fib[i] = fib[i-2] + fib[i-1];
		cout<<fib[i]<< " ";
	}
}
