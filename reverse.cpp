#include<iostream>
using namespace std;
int main()
{
    int num,temp,reverse=0;
    cout<<"Enter the number whose reverse needs to be calculated: ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        int dig=temp%10;
        reverse=(reverse*10)+dig;
        temp=temp/10;
    }
    cout<<"The reverse of the number "<<num<<" is "<<reverse<<endl;
    return 0;
}