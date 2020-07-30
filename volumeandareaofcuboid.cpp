#include<iostream>
using namespace std;
int main()
int l,b,h,v,ar,tsa;
cout<<"enter l,b,h of cuboid";
cin>>l>>b>>h;
v=l*b*h;
ar=2*(l+b)*h;
tsa=2*(l*b+b*h+h*l);
cout<<"the volume of cuboid is"<<v<<"and the area of four walls is"<<ar<<"and the total surface area of cuboid is"<<tsa;
}
