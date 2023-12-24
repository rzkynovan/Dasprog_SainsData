#include <iostream>
using namespace std;
double calculatemean1(int nilaiindex);
double calculatemean2(int mahasiswaindex);
struct mahasiswa
{
    string nama;
    string nrp;
    int nilai1;
    int nilai2;
    int nilai3;
} mhs[3];

int main()
{
    int i;

    for (i = 0; i < 3; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Input Nama\t: ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << "Input NRP\t: ";
        getline(cin, mhs[i].nrp);
        cout << "Input Nilai MK-1\t: ";
        cin >> mhs[i].nilai1;
        cout << "Input Nilai MK-2\t: ";
        cin >> mhs[i].nilai2;
        cout << "Input Nilai MK-3\t: ";
        cin >> mhs[i].nilai3;
    }

    cout << "\n----- Hasil Perhitungan -----" << endl;
    for (i = 0; i < 3; i++) // print information
    {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama\t\t: " << mhs[i].nama << endl;
        cout << "NRP\t\t: " << mhs[i].nrp << endl;
        cout << "Nilai MK-1\t: " << mhs[i].nilai1 << endl;
        cout << "Nilai MK-2\t: " << mhs[i].nilai2 << endl;
        cout << "Nilai MK-3\t: " << mhs[i].nilai3 << endl;
    }

    cout << endl
         << "Nilai rata rata tiap mata kuliah" << endl;
    for (int i = 1; i <= 3; i++)
    {
        cout << "MK-" << i << "\t: " << calculatemean1(i) << endl;
    }

    cout << "\nNilai rata rata tiap mahasiswa" << endl;
    for (int k = 0; k < 3; k++)
    {
        cout << "Mahasiswa ke-" << k + 1 << "\t: " << calculatemean2(k) << endl;
    }

    return 0;
}

double calculatemean1(int nilaiindex)
{
    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        if (nilaiindex == 1)
            sum += mhs[i].nilai1;
        else if (nilaiindex == 2)
            sum += mhs[i].nilai2;
        else if (nilaiindex == 3)
            sum += mhs[i].nilai3;
    }
    return sum / 3.0;
}

double calculatemean2(int mahasiswaindex)
{
    double sum = mhs[mahasiswaindex].nilai1 + mhs[mahasiswaindex].nilai2 + mhs[mahasiswaindex].nilai3;

    return sum / 3.0;
}