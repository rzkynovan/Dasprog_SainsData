#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, n, max;
    int desired;
    max = 1;
    n = 5;
    // float X[n];
    float X[n] = {12, 12, 13, 14, 27};

    cout << "Pengurutan : " << endl;
    cout << "1. Lowest" << endl;
    cout << "2. Highest" << endl;
    cout << "Masukkan pilihan : ";
    cin >> desired;

    for (i = 0; i < n; i++)
    {
        // cout << "Masukkan Array ke-"
        //      << " ";
        // cin >> X[i];
        for (j = 0; j < n; j++)
        {
            switch (desired)
            {
            case 1:
                if (X[j] > X[i])
                {
                    max = X[i];
                    X[i] = X[j];
                    X[j] = max;
                }
                break;
            case 2:
                if (X[j] > X[i])
                {
                    max = X[j];
                    X[j] = X[i];
                    X[i] = max;
                }
            default:
                break;
            }
        }
    }
    // cout << X[0];
    cout << "{";
    for (j = 0; j < n; j++)
    {
        cout << " " << X[j] << " ";
    }
    cout << "}" << endl;

    cout << "Dengan Median : ";
    if (n % 2 == 0)
    {
        cout << (X[(n / 2 - 1)] + X[(n / 2)]) / 2 << endl;
        cout << "Quartil 1 " << fixed << setprecision(2) << X[((n + 2) / 4) - 1] << endl;
        cout << "Quartil 2 " << fixed << setprecision(2) << (X[n / 2 - 1] + X[n / 2]) / 2 << endl;
        cout << "Quartil 3 " << fixed << setprecision(2) << X[((3 * (n + 2)) / 4) - 2] << endl;
    }
    else
    {
        cout << X[(n - 1) / 2] << endl;
        cout << "Quartil 1 " << fixed << setprecision(2) << X[((n + 1) / 4) - 1] << endl;
        cout << "Quartil 2 " << fixed << setprecision(2) << (X[(n - 1) / 2]) << endl;
        cout << "Quartil 3 " << fixed << setprecision(2) << X[((3 * (n + 1)) / 4) - 1] << endl;
    }

    return 0;
}