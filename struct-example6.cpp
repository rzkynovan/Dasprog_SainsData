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

room infeet(room);
float size(float, float);
int main()
{
    room dining;
    dining.length.feet = 10.0;
    dining.length.inch = 11.0;
    dining.width.feet = 8.0;
    dining.width.inch = 4.0;
    room a = infeet(dining);
    float s = size(a.length.feet, a.width.feet);

    cout << "Size of dining room is " << s << " square feet";
    return 0;
}

room infeet(room r)
{
    room myroom;
    myroom.length.feet = r.length.feet + r.length.inch / 12;
    myroom.width.feet = r.width.feet + r.width.inch / 12;

    return myroom;
}

float size(float l, float w)
{
    float s = l * w;
    return s;
}