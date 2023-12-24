#include <iostream>
#include <iomanip>
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
            if (X[i] > X[j])
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
        cout << (X[(n - 1) / 2]) << endl;

        cout << "Quartil 1 " << fixed << setprecision(2) << X[((n + 1) / 4) - 1] << endl;
        cout << "Quartil 2 " << fixed << setprecision(2) << (X[(n - 1) / 2]) << endl;
        cout << "Quartil 3 " << fixed << setprecision(2) << X[((3 * (n + 1)) / 4) - 1] << endl;
    }
    else
    {
        cout << (X[n / 2 - 1] + X[n / 2]) / 2 << endl;

        cout << "Quartil 1 " << fixed << setprecision(2) << X[((n + 2) / 4) - 1] << endl;
        cout << "Quartil 2 " << fixed << setprecision(2) << (X[n / 2 - 1] + X[n / 2]) / 2 << endl;
        cout << "Quartil 3 " << fixed << setprecision(2) << X[((3 * (n + 2)) / 4) - 2] << endl;
    }

    return 0;
}