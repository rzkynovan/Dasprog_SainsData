#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;
int arr[1000][1000];
int main()
{
    memset(arr, 0, sizeof(arr));
    arr[1][1] = 1;
    int t;
    t = 4;
    // cin >> t;
    for (int b = 2; b <= t; b++)
    {
        for (int k = 1; k <= b; k++)
        {
            arr[b][k] = arr[b - 1][k] + arr[b - 1][k - 1];
        }
    }

    for (int b = 1; b <= t; b++)
    {
        // printf(setw(5));
        cout << setw(5) for (int k = 1; k <= b; k++)
        {
            // cout << setw(5);

            printf("%d ", arr[b][k]);
        }
        printf("\n");
    }
}