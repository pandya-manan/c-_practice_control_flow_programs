#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    int min,max;
    if(a<b)
    {
        min=a;
        max=b;
    }
    else 
    {
        min=b;
        max=a;
    }
    int gcd;
    for(int i=1;i<=min;i++)
    {
        if((a%i==0) && (b%i==0))
        {
            gcd=i;
        }
    }
    cout<<"The GCD of the two given numbers "<<a<<" "<<b<<" is: "<<gcd<<endl;
    return 0;
}