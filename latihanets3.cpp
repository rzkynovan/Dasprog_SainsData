#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double sum, mean, pembilang, stdev;
    double array[] = {12, 32, 54, 23, 34};
    int i, data, n = sizeof(array) / sizeof(array[0]);
    cout << "Masukkan opsi : " << endl;
    cout << "1. Data Sampel" << endl;
    cout << "2. Data Populasi" << endl;
    cin >> data;

    sum = 0, pembilang = 0;
    switch (data)
    {
    case 2:
        for (i = 0; i < n; i++)
        {
            sum = sum + array[i];
        }
        mean = sum / n;

        for (i = 0; i < n; i++)
        {
            pembilang = pembilang + ((array[i] - mean) * (array[i] - mean));
        }

        stdev = sqrt(pembilang / n);
        break;
    case 1:
        for (i = 0; i < n; i++)
        {
            sum = sum + array[i];
        }
        mean = sum / (n - 1);

        for (i = 0; i < n; i++)
        {
            pembilang = pembilang + ((array[i] - mean) * (array[i] - mean));
        }

        stdev = sqrt(pembilang / (n - 1));
    default:
        break;
    }
    cout << stdev;
    return 0;
}