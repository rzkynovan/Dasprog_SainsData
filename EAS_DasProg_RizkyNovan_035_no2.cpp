#include <iostream>
#include <fstream>
using namespace std;
struct Login
{
	int id;
	string username, password;
};

struct Akun
{
	string acc, web;
	Login login;
};
int main()
{
	string t = "\t";
	//	Akun akun;
	Akun akun[5] = {
		{"blog", "myblog.com", {3, "abc@myemail.com", "writing3Veryday"}},
		{"email", "myemail.com", {1, "abc@myemail.com", "abcis123"}},
		{"music", "spotmusic.com", {4, "abc@myemail.com", "edm4Lyfe"}},
		{"school", "myschool.ac.id", {2, "20231215001", "Funstudy1ng"}},
		{"social", "intagar.com", {5, "shiny_conan", "Kellymycat!"}},
	};

	int o;
	string account;
	cout << "Options : " << endl;
	cout << "1. Check username and password" << endl
		 << "2. Update password" << endl;
	cout << "Enter a number : ";
	cin >> o;

	switch (o)
	{
	case 1:
		cout << "Enter account \t : ";
		cin >> account;
		for (int i = 0; i < 5; i++)
		{
			if (akun[i].acc == account)
			{
				cout << "Username \t : " << akun[i].login.username << endl;
				cout << "Password \t : " << akun[i].login.password << endl;
			}
		}
		break;

	case 2:
		cout << "Enter account \t : ";
		cin >> account;
		for (int i = 0; i < 5; i++)
		{
			if (akun[i].acc == account)
			{
				cout << "Old Oassword \t : " << akun[i].login.password << endl;
				cout << "Enter updated password \t : ";
				cin >> akun[i].login.password;
				cout << endl;
			}
		}
		cout << "Check new password";
		cout << "Enter account \t : ";
		cin >> account;
		for (int i = 0; i < 5; i++)
		{
			if (akun[i].acc == account)
			{
				cout << "Username \t : " << akun[i].login.username << endl;
				cout << "Password \t : " << akun[i].login.password << endl;
			}
		}
		break;

	default:
		cout << "Input tidak valid!";
	}

	string d = ",";

	ofstream outfile("my_pass_manger.csv");
	outfile << "account" << d << "address" << d << "username" << d << "password" << endl;
	for (int i = 0; i < 5; i++)
	{
		outfile << akun[i].acc << d << akun[i].web << d << akun[i].login.username << d << akun[i].login.password << endl;
	}

	outfile.close();
}
