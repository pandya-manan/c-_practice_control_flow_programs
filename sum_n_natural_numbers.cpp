#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number upto which the sum needs to be calculated: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"The calculated sum is: "<<sum<<endl;
    return 0;
}