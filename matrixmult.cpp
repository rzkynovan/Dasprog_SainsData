#include <iostream>
using namespace std;
int main()
{

    int i, j, k, l;
    cout << "masukkan jumlah kolom matrix A : ";
    cin >> i;
    cout << "Masukkan jumlah baris matrix A : ";
    cin >> j;
    cout << "Masukkan jumlah kolom matrix B : ";
    cin >> l;
    cout << "Masukkan jumlah baris matrix B : ";
    cin >> k;

    if (j != l)
    {
        cout << "Matrix tidak bisa dioperasikan!";
        return 0;
    }
    int A[i][j], B[j][k], C[i][k] = {0};
    for (int a = 0; a < i; a++)
    {
        cout << "array A kolom ke " << a + 1 << endl;
        for (int b = 0; b < j; b++)
        {
            cout << "Masukkan array A baris ke " << b + 1 << " : ";
            cin >> A[a][b];
        }
    }
    cout << endl;
    cout << "Array A dengan ukuran" << i << " x " << j << " adalah ";
    for (int a = 0; a < i; a++)
    {
        cout << endl;
        for (int b = 0; b < j; b++)
        {
            cout << A[a][b] << " ";
        }
    }
    cout << endl
         << endl;
    for (int a = 0; a < j; a++)
    {
        cout << "array B kolom ke " << a + 1 << endl;
        for (int b = 0; b < k; b++)
        {
            cout << "Masukkan array B baris ke " << b + 1 << " : ";
            cin >> B[a][b];
        }
    }

    cout << endl;
    cout << "Array B dengan ukuran" << j << " x " << k << " adalah ";
    for (int a = 0; a < j; a++)
    {
        cout << endl;
        for (int b = 0; b < k; b++)
        {
            cout << B[a][b] << " ";
        }
    }

    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < k; b++)
        {
            for (int c = 0; c < j; c++)
            {
                C[a][b] = C[a][b] + A[a][c] * B[c][b];
            }
        }
    }
    cout << endl
         << endl;
    cout << "Matrix C dengan ukuran " << i << " x " << k << " adalah ";
    for (int a = 0; a < i; a++)
    {
        cout << endl;
        for (int b = 0; b < k; b++)
        {
            cout << C[a][b] << " ";
        }
    }

    return 0;
}