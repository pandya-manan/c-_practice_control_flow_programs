#include<iostream>
using namespace std;
int main()
{
    int num,reverse=0,temp;
    cout<<"Enter the number to check if a palindrome is or not: ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        int dig=temp%10;
        reverse=(reverse*10)+dig;
        temp=temp/10;
    }
    if(reverse==num)
    {
        cout<<"The given number is a palindrome"<<endl;
    }
    else
    {
        cout<<"The given number is not a palindrome"<<endl;
    }
    return 0;
}