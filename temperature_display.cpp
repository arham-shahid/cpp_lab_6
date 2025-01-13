#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout<< "Enter temerature in celsius: ";
    cin>> temp;

    if (temp<0)
    {
        cout<<"Freezing weather"<<endl;
    }
    if (temp>=0&temp<10)
    {
        cout<<"Very cold weather"<<endl;
    }
    if (temp>=10&temp<20)
    {
        cout<< "Cold weather"<<endl;
    }
    if (temp>=20&temp<30 )
    {
        cout<<"Normal temperature"<<endl;
    }
    if (temp>=30&temp<40)
    {
        cout<<"Its hot"<<endl;
    }
    if (temp>=40)
    {
        cout<<"Its very hot"<<endl;
    }
}