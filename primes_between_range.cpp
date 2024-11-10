#include<iostream>

using namespace std;
int main()
{
    int lwrrange,uprrange;
    cout<<"Enter the lower range: ";
    cin>>lwrrange;
    cout<<"Enter the upper range: ";
    cin>>uprrange;
    for(int i=lwrrange;i<=uprrange;i++)
    {
        bool flag=true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<i<<" ";
        }

    }
    return 0;

}