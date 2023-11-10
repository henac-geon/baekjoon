#include <iostream>

using namespace std;

int main() {
    int hour, min, usetime;
    cin >> hour >> min;
    cin >> usetime;

    if(hour > 23 || hour < 0) return 0;
    if (min > 59 || min < 0) return 0;

    min += usetime;

    int hour_add = min / 60;
    min %= 60;
    hour += hour_add;

    if (hour >= 24) hour %= 24;

    cout << hour << " " << min;
}