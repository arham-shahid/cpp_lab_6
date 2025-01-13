#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Please enter two integers: ";
    cin >> num1 >> num2;
    int maxNum = (num1 > num2) ? num1 : num2;
    cout << "Maximum number out of these two numbers is: " << maxNum << endl;

    return 0;
}