#include <iostream>
using namespace std;
int main()
{
    int max, n, j, i;

    cout << "Masukkan ukuran array : ";
    cin >> n;

    float X[n];

    for (j = 0; j < n; j++)
    {
        cout << "Masukkan data array ke-" << j << " : ";
        cin >> X[j];
    }

    for (j = 0; j < n; j++)
    {

        for (i = 0; i < n; i++)
        {
            if (X[i] < X[j])
            {
                max = X[i];
                X[i] = X[j];
                X[j] = max;
            }
        }
    }

    cout << "Urutan array dari yang terbesar adalah :\n"
         << " {";
    for (i = 0; i < n; i++)
    {
        cout << X[i] << ", ";
    }

    cout << "}";

    cout << "\nDengan median adalah : ";

    if (n % 2 == !0)
    {
        cout << (X[(n - 1) / 2]);
    }
    else
    {
        cout << (X[n / 2 - 1] + X[n / 2]) / 2;
    }

    return 0;
}