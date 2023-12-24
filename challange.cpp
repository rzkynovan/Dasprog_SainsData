#include <iostream>
using namespace std;
int main()
{
    int A, B, N, count;
    cout << "Enter number of loops : ";
    cin >> N;

    for (int j = 0; j < N; j++)
    {
        cout << endl
             << "Masukkan nilai A B : ";
        cin >> A >> B;
        for (int i = A; i <= B; i++)
        {
            if (i % 2 == 0 || i % A == 0)
            {
                cout << i << ' ';
            }
            else
            {
                count++;
            }
        }

        cout << endl
             << "Count : " << count;
        count = 0;
    }

    return 0;
}
