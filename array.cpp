#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float cmlg, cmlc;
    cmlg = 0, cmlc = 0;
    string DNA;

    cout << "\n\n Masukkan DNA sequence anda (ACTG) : ";
    getline(cin, DNA);

    for (int i = 0; i < DNA.length(); i++)
    {
        if (DNA[i] == 'C')
        {
            cmlc += 1;
        }
        else if (DNA[i] == 'G')
        {
            cmlg += 1;
        }
        else
        {
            0;
        }
    }

    cout << "Besarnya CG Content anda sebesar : " << fixed << setprecision(2) << (cmlc + cmlg) * 100 / DNA.length() << "%";
    return 0;
}