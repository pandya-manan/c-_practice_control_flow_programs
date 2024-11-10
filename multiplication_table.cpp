#include<iostream>
using namespace std;
int main()
{
    int num,limit;
    cout<<"Enter the number whose multiplication tables need to be printed: ";
    cin>>num;
    cout<<"Enter the limit upto the tables of a number needs to be printed: ";
    cin>>limit;
    for(int i=0;i<=limit;i++)
    {
        cout<<num<<" * "<<i<<" = "<<(num*i)<<endl;
    }
    return 0;
}