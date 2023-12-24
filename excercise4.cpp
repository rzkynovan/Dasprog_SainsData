#include <iostream>
using namespace std;
double X[10000];
double calSum(double X[], int n);
double calMean(double a, int n);

int main()
{
    int n, i;
    cout << "Masukkan N : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i + 1 << " : ";
        cin >> X[i];
    }
    double jumlah = calSum(X, n);
    cout << "Jumlah : " << jumlah << endl;

    cout << "Dengan Rata-rata : " << calMean(jumlah, n);

    return 0;
}

double calSum(double X[], int n)
{
    double sum;
    for (int i = 0; i < n; i++)
    {
        sum += X[i];
    }
    return sum;
}
double calMean(double a, int n)
{
    double mean = a / n;
    return mean;
}