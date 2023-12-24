#include <iostream>
using namespace std;

struct Produk
{
    string id;
    string nama;
    int harga;
    string id_cust;
    int hargatotal;
} produk[4];

void hitung()
{
    produk[0].id = "051", produk[1].id = "052", produk[2].id = "053", produk[3].id = "054";
    produk[0].nama = "shampoo", produk[1].nama = "sabun", produk[2].nama = "sikat gigi", produk[3].nama = "pasta gigi";
    produk[0].harga = 37000, produk[1].harga = 15500, produk[2].harga = 12990, produk[3].harga = 7350;
    produk[0].id_cust = "101", produk[1].id_cust = "102", produk[2].id_cust = "103";
    produk[0].hargatotal = produk[0].harga + (produk[1].harga * 2);
    produk[1].hargatotal = (produk[1].harga * 2) + (produk[2].harga * 2) + produk[3].harga;
    produk[2].hargatotal = produk[0].harga + produk[3].harga;

    for (int i = 0; i < 3; i++)
    {
        cout << " Total pembelian pelanggan ID " << produk[i].id << " adalah sebesar " << produk[i].hargatotal << " Rupiah." << endl;
    }
}

int main()
{
    hitung();
    return 0;
}
