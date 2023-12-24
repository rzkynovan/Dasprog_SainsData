#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    string line;
    vector<string> lines;
    ifstream openfile;
    openfile.open("haplotype.txt");

    while (getline(openfile, line))
    {
        lines.push_back(line);
    }
    openfile.close();

    int n = 16;
    int a = n / 2, b = n / 2;
    int countA = 0, countB = 0;
    string nama[a], sek[b];

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            nama[countA] = lines[i];
            countA++;
        }
        else
        {
            sek[countB] = lines[i];
            countB++;
        }
    }
    cout << "Nama Skuens" << endl;
    for (int i = 0; i < countA; i++)
    {
        cout << nama[i] << endl;
    }
    cout << "\nSkuens\n";
    for (int i = 0; i < countB; i++)
    {
        cout << sek[i] << endl;
    }
    float cum[8][8] = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            if (sek[i][j] == sek[i + 1][j])
            {
                cum += 1;
            }
            else if ((sek[i][j] == 'C' && sek[i + 1][j] == 'G') || (sek[i][j] == 'G' && sek[i + 1][j] == 'C'))
            {
                cum += 0.6;
            }
        }
    }
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         cout << cum[i][j];
    //     }
    // }
    cout << cum;
    return 0;
}