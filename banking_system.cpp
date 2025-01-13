/*This program */



#include <iostream>
using namespace std;

int main()
{
    int minimumBalance = 200,
        currentBalance = 0,
        updatedBalance = 0;

    char accountType[100];
    char savingAcc[6] = {'S', 'a', 'v', 'i', 'n', 'g'};
    char checkingAcc[8] = {'C', 'h', 'e', 'c', 'k', 'i', 'n', 'g'};

    bool isSaving = false;
    bool isChecking = false;

    while (isSaving == false && isChecking == false)
    {
        cout << "Choose one account type: Saving or Checking \n";
        cout << "Enter account type: ";
        cin >> accountType;

        // variable that returns true if accountType is "Saving"
        isSaving = true;
        int index = 0;
        while (isSaving && index < 6)
        {
            if (accountType[index] != savingAcc[index])
                isSaving = false;
            index++;
        }
        // variable that returns true if accountType is "Checking"
        isChecking = true;
        index = 0;
        while (isChecking && index < 8)
        {
            if (accountType[index] != checkingAcc[index])
                isChecking = false;
            index++;
        }
        // if statement returns true(or executes) only in one case i.e. "both variables are false".
        if (!(isChecking) || !(isSaving))
            cout << "Please choose one account type as mentioned above!" << endl;
    }

    // If user has entered either "Saving" or "Checking"
    cout << "Enter current balance: ";
    cin >> currentBalance;

    if (isSaving)
    {
        if (currentBalance < minimumBalance)
        {
            int serviceCharge = 10;
            cout << "Updated balance = " << (currentBalance - serviceCharge) << endl;
        }
        else
        {
            cout << "Updated balance = " << ((currentBalance * 4) / 100) << endl;
        }
    }
    else
    {
        if (currentBalance < minimumBalance)
        {
            int serviceCharge = 25;
            cout << "Updated balance = " << (currentBalance - serviceCharge) << endl;
        }
        else
        {
            if (currentBalance > (minimumBalance + 5000))
            {
                cout << "Updated balance = " << (currentBalance + ((currentBalance * 3) / 100)) << endl;
            }
            else
            {
                cout << "Updated balance = " << (currentBalance + ((currentBalance * 5) / 100)) << endl;
            }
        }
    }

    return 0;
}