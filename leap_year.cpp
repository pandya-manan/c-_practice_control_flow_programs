#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year, which needs to be checked whether it is a leap year or not: ";
    cin>>year;
    if(year%400==0)
    {
        cout<<"The entered year is a leap year"<<endl;
    }
    else if(year%4==0 && (!(year%100==0)))
    {
        cout<<"The entered year is a leap year"<<endl;
    }
    else 
    {
        cout<<"The entered year is not a leap year"<<endl;
    }
    return 0;
}