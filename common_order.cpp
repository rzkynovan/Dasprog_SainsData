#include <iostream>
using namespace std;
void test(int arg1, double arg2)
{
    cout << "\nIn function test()."
         << "\n1. argument: " << arg1 << "\n2. argument: " << arg2 << endl;
}

int main()
{
    cout << "Now function test() will be called. \n";
    test(19, -7.5);
    cout << "\nAnd back again int main()." << endl;
    return 0;
}