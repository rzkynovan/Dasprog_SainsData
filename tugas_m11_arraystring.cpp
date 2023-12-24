#include <iostream>
using namespace std;
// Membuat func reversit dengan parameter char pointer string
void reversit(char *str)
{
    // deklarasi nilai length sebagai panjang array
    int length = 0;
    // memastikan bahwa str tidak memiliki panjang 0
    while (str[length] != 0)
    {
        // akumulatif dari panjang array str
        length++;
    }
    // looping untuk reverse value
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        // menyamakan indeks dengan -1
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    // deklarasi nilai maksimal dari string, memakai 255 karena secara default panjang string adalah 255 char
    const int MAX_LENGTH = 255;
    char str[MAX_LENGTH];

    cout << "Enter a string: ";
    // Input method that allows embedded blanks / spasi
    cin.getline(str, MAX_LENGTH);
    // memanggil funcrion reversit
    reversit(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}