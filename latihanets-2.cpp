#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, k, l, n;
    n = 5;
    k = 3;
    // float X[k][n];

    float X[k][n] = {
        {10, 13.5, 9, 8.2, 19},
        {12, 143, 14, 15.1, 16},
        {19, 10, 13, 9.1, 20}};

    // for (i = 0; i < k; i++)
    // {
    //     cout << "Masukkan data untuk variabel ke-" << i << endl;

    //     for (j = 0; j < n; j++)
    //     {
    //         cout << "Variabel ke-" << i << ", data ke-" << j << " : ";
    //         cin >> X[i][j];
    //     }
    // }

    cout << "==Cetak 3 Variabel==" << endl;

    for (j = 0; j < n; j++)
    {

        for (i = 0; i < k; i++)
        {
            cout << X[i][j] << setw(5);
        }
        cout << endl;
    }

    return 0;
}