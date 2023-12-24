// #include <iostream>
// using namespace std;

// void test(int arg1, double arg2)
// {
//     cout << "\nIn function test(.)"
//          << "\n  1. Argument: " << arg1 << "\n 2. Argument: " << arg2 << endl;
// }
// int main()
// {

//     cout << "Now function test()";
//     test(10, -7.5);
//     cout << "\nAnd back again in main";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// float lingkaran(float r)
// {
//     const float phi = 3.14;
//     float luas = phi * r * r;
//     return luas;
// }
// int main()
// {

//     cout << lingkaran(10);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// float lingkaran(float);
// int main()
// {
//     cout << lingkaran(10);
//     return 0;
// }

// float lingkaran(float r)
// {
//     const float phi = 3.14;
//     float luas = phi * r * r;
//     return luas;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// const int NROW = 4, NCOL = 4;
// void display(double[NROW][NCOL], string[NROW]);
// float mean(double[NCOL]);

// int main()
// {

//     string name[NROW] = {
//         "Tylor", "Sam", "James", "Jessie"};

//     double score[NROW][NCOL] = {
//         {90.33, 82.70, 75.75, 86.47},
//         {76.67, 84.23, 71.67, 82.74},
//         {76.67, 84.23, 71.67, 82.74},
//         {76.67, 84.23, 71.67, 82.74},
//     };

//     display(score, name);
//     return 0;
// }

// void display(double score[NROW][NCOL], string name[NROW])
// {
//     cout << "Name\t" << setw(10)
//          << "Excercise" << setw(10)
//          << "Quiz" << setw(10)
//          << "Midterm" << setw(10)
//          << "Finals" << setw(10)
//          << "Mean" << endl;
//     for (int i = 0; i < NROW + 1; i++)
//     {
//         cout << name[i] << "\t";
//         for (int j = 0; j < NCOL; j++)
//         {
//             cout << setw(10) << score[i][j];
//         }
//         cout << setw(10) << mean(score[i]);
//         cout << endl;
//     }
// };

// float mean(double nilai[NCOL])
// {
//     float jumlah = 0;
//     for (int i = 0; i < NCOL; i++)
//     {
//         jumlah += nilai[i];
//     }

//     float mean = jumlah / NCOL;
//     return mean;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// const int NROW = 4, NCOL = 4;

// struct Student
// {
//     string name[NROW];
//     double score[NROW][NCOL];
// };
// void display(double[NROW][NCOL], string[NROW]);
// float mean(double[NCOL]);

// int main()
// {
//     Student students[NROW];

//     for (int i = 0; i < NROW; i++)
//     {
//         cout << "Masukkan nama mahasiswa: ";
//         // getline(cin, students[i].name);
//         cin >> students[i].name;

//         cout
//             << "Masukkan nilai mahasiswa: ";
//         for (int j = 0; j < NCOL; j++)
//         {
//             cin >> students[i].score[j];
//         }
//     }

//     // string name[NROW] = {
//     //     "Tylor", "Sam", "James", "Jessie"};

//     // double score[NROW][NCOL] = {
//     //     {90.33, 82.70, 75.75, 86.47},
//     //     {76.67, 84.23, 71.67, 82.74},
//     //     {76.67, 84.23, 71.67, 82.74},
//     //     {76.67, 84.23, 71.67, 82.74},
//     // };

//     display(students.score, students.name);
//     return 0;
// }

// void display(double score[NROW][NCOL], students[NROW])
// {
//     cout << "Name\t" << setw(10)
//          << "Excercise" << setw(10)
//          << "Quiz" << setw(10)
//          << "Midterm" << setw(10)
//          << "Finals" << setw(10)
//          << "Mean" << endl;
//     for (int i = 0; i < NROW + 1; i++)
//     {
//         cout << students[i] << "\t";
//         for (int j = 0; j < NCOL; j++)
//         {
//             cout << setw(10) << score[i][j];
//         }
//         cout << setw(10) << mean(students[i].scores);
//         cout << endl;
//     }
// };

// float mean(double nilai[NCOL])
// {
//     float jumlah = 0;
//     for (int i = 0; i < NCOL; i++)
//     {
//         jumlah += nilai[i];
//     }

//     float mean = jumlah / NCOL;
//     return mean;
// }

// int main()
// {

//     string name[NROW] = {
//         "Tylor", "Sam", "James", "Jessie"};

//     double score[NROW][NCOL] = {
//         {90.33, 82.70, 75.75, 86.47},
//         {76.67, 84.23, 71.67, 82.74},
//         {76.67, 84.23, 71.67, 82.74},
//         {76.67, 84.23, 71.67, 82.74},
//     };

//     display(score, name);
//     return 0;
// }

// void display(double score[NROW][NCOL], string name[NROW])
// {
//     cout << "Name\t" << setw(10)
//          << "Excercise" << setw(10)
//          << "Quiz" << setw(10)
//          << "Midterm" << setw(10)
//          << "Finals" << setw(10)
//          << "Mean" << endl;
//     for (int i = 0; i < NROW + 1; i++)
//     {
//         cout << name[i] << "\t";
//         for (int j = 0; j < NCOL; j++)
//         {
//             cout << setw(10) << score[i][j];
//         }
//         cout << setw(10) << mean(score[i]);
//         cout << endl;
//     }
// };

// float mean(double nilai[NCOL])
// {
//     float jumlah = 0;
//     for (int i = 0; i < NCOL; i++)
//     {
//         jumlah += nilai[i];
//     }

//     float mean = jumlah / NCOL;
//     return mean;
// }

#include <iostream>
#include <iomanip>
using namespace std;
const int NROW = 4, NCOL = 4;

struct student
{
    string name[NROW];
};
struct porto
{
    double score[NROW][NCOL];
};
void display(double[NROW][NCOL], string[NROW]);
double mean(double[NCOL]);

int main()
{
    porto port;
    student stud;
    for (int i = 0; i < NROW; i++)
    {
        cout << "Masukkan nama mahasiswa ke- " << i + 1 << " : ";
        getline(cin, stud.name[i]);

        cout
            << "Masukkan Nilai mahasiswa ke- " << i + 1 << " : " << endl;
        for (int j = 0; j < NCOL; j++)
        {
            cin >> port.score[i][j];
        }
        cin.ignore();
    }

    display(port.score, stud.name);

    return 0;
}

void display(double score[NROW][NCOL], string name[NROW])
{
    cout << "Name\t" << setw(10)
         << "Excercise" << setw(10)
         << "Quiz" << setw(10)
         << "Midterm" << setw(10)
         << "Finals" << setw(10)
         << "Mean" << endl;
    for (int i = 0; i < NROW + 1; i++)
    {
        cout << name[i] << "\t";
        for (int j = 0; j < NCOL; j++)
        {
            cout << setw(10) << score[i][j];
        }
        cout << setw(10) << mean(score[i]);
        cout << endl;
    }
};

double mean(double nilai[NCOL])
{
    float jumlah = 0;
    for (int i = 0; i < NCOL; i++)
    {
        jumlah += nilai[i];
    }

    float mean = jumlah / NCOL;
    return mean;
}
