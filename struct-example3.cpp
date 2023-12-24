#include <iostream>
using namespace std;

struct duration
{
    string city;
    int hour;
    int min;
};
int main()
{
    duration dest1;
    dest1.city = "Sidoarjo";
    dest1.hour = 0;
    dest1.min = 47;

    duration dest2;
    dest2.city = "Malang";
    dest2.hour = 24;
    dest2.min = 23;

    int init_hour = 23, init_min = 0;
    int hour = init_hour + dest1.hour + dest2.hour;
    int min = init_min + dest1.min + dest2.min;

    string day = "am";

    if (min >= 60)
    {
        hour += min / 60;
        min = min % 60;
    }
    if (hour >= 24)
    {
        hour = hour % 24;
    }

    if (hour >= 12)
    {
        day = "pm";
    }

    cout << "Ari will arrive at " << hour << ":" << min << " " << day;
    return 0;
}