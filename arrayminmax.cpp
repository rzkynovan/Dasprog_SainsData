#include <iostream>
using namespace std;
int main()
{
    int a, max, res, n, j, i;

    cout << "Masukkan ukuran array : ";
    cin >> n;
    int X[n];
    a = 0;

    cout << "Masukkan data array-1 : \n";
    for (j = 0; j < n; j++)
    {
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

    return 0;
}