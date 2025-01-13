#include <iostream>
using namespace std;

int main()
{
    double purchaseValue,
        discountValue,
        totalPurchaseValue;

    cout << "Please enter your purchase value: ";
    cin >> purchaseValue;

    if (purchaseValue > 2000)
    {
        cout << "Discount is applicable. \n";

        discountValue = (purchaseValue * 10) / 100;

        totalPurchaseValue = purchaseValue - discountValue;

        cout << "The total purchase value after discount is: " << totalPurchaseValue << endl;
    }
    else
    {
        cout << "Discount is not applicable.";
    }
}