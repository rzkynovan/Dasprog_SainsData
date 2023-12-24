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

float size(room);
int main()
{
    room dining;
    dining.length.feet = 10.0;
    dining.length.inch = 11.0;
    dining.width.feet = 8.0;
    dining.width.inch = 4.0;

    cout << "Size of dining room is " << size(dining) << " square feet";
    return 0;
}

float size(room r)
{
    float l = r.length.feet + r.length.inch / 12;
    float w = r.width.feet + r.width.inch / 12;
    float s = l * w;
    return s;
}