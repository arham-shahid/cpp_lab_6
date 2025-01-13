// A Simple Program to show how Ternary operator works.//

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please enter an integer: ";
    cin >> num;

    int positiveNum = num < 0 ? -num : num;
    cout << "Positive integere will be: " << positiveNum << endl;
}