#include<iostream>
using namespace std;
void lcm(int a,int b)
{ int lcm;
if(a>b)
 lcm=a;
 else
 lcm=b;
while(lcm%a!=0 || lcm%b!=0)
{ lcm++;
}
cout<<lcm<<endl;
}
void hcf(int x,int y)
{ int hcf;
if(x>y)
hcf=y;
else
hcf=x;
 while(x%hcf!=0 || y%hcf!=0)
 { 
 hcf--;
 }
 cout<<hcf<<endl;
}
int main()
{ lcm(12,30);
hcf(15,16);
}
