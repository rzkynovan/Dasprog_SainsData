#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // int row, cols;

    ofstream outfile("mydata.csv");
    // int row = 1, cols = 1;
    // Data[row][cols] = {
    //     {
    //         data.name = "Novan",
    //         data.task = 90,
    //         data.midterm = 89,
    //         data.quiz = 86,
    //         data.final = 78.,
    //     }
    // } return 0;
    string name;
    int roll, task, midterm, quiz, final;

    for (int i = 0; i < 5; i++)
    {
        cin >> roll >> name >> task >> midterm >> quiz >> final;
    }
}