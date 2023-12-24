#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Masukkan jumlah baris matrix A :";
    cin >> a;

    cout << "Masukkan jumlah kolom matrix A :";
    cin >> b;

    cout << "Masukkan jumlah baris matrix A :";
    cin >> c;

    cout << "Masukkan jumlah kolom matrix A :";
    cin >> d;

    if (a + b != c + d)
    {
        cout << "Matrix tidak bisa dioperasikan!!";
        return 0;
    }

    int A[a][b], B[c][d], C[a][b], max;
    for (int i = 0; i < a; i++)
    {
        cout << "Masukkan array A baris ke-" << i + 1 << endl;
        for (int j = 0; j < b; j++)
        {
            cout << "Masukkan array A kolom ke-" << j + 1 << " : ";
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << "Masukkan array B baris ke-" << i + 1 << endl;
        for (int j = 0; j < b; j++)
        {
            cout << "Masukkan array B kolom ke-" << j + 1 << " : ";
            cin >> B[i][j];
        }
    }
    cout << endl
         << "Matrix A dengan ukuran" << a << "x" << b << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << A[i][j] << " 	";
        }
        cout << endl;
    }
    cout << endl
         << "Array B dengan ukuran" << a << "x" << b << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << B[i][j] << " 	";
        }
        cout << endl;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << endl
         << "Array C dengan ukuran" << a << "x" << b << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << C[i][j] << "	";
        }
        cout << endl;
    }
    // for (int i = 0; i < 3; i++)
    // {
    // 	for (int j = 0; j < 5; j++)
    // 	{
    // 		for (int k = 0; k < 3; k++)
    // 		{
    // 			for (int l = 0; l < 5; l++)
    // 			{
    // 				if (C[i][j] > C[k][l])
    // 				{
    // 					max = C[i][j];
    // 					C[i][j] = C[k][l];
    // 					C[k][l] = max;
    // 				}
    // 			}
    // 		}
    // 	}
    // }
    max = C[0][0];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (C[i][j] > max)
            {
                max = C[i][j];
            }
        }
    }

    cout << endl
         << "nilai max : " << max << endl
         << endl;

    int CT[b][a];

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            CT[i][j] = C[j][i];
        }
    }

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << CT[i][j] << "	";
        }
        cout << endl;
    }

    return 0;
}