/*
    This program shows typically how 'else if' works.
   Because this programs shows how three different
   are prioritized in their working using 'else if'

   *******KEY THING TO REMEMBER********
   If one of the if statement becomes true
   (its statements get executed), the rest of else if
   ladder is bypassed(elluded or go passed).
    */

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    int copyYear = year; // copy of years input by user

    // Validate input
    int count = 0;
    while (year != 0)
    {
        year = year / 10;
        count++;
    }
    if (count != 4)
    {
        cout << "Please enter a four digit integer!";
    }
    else
    {
        if (copyYear < 1752)
        {
            cout << "It is not a leap year" << endl;
        }
        if (copyYear >= 1752)
        {
            if (copyYear % 400 == 0)
            {
                cout << "It is a leap year" << endl;
            }
            else if (copyYear % 100 == 0)
            {
                cout << "It is not a leap year" << endl;
            }
            else if (copyYear % 4 == 0)
            {
                cout << "It is  a leap year" << endl;
            }
            else
            {
                cout << "It is not a leap year" << endl;
            }
        }
    }
}
