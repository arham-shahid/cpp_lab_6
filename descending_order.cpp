/*Probably there will be a more efficient way to commit
  this code,well,what I did is I first found maximum number
  tha minimum number and then middle number. */

#include <iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    cout << "Please enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int maxNum = 0, middleNum = 0, minNum = 0;

    // Maximun number
    if (num1 > num2 & num1 > num3)
        maxNum = num1;
    else if (num2 > num1 & num2 > num3)
        maxNum = num2;
    else if (num3 > num1 & num3 > num2)
        maxNum = num3;

    // Minimum number
    if (num1 < num2 & num1 < num3)
        minNum = num1;
    else if (num2 < num1 & num2 < num3)
        minNum = num2;
    else if (num3 < num1 & num3 < num2)
        minNum = num3;

    // middle number
    if (num1 != maxNum & num1 != minNum)
    {
        middleNum = num1;
    }
    else if (num2 != maxNum & num2 != minNum)
    {
        middleNum = num2;
    }
    else if (num3 != maxNum & num3 != minNum)
    {
        middleNum = num3;
    }

    // display in descending order

    cout << "Descending order is: " << maxNum << "," << middleNum << "," << minNum << "." << endl;
    return 0;
}
