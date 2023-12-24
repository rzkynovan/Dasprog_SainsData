#include <iostream>
using namespace std;

int main(){
	int opsi, n, k, mutasi, kombinasi, pembagi;
	double pembagifac, nfac, kfac;
	nfac=1, pembagi=1, pembagifac=1, kfac=1;

	// Kalau penjumlahan initial value = 0 
	// Kalau perkalian dan faktorial initial value = 1
	
	cout<<"1. Permutasi"<<endl;
	cout<<"2. Kombinasi"<<endl;
	cout<< "Masukkan pilihan saudara : ";
	cin>>opsi;
	
	switch(opsi){
		case 1:
			cout<<"\nMasukkan nilai n : ";
			cin>>n;
			cout<<"Masukkan nilai k : ";
			cin>>k;
			for(int i=1; i<=n; i++){
				nfac=nfac*i;
			}
			pembagi=n-k;
			for(int j=1; j<=pembagi; j++){
				pembagifac = pembagifac * j;
			}
			mutasi=nfac/pembagifac;
			
			cout << n << " permutasi " << k << " adalah : " << mutasi;
			break;
			
		case 2:
			n=15;
			k=5;
			for(int i=1; i<=n; i++){
				nfac*=i;
			}
			pembagi=n-k;
			for(int j=1; j<=pembagi; j++){
				pembagifac *= j;
			}
			for(int l=1; l<=k; l++){
				kfac *= l;
			}
			pembagi=kfac*pembagifac;
			kombinasi=nfac/pembagi;
			cout << n << " kombinasi " << k << " adalah : " << kombinasi;
			break;		
			
		default:
			cout << "Operasi Tidak Valid";
	}
}
