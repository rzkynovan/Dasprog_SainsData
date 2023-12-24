// #include <iostream>
// using namespace std;

// const int c = 99999;
// void countChar(char p[c])
// {
// 	int count = 0;
// 	for (int i = 0; p[i]; i++)
// 	{
// 		count++;
// 	}
// 	cout << "Jumlah karakter : " << count;
// }

// void countWord(char p[c])
// {
// 	int count = 0;
// 	for (int i = 0; p[i]; i++)
// 	{
// 		if (p[i] == ' ' && p[i - 1] != ' ')
// 		{
// 			count++;
// 		}
// 	}
// 	cout << "Total kalimat : " << count;
// }

// int main()
// {
// 	char p[c];
// 	cout << "Masukkan paragraph akhiri dengam 5";
// 	cin.get(p, c, '5');
// 	countChar(p);
// 	cout << endl;
// 	countWord(p);
// 	return 0;
// }

#include <iostream>
using namespace std;

struct Product
{
	string id_product, name;
	int price;
};

struct History
{
	string id_pelanggan;
	Product porduct;
	int quantity;
};

int totalPrice(History *hist, int NROW, int index)
{
	int total_price[3] = {0};
	for (int i = 0; i < NROW; i++)
	{
		if (hist[i].id_pelanggan == "101")
		{
			total_price[0] += hist[i].porduct.price * hist[i].quantity;
		}
		else if (hist[i].id_pelanggan == "102")
		{
			total_price[1] += hist[i].porduct.price * hist[i].quantity;
		}
		else
		{
			total_price[2] += hist[i].porduct.price * hist[i].quantity;
		}
	}

	return total_price[index];
}

int main()
{
	int NROW = 7;
	History hist[NROW] = {
		{"101", {"051", "Shampoo", 37000}, 1},
		{"102", {"052", "Sabun", 15500}, 2},
		{"102", {"053", "Sikat gigi", 12990}, 2},
		{"101", {"052", "Sabun", 15500}, 2},
		{"103", {"051", "Shampoo", 37000}, 1},
		{"102", {"054", "Pasta gigi", 7350}, 1},
		{"103", {"054", "Pasta gigi", 7350}, 1}};

	for (int i = 0; i < 3; i++)
	{
		cout << totalPrice(hist, NROW, i) << endl;
	}

	return 0;
}