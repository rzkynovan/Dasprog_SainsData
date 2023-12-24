#include <iostream>
using namespace std;

struct Porduk
{
    string id;
    string nama;
    int harga;
} produk[4];

struct Hist
{
    string id;
    string id_produk;
    int jumlah;
} hist[3];
int main()
{
    produk[0].id = "051", produk[1].id = "052", produk[2].id = "053", produk[3].id = "054";
    produk[0].nama = "shampoo", produk[1].nama = "sabun", produk[2].nama = "sikat gigi", produk[3].nama = "pasta gigi";
    produk[0].harga = 37000, produk[1].harga = 15500, produk[2].harga = 12990, produk[3].harga = 7350;

    hist[0].id = "101", hist[1].id = "102", hist[2].id = "103";

    hist[0].id_produk[0] = "051";
    hist[0].id_produk[1] = "052";
    hist[0].jumlah[0] = 1;
    hist[0].jumlah[1] = 2;

    hist[1].id_produk[0] = "052";
    hist[1].id_produk[1] = "053";
    hist[1].id_produk[2] = "054";
    hist[1].jumlah[0] = 2;
    hist[1].jumlah[1] = 2;
    hist[1].jumlah[2] = 1;

    hist[2].id_produk[0] = "051";
    hist[2].id_produk[1] = "054";
    hist[2].jumlah[0] = 1;
    hist[2].jumlah[1] = 1;

    for (int i = 0; i < 3; i++)
    {
        cout << "Total pembelian pelanggan ID " << hist[i].id;
    }

    return 0;
}
