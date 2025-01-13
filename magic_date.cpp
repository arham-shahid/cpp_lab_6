#include <iostream>
using namespace std;

int main()
{
    int date,month,year;
    cout<< "Enter date, month and last two digits of year to check if it is a magic date; ";
    cin>>date>>month>>year;

    if(date*month == year)
    {
        cout<< "This is a magic date.";
    }else
    {
        cout<< "This is not a magic date.";
    }
    return 0;
}