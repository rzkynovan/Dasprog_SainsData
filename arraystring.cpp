#include <iostream>
#include <iomanip>
using namespace std;
const int NROW = 4, NCOL = 4;
void display(double[NROW][NCOL], string[NROW]);
int main()
{
    string name[NROW] = {"Tylor", "Sam", "James", "Jessie"};
    double score[NROW][NCOL] = {
        {90.33, 82.70, 75.75, 86.47},
        {76.67, 84.23, 71.67, 82.74},
        {88.00, 92.60, 79.25, 89.80},
        {95.67, 85.76, 84.20, 83.90}};

    cout << "Name\t"
         << setw(10) << "Excercise"
         << setw(10) << "Quiz"
         << setw(10) << "Midterm"
         << setw(10) << "Finals" << endl;

    display(score, name);
    return 0;
}

void display(double score[NROW][NCOL], string name[NROW])
{
    for (int i = 0; i < NROW; i++)
    {
        cout << name[i] << "\t";
        for (int j = 0; j < NCOL; j++)
        {
            cout << setw(10) << score[i][j];
        }
        cout << endl;
    }
}