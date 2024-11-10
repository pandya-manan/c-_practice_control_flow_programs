#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number whose factors need to be found out: ";
    cin>>num;
    cout<<"The factors of the given number "<<num<<" are: "<<endl;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}