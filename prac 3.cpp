#include<iostream>
using namespace std;
int main()
{ int a,b,x,y,t,lcm,hcf;
cout<<"enter 2 no:";
cin>>x>>y;
a=x;
b=y;
while(b!=0)
{ t=b;
b=a%b;
a=t;
}
hcf=a;
lcm=(x*y)/hcf;
cout<<"hcf is:"<<hcf;
cout<<"lcm is:"<<lcm;
}
