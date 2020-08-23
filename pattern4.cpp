#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,k,j,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<=5;i++)
    {
        for(k=i;k<n;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
           cout<<j;
        }
        for(k=j-2;k>=1;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
}
