#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,t;
    float s=0;
    cout<<"enter no. of terms";
    cin>>t;
    for(i=1;i<=t;i++)
    {
        s=s+float(1)/(2*i);
    }
    cout<<"sum of given series is"<<s;
}
