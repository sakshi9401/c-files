#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t,i,f=1;
    cout<<"enter the no. of terms";
    cin>>t;
    for(i=1;i<=t;i++)
    {
        f=f*i;
        cout<<i<<"\n"<<"/"<<f<<"+";
    }
    cout<<"\b";
}
