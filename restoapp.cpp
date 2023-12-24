#include <iostream>
using namespace std;

int main(){
	
	int jenis,menu;
	string nama, jenisMakanan, jenisMenu;
	
	cout <<"Siapa Namamu? : ";
	getline(cin,nama);
	cout <<"Pilih Jenis Makanan : \n1. Appetizer\n2. Main Course\n3. Dessert \nPilihan: ";
	cin >> jenis;
	
	switch(jenis){
		case 1:
			cout<<"Pilihan Appetizer : "<< endl;
			cout<<"1. Salad"<<endl;
			cout<<"2. Sup"<<endl;
			cout<<"3. Bruschetta"<<endl;
			jenisMakanan="Appetizer";
			cout <<"Pilih Menumu : ";
			cin >> menu;			
			
			switch(menu){
				case 1:
				jenisMenu="Salad";
				break;
				case 2:
				jenisMenu="Sup";
				break;
				case 3:
				jenisMenu="Bruschetta";
				break;
				
				default:
					cout<<"Input tidak valid";					
			}
			
			break;
		case 2:
			cout<<"Pilihan Main Course : "<< endl;
			cout<<"1. Steak"<<endl;
			cout<<"2. Pasta"<<endl;
			cout<<"3. Ayam Goreng"<<endl;
			jenisMakanan="Main Course";
			cout <<"Pilih Menumu : ";
			cin >> menu;	
			
			switch(menu){
				case 1:
				jenisMenu="Steak";
				break;
				case 2:
				jenisMenu="Pasta";
				break;
				case 3:
				jenisMenu="Ayam Goreng";
				break;
				
				default:
					cout<<"Input tidak valid";					
			}
			break;
		case 3:
			cout<<"Pilihan Dessert : "<< endl;
			cout<<"1. Puding"<<endl;
			cout<<"2. Jelly"<<endl;
			cout<<"3. Cokelat"<<endl;
			jenisMakanan="Dessert";
			cout <<"Pilih Menumu : ";
			cin >> menu;	
			
				switch(menu){
				case 1:
				jenisMenu="Puding";
				break;
				case 2:
				jenisMenu="Jelly";
				break;
				case 3:
				jenisMenu="Cokelat";
				break;
				
				default:
					cout<<"Input tidak valid";					
			}
			break;
			
		default:
			cout<<"Input tidak valid!";
	}



	
	cout <<"Nama : " << nama;
	cout<< "\nJenis Makanan : " << jenisMakanan;
	cout<< "\nJenis Menu : " << jenisMenu;
}
	
