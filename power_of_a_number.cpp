#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int base,exponent;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>exponent;
    double result=pow(base,exponent);
    cout<<"The result: "<<result;
    return 0;
}