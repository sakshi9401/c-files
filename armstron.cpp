#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,sum,n,r;
    for(i=100;i<=1000;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum= sum+r*r*r;
            n=n/10;
        }
        if(i==sum)
        {
            cout<<i<<" ";
        }
    }
}
