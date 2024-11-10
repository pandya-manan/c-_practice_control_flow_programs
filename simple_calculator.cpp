#include<iostream>
using namespace std;
int main()
{
    int choice,a,b;
    while(1)
    {
        cout<<"Simple Calculator"<<endl;
        cout<<"1.Add two numbers"<<endl;
        cout<<"2.Subtract two numbers"<<endl;
        cout<<"3.Multiply two numbers"<<endl;
        cout<<"4.Divide two numbers"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice from the above given options"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter the first number: ";
                    cin>>a;
                    cout<<"Enter the second number: ";
                    cin>>b;
                    cout<<(a+b)<<endl;
                    break;
            case 2: cout<<"Enter the first number: ";
                    cin>>a;
                    cout<<"Enter the second number: ";
                    cin>>b;
                    cout<<(a-b)<<endl;
                    break;
            case 3: cout<<"Enter the first number: ";
                    cin>>a;
                    cout<<"Enter the second number: ";
                    cin>>b;
                    cout<<(a*b)<<endl;
                    break;
            case 4: cout<<"Enter the first number: ";
                    cin>>a;
                    try
                    {
                        cout<<"Enter the second number: ";
                        cin>>b;
                        if(b==0)
                        {
                            throw b;
                        }
                        cout<<(a/b)<<endl;
                    }
                    catch(int num)
                    {
                        cout<<"Division is not possible "<<num<<endl;
                    }
                    break;
            case 5: exit(1);
            default: cout<<"Enter the correct option please"<<endl;
                    
                    
        }

    }
}