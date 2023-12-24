#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double X[5] = {3, 7.3, 1.5, 4, 0};
    double Y[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Y[i][j] = abs(X[i] - X[j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << Y[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}