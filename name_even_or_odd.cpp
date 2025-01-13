/*This program shows how any array of unknown size characters'
length can be found. (approximately taken 20 because it is a
 name of a person)
 ********LOGIC*******
 By running a while loop till the
 last character's address that is null terminator is found.
*/

#include <iostream>
using namespace std;

int main()
{
    char name[20];
    cout << "Enter you second name: ";
    cin >> name;

    int index = 0; // Initiallize index with 0
    int sum = 0;
    while (name[index] != '\0')
    {
        // AsCI value of single character as starting from index 0
        int asciValue = name[index];

        // Sum of ASCI values of character one by one
        sum = sum + asciValue;

        // Increment count to start with next index
        index++;
    }
    cout << "Total characters in your name are " << index << endl;
    if (sum % 2 == 0)
    {
        cout << " Sum of ASCI value of  your second name is even";
    }
    else
    {
        cout << " Sum of ASCI value of  your second name is odd";
    }
    return 0;
}