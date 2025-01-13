/*The tricky point in  program was to store operator
  in a char variable and then executing statement
  after matching the operator using 'if' statement. */

#include <iostream>
using namespace std;

int main()
{
    cout << "Menu \n\n";
    cout << "+ ADDITION \n";
    cout << "- SUBTRACTION \n";
    cout << "* MULTIPLICATION \n";
    cout << "/ DIVISION \n\n";

    int num1, num2;
    char operation;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter operation: ";
    cin >> operation;

    if (operation == '+')
        cout << "Addition = " << (num1 + num2) << endl;
    else if (operation == '-')
        cout << "Subtraction = " << (num1 - num2) << endl;
    else if (operation == '*')
        cout << "Multiplication = " << (num1 * num2) << endl;
    else if (operation == '/')
    {
        if (num2 == 0)
            cout << "Sorry! Denominator can not be zero.\n";
        else
            cout << "Division = " << (num1 / num2) << endl;
    }
}