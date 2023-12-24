#include <iostream>
using namespace std;

struct student
{
    string name;
    string id;
    string dob;
    int age;
    float gpa;
};

int main()
{
    student stu1;
    stu1.name = "Ari Laksono";
    stu1.id = "5052231123";
    stu1.dob = "15 September 2006";
    stu1.age = 19;
    stu1.gpa = 3.89;

    student stu2 = {"Rizky Novan", "5052231035", "6 November 2004", 19, 4.00};

    cout << "Name\t: " << stu1.name << "\nDOB\t: " << stu1.dob << "\nID\t: " << stu1.id << "\nAge\t: " << stu1.age << "\nGPA\t: " << stu1.gpa;

    cout << endl
         << endl;
    cout << "Name\t: " << stu2.name << "\nDOB\t: " << stu2.dob << "\nID\t: " << stu2.id << "\nAge\t: " << stu2.age << "\nGPA\t: " << stu2.gpa;
    return 0;
}