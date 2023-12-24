#include <iostream>
using namespace std;

struct dimension
{
    float feet;
    float inch;
};
struct room
{
    dimension length;
    dimension width;
};
int main()
{
    room dining;
    dining.length.feet = 10.0;
    dining.length.inch = 11.0;
    dining.width.feet = 8.0;
    dining.width.inch = 4.0;
    float size, l, w;
    l = dining.length.feet + dining.length.inch / 12;
    w = dining.width.feet + dining.width.inch / 12;
    size = l * w;

    cout << "Size of dining room is " << size << " square feet";
    return 0;
}