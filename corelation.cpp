#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double X[5] = {3, 7.3, 1.5, 4, 0}, Y[5] = {6, 10, 4, 9, 1}, Z[5] = {3, 3.1, 5, 10, 2};
    double Xbar = 0, Ybar, Zbar;
    for (int i = 0; i < 5; i++)
    {
        Xbar += X[i];
    }
    Xbar = Xbar / (sizeof(X) / sizeof(*X));

    for (int i = 0; i < 5; i++)
    {
        Ybar += Y[i];
    }
    Ybar = Ybar / (sizeof(Y) / sizeof(*Y));

    for (int i = 0; i < 5; i++)
    {
        Zbar += Z[i];
    }
    Zbar = Zbar / (sizeof(Z) / sizeof(*Z));

    // cout << "Korelasi array X dan Y : ";
    float penyebutx = 0, penyebuty = 0, pembilang = 0;
    for (int i = 0; i < 5; i++)
    {
        pembilang += (X[i] - Xbar) * (Y[i] - Ybar);
    }
    for (int i = 0; i < 5; i++)
    {
        penyebutx += abs(X[i] - Xbar);
        penyebuty += abs(Y[i] - Ybar);
    }
    float penyebut = penyebutx * penyebuty;

    cout << "Korelasi X dan Y adalah : " << penyebut / pembilang;

    return 0;
}