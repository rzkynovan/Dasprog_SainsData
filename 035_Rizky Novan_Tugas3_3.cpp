#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string nama, nrp, huruf;
    float numerik, ips, matkul, totsks, totnum;
    int sks;

    cout << "Masukkan nama : ";
    getline(cin, nama);
    cout << "Masukkan NRP : ";
    cin >> nrp;
    cout << "Masukkan Jumlah Matkul : ";
    cin >> matkul;

    for (int i = 1; i <= matkul; i++)
    {
        cout << "Enter the letter grade ke-" << i << " : ";
        cin >> huruf;
        cout << "Masukkan beban sks mk ke-" << i << " : ";
        cin >> sks;
        if (sks < 0 || sks > 5)
        {
            cout << "Operasi Tidak Valid!";
            return 1;
        }

        if (huruf == "A")
        {
            numerik = 4;
        }
        else if (huruf == "AB")
        {
            numerik = 3.5;
        }
        else if (huruf == "B")
        {
            numerik = 3;
        }
        else if (huruf == "BC")
        {
            numerik = 2.5;
        }
        else if (huruf == "C")
        {
            numerik = 2;
        }
        else if (huruf == "D")
        {
            numerik = 1;
        }
        else if (huruf == "E")
        {
            numerik = 0;
        }
        else
        {
            cout << "Operasi Tidak Valid!";
            return 1;
        }

        totnum += numerik * sks;
        totsks += sks;
    }
    ips = totnum / totsks;
    cout << "Nama" << setw(19) << ": " << nama << endl;
    cout << "NRP" << setw(20) << ": " << nrp << endl;
    cout << "Total SKS" << setw(14) << ": " << totsks << endl;
    cout << "IPS" << setw(20) << ": " << ips << endl;

    return 0;
}