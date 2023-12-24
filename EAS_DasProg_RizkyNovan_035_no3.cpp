#include <iostream>
#include <fstream>
using namespace std;

const int j = 21;
float I[3] = {0, 1, 2}, X[3] = {3, 4, 5}, Y[3] = {1, 3, 10};
float G[j], V0[j], V1[j], V2[j], T[j], t = 3;

void Gt()
{
    for (int i = 0; i < j; i++)
    {
        T[i] = t;
        V0[i] = ((t - X[1]) * (t - X[2])) / ((X[0] - X[1]) * (X[0] - X[2]));
        V1[i] = ((t - X[0]) * (t - X[2])) / ((X[1] - X[0]) * (X[1] - X[2]));
        V2[i] = ((t - X[0]) * (t - X[1])) / ((X[2] - X[0]) * (X[2] - X[1]));
        t += 0.1;
    }

    for (int i = 0; i < j; i++)
    {
        G[i] = (Y[0] * V0[i]) + (Y[1] * V1[i]) + (Y[2] * V2[i]);
    }
}

int main()
{

    cout << "===== DATA X dan Y =====" << endl;
    cout << "X"
         << "\t"
         << "Y" << endl;
    for (int k = 0; k < 3; k++)
    {
        cout << X[k] << "\t" << Y[k] << endl;
    }
    Gt();
    cout << endl
         << "===== DATA g(t) dan t =====" << endl;
    string d = ",";
    cout << "g(t)\t t" << endl;
    for (int i = 0; i < j; i++)
    {
        cout << G[i] << "\t " << T[i] << endl;
    }

    ofstream outfile("kurva_t_gt.csv");
    outfile << "t\t g(t)" << endl;
    for (int i = 0; i < j; i++)
    {
        outfile << G[i] << d << T[i] << endl;
    }
    outfile.close();

    return 0;
}