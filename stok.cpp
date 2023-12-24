#include <iostream>
using namespace std;

int main(){
	
	int order;
	const int stok = 5;
	
	cout <<"Masukkan Permintaan barang anda : ";
	cin >> order;
	if(order<=stok){
		cout <<"STOK BARANG TERSEDIA untuk permintaan sebanyak " << order <<" barang";
	}
	
}
