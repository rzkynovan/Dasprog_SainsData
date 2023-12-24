#include <iostream>
using namespace std;
void test(int, double);
int main()
{
    cout << "Now function test() will called. \n";
    test(10, -7.5);
    cout << "\nAnd back again in main()." << endl;
    return 0;
}

void test(int arg1, double arg2)
{
    cout << "\nIn function test ()."
         << "\n 1. Argument : " << arg1 << "\n 2. Argument : " << arg2 << endl;
}