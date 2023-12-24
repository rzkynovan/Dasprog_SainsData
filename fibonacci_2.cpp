#include <iostream>
using namespace std;

int main(){
	int i, n, a, fib, fib1;
	cout<<"Masukkan Jumlah Deret : ";
	cin>>n;
	fib1 = 1;
	
//	Print Fibonacci pertama
	cout<<fib1<<" ";
	
	a=0;

	for(i=2; i<=n; i++ ){
		fib = fib1 + a;
		a = fib1;
		fib1 = fib;
		cout<<fib<< " ";
	}
}
