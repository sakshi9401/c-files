#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i.j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(i=5;i>=1;i--)
        {
            for(j=1;j<=i-1;j++)
            {
            cout<<"*";
            }
            cout<<endl;
        }
    }
}
