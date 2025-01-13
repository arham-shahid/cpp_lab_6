#include <iostream>
using namespace std;

int main()
{
    int seconds,
        minutes,
        hours,
        days;
    cout << " Enter total seconds: ";
    cin >> seconds;

    if (seconds >= 60 & seconds < 3600)
    {
        minutes = seconds / 60;

        cout << "Minutes are: " << minutes << endl;
    }
    if (seconds >= 3600 & seconds < 86400)
    {
        minutes = seconds / 60;
        hours = minutes / 60;

        cout << "Hours are: " << hours << endl;
    }
    if (seconds >= 86400)
    {
        minutes = seconds / 60;
        hours = minutes / 60;
        days = hours / 24;

        cout << "Days are: " << days << endl;
    }
}
