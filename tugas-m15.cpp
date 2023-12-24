#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outfile("mydata.csv");

    string name[5];
    double roll[5], task[5], midterm[5], quiz[5], final[5], finalscore[5], rata[5];
    cout << "Roll\t"
         << "Name\t"
         << "Tasks\t"
         << "Midterm\t"
         << "Quiz\t"
         << "Final Term\n";
    outfile << "Roll"
            << ","
            << "Name"
            << ","
            << "Tasks"
            << ","
            << "Midterm"
            << ","
            << "Quiz"
            << ","
            << "Final Term"
            << ","
            << "Nilai Rata-rata"
            << ","
            << "Nilai Akhir"
            << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> roll[i] >> name[i] >> task[i] >> midterm[i] >> quiz[i] >> final[i];
    }

    for (int i = 0; i < 5; i++)
    {
        finalscore[i] = (task[i] * 15 / 100) + (midterm[i] * 30 / 100) + (quiz[i] * 25 / 100) + (final[i] * 30 / 100);
        rata[i] = (task[i] + midterm[i] + quiz[i] + final[i]) / 4;
    }

    for (int i = 0; i < 5; i++)
    {
        outfile << roll[i] << ","
                << name[i] << ","
                << task[i] << ","
                << midterm[i] << ","
                << quiz[i] << ","
                << final[i] << ","
                << rata[i] << ","
                << finalscore[i] << endl;
    }
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += rata[i];
    }

    outfile << endl
            << "Nilai Rata-rata kelas = " << sum / 5;

    ifstream openfile;
    openfile.open("mydata.csv");
    string data;

    while (getline(openfile, data))
    {
        cout << data << endl;
    }
    openfile.close();
}
