#include<iostream>
using namespace std;
int main()
{
    int num,armsum=0;
    cout<<"Enter the number to check if it is an Armstrong number: ";
    cin>>num;
    int temp=num;
    while(temp!=0)
    {
        int dig=temp%10;
        int cubdig=(dig*dig*dig);
        armsum=armsum+cubdig;
        temp=temp/10;
    }
    if(num==armsum)
    {
        cout<<"The given number is an armstrong number";
    }
    else
    {
        cout<<"The given number is not an armstrong number";
    }
    return 0;
}