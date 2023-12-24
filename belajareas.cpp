#include <iostream>
#include <fstream>
using namespace std;

string t = ",";

struct Nilai
{
    float quiz1, ets, quiz2, eas;
};

struct Mahasiswa
{
    string nama, nrp;
    Nilai nilai;
};

void printMahasiswa(Mahasiswa *mahasiswa, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << mahasiswa[i].nama << mahasiswa[i].nrp << mahasiswa[i].nilai.quiz1 << mahasiswa[i].nilai.ets << mahasiswa[i].nilai.quiz2 << mahasiswa[i].nilai.eas;
    }
}

void inputData(Mahasiswa *mahasiswa, int);
double countMean(int, int);
int main()
{
    int N;
    ofstream createfile("belajareas.csv");
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> N;
    Mahasiswa mahasiswa[N];
    cout << "\t\t\t"
         << "Nama\t"
         << "NRP\t"
         << "Quiz 2\t"
         << "ETS\t"
         << "Quiz 2\t"
         << "EAS\t" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "Data Mahasiswa ke-" << i + 1 << " : ";
        cin >> mahasiswa[i].nama >> mahasiswa[i].nrp >> mahasiswa[i].nilai.quiz1 >> mahasiswa[i].nilai.ets >> mahasiswa[i].nilai.quiz2 >> mahasiswa[i].nilai.eas;
    }
    // double mean[N] = {0};
    // for (int i = 0; i < N; i++)
    // {

    //     mean[i] = (mahasiswa[i].nilai.quiz1 + mahasiswa[i].nilai.ets + mahasiswa[i].nilai.quiz2 + mahasiswa[i].nilai.eas) / 4;
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     cout << mean[i] << endl;
    // }
    for (int i = 0; i < N; i++)
    {
        cout << countMean(i, N) << endl;
    }

    inputData(mahasiswa, N);

    return 0;
}

void inputData(Mahasiswa *mahasiswa, int N)
{
    ofstream outfile("belajareas.csv");
    outfile << "Nama" << t
            << "Nrp" << t
            << "Quiz 1" << t
            << "ETS" << t
            << "Quiz 2" << t
            << "EAS" << t
            << "Rata-rata" << endl;

    for (int i = 0; i < N; i++)
    {
        outfile << mahasiswa[i].nama << t
                << mahasiswa[i].nrp << t
                << mahasiswa[i].nilai.quiz1 << t
                << mahasiswa[i].nilai.ets << t
                << mahasiswa[i].nilai.quiz2 << t
                << mahasiswa[i].nilai.eas << endl;
    }
}
// double countMean(int index, int N)
// {
//     Mahasiswa mahasiswa[N];
//     // double mean[N] = {0};
//     double mean[index] = (mahasiswa[index].nilai.quiz1 + mahasiswa[index].nilai.ets + mahasiswa[index].nilai.quiz2 + mahasiswa[index].nilai.eas) / 4;
//     return mean;
// }
