#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;

    cout << "Masukkan panjang array : ";
    cin >> n;
    float X[n], max;
    max = X[0];
    for (i = 0; i < n; i++)
    {
        cout << "Masukkan array ke-" << i + 1 << ": ";
        cin >> X[i];

        for (j = 0; j < n; j++)
        {
            if (X[j] > X[i])
            {
                max = X[j];
                X[j] = X[i];
                X[i] = max;
            }
        }
    }

    cout << "Urutan Array dari yang terkecil : " << endl
         << "{ ";
    for (i = 0; i < n; i++)
    {
        cout << X[i] << " ";
    }

    cout << "}" << endl;

    cout << "array terkecil adalah : " << X[0] << endl;
    cout << "array terbesar adalah : " << X[n - 1] << endl;

    if (n % 2 == 0)
    {
        cout << "Dengan median : " << (X[(n / 2) - 1] + X[n / 2]) / 2 << endl;
        cout << "Quartil 1 : " << X[((n + 2) / 4) - 1] << endl;
        cout << "Quartil 2 : " << (X[(n / 2) - 1] + X[n / 2]) / 2 << endl;
        cout << "Quartil 3 : " << (X[(3 * (n + 2) / 4) - 2]) << endl;
    }
    else
    {
        cout << "Dengan median : " << X[(n - 1) / 2] << endl;
        cout << "Quartil 1 : " << X[((n + 1) / 4) - 1] << endl;
        cout << "Quartil 2 : " << (X[(n / 2) - 1] + X[n / 2]) / 2 << endl;
        cout << "Quartil 3 : " << (X[(3 * (n + 1) / 4) - 2]) << endl;
    }

    return 0;
}