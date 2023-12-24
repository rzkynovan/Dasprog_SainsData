#include <iostream>
using namespace std;

int umur(int lahir, int sekarang)
{
    int total = sekarang - lahir;
    return total;
}
int main()
{
    cout << "I'am " << umur(2004, 2023);
    cout << " years old";
    return 0;
}
