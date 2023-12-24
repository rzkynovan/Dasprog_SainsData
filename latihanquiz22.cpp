// #include <iostream>
// using namespace std;
// const int c = 9999;
// void countChar(char p[c])
// {
//     int count = 0;
//     for (int i = 0; p[i]; i++)
//     {
//         count++;
//     }
//     cout << "Jumlah karakter adalah : " << count;
// }

// void countWord(char p[c])
// {
//     int count = 0;
//     for (int i = 0; p[i]; i++)
//     {
//         if (p[i] == ' ' && p[i - 1] != ' ')
//         {
//             count++;
//         }
//     }
//     cout << "Jumlah kalimat : " << count;
// }
// int main()
// {
//     char p[c];
//     cout << "Masukkan paragraph akhiri dengan 5 : ";
//     cin.get(p, c, '5');

//     countChar(p);
//     countWord(p);
//     return 0;
// }

#include <iostream>
using namespace std;
struct Product
{
    string id_product, name;
    int price, quantity;
};

struct History
{
    string id_customer;
    Product product;
};
int totalPrice(History *hist, int NROW, char index)
{

    int price_total[3] = {0};
    for (int i = 0; i < NROW; i++)
    {
        if (hist[i].id_customer == "101")
        {
            price_total[0] += hist[i].product.price * hist[i].product.quantity;
        }
        else if (hist[i].id_customer == "102")
        {
            price_total[1] += hist[i].product.price * hist[i].product.quantity;
        }
        else
        {
            price_total[2] += hist[1].product.price * hist[i].product.quantity;
        }
    }

    return price_total[index];
}
int main()
{
    int NROW = 7;
    History hist[NROW] = {
        {"101", {"051", "Shampoo", 37000, 1}},
        {"102", {"052", "Sabun", 15500, 2}},
        {"102", {"053", "Sikat gigi", 12990, 2}},
        {"101", {"052", "Sabun", 15500, 2}},
        {"103", {"051", "Shampoo", 37000, 1}},
        {"102", {"054", "Pasta gigi", 7350, 1}},
        {"103", {"054", "Pasta gigi", 7350, 1}}};

    for (int i = 0; i < 3; i++)
    {
        cout << "Total pembelian pelanggan ID 10" << i + 1 << " adalah sebesar ";
        cout << totalPrice(hist, NROW, i) << endl;
    }

    return 0;
}