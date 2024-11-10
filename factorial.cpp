#include<iostream>
using namespace std;
int main()
{
    int num,product=1;
    cout<<"Enter the number whose factorial needs to be calculated: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        product*=i;
    }
    cout<<"The factorial of the number "<<num<<" is: "<<product;
    return 0;


}