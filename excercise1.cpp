#include <iostream>
using namespace std;
void firstName(string name)
{
    cout << name << " ";
}

void lastName(string name)
{
    cout << name;
}
int main()
{
    cout << "My name is: ";
    firstName("Rizky");
    lastName("Novan");
    return 0;
}