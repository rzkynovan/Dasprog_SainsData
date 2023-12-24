// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     //	ofstream Myname("myname.txt");
//     //	Myname << "Rizky Novan";
//     //
//     //	if(Myname)
//     //	cout<<"File created successfully";
//     //	Myname.close();

//     ofstream Myname;
//     Myname.open("myname.txt");
//     Myname << "Aditiya";
//     if (Myname)
//         cout << "file created successfully!";

//     Myname.close();
// }

#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    // fstream my_file;
    // my_file.open("example.txt", ios::out);
    // my_file << "Nama saya adalah Rizky Novan";
    // cout << "File berhasil dibuat";
    // my_file.close();
    // cout << endl;
    // string nama;
    // ifstream infile("example.txt");
    // while (getline(infile, nama))
    // {
    //     cout << nama;
    // }

    // ofstream Myname("myname.txt");
    // Myname << "Rizky Novan";

    // if(Myname)
    // cout<<"File created successfully";
    // Myname.close();

    // ofstream Myname;
    // Myname.open("myname.txt");
    // Myname<< "Novan Aditiya";
    // if(Myname)
    // cout << "file created successfully!" << endl;
    // Myname.close();

    // string nama;
    // ifstream openfile;
    // openfile.open("myname.txt");
    // openfile >> nama;
    // cout << nama;
    // openfile.close();

    // ifstream openfile;
    // openfile.open("myname.txt");
    //
    // char buffer[80];
    // openfile.getline(buffer, 80);
    // cout<<buffer;
    // openfile.close();

    // ofstream simpanfile;
    // simpanfile.open("lagurc.txt");
    // simpanfile << "Drill smoke traped in the two by two\n"
    //            << "wasting the night feels right when I'm with you\n"
    //            << "Its a summer in your eyes\n"
    //            << "And the way you let down your desguise\n";

    // if (simpanfile)
    //     cout << "File created successfully" << endl;
    // simpanfile.close();

    ifstream openfile;
    openfile.open("haplotype.txt");
    char buffer[80];
    while (!openfile.eof())
    {
        openfile.getline(buffer, 80);
        cout << buffer << endl;
    }

    // openfile.close();

    // ifstream bukafile("lagurc.txt");
    // ofstream simpanfile("lagurc2.txt");
    //
    // const int MAX = 100;
    // char buffer[MAX];
    //
    // while(bukafile.getline(buffer,MAX)){
    //	simpanfile << buffer << endl;
    ////	cout << buffer << endl;
    //}
    //
    //
    // simpanfile << "\nThe same song on repeat\n"
    //			<< "You can call me everything you want\n"
    //			<< "Its fine by me\n"
    //			<< "Number two out of three\n";
    //

    // ofstream outfile("mydata.csv");

    // string name;
    // int roll, task, midterm, quiz, final;
    // cout << "Roll\t"
    //      << "Name\t"
    //      << "Tasks\t"
    //      << "Midterm\t"
    //      << "Quiz\t"
    //      << "Final Term\n";

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> roll >> name >> task >> midterm >> quiz >> final;
    //     outfile << roll << ","
    //             << name << ","
    //             << task << ","
    //             << midterm << ","
    //             << quiz << ","
    //             << final << endl;
    // }

    return 0;
}
