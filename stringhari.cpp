#include <iostream>
using namespace std;
int main()
{
    const int DAYS = 7, MAX = 10;
    char week[DAYS][MAX] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (int i = 0; i < DAYS; i++)
    {
        cout << week[i] << endl;
    }

    return 0;
}
