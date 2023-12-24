#include <iostream>
using namespace std;
int main()
{
    int array[] = {6, 6, 4, 3, 12, 3, 5, 8};
    int n = sizeof(array) / sizeof(array[0]);

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    cout << "Nilai max : " << max << endl;
    cout << "Nilai Min :" << min;
    return 0;
}