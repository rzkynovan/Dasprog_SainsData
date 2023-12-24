#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Masukkan sampai perkalian ke berapa: ";
    cin >> n;

    cout << "perkalian sampai ke-" << n << endl;

    for (int i = 1; i <= 10; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << setw(5);
            cout << j << " x " << i << " = " << i * j;
        }
        cout << endl;
    }

    return 0;
}