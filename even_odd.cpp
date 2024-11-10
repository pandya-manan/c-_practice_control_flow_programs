#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The entered number "<<num<<" is an even number."<<endl;
    }
    else
    {
        cout<<"The entered number "<<num<<" is an odd number."<<endl;
    }
    return 0;
    
}