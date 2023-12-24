#include <iostream>
using namespace std;
int x;
double s, p, l, a, t, r;

// Kubus balok limas bola
double persegi(double s)
{
    double luas;
    cout << "Luas Persegi : ";
    luas = s * s;
    return luas;
}
double persegiPanjang(double p, double l)
{
    double luas;
    cout << "Luas Persegi Panjang : ";
    luas = p * l;
    return luas;
}
double segitiga(double a, double t)
{
    double luas;
    cout << "Luas Segitiga : ";
    luas = (a * t) / 2;
    return luas;
}
double lingkaran(double r)
{
    double luas;
    const double phi = 3.14;
    cout << "Luas Lingkaran : ";
    luas = phi * r * r;
    return luas;
}

int main()
{
    cout << "Masukkan pilihan anda : " << endl;
    cout << "1. Persegi " << endl;
    cout << "2. Persegi Panjang " << endl;
    cout << "3. Segitiga " << endl;
    cout << "4. Lingkaran " << endl;
    cout << "Pilihan : ";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Masukkan panjang sisi : ";
        cin >> s;
        cout << persegi(s);
        break;
    case 2:
        cout << "Masukkan panjang : ";
        cin >> p;
        cout << "Masukkan lebar : ";
        cin >> l;
        cout << persegiPanjang(p, l);
    case 3:
        cout << "Masukkan alas : ";
        cin >> a;
        cout << "Masukkan tinggi : ";
        cin >> t;
        cout << segitiga(a, t);
    case 4:
        cout << "Masukkan jari-jari : ";
        cin >> r;
        cout << lingkaran(r);
    default:
        cout << "Operasi tidak valid!";
        break;
    }
    return 0;
}