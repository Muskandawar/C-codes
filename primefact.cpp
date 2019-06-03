#include<iostream>
using namespace std;
void primefact(int a)
{ int i,j,count;
for(i=2;i<=a;i++)
{ 
if(a%i==0)
{ count=0;
for(j=2;j<=i/2;j++)
{ if(i%j==0)
count=1;
break;
}
if(count==0)
cout<<i<<endl;
}
}
}
void lcm(int x,int y)
{ int i=2,j,big;
if(x>y)
{ big=x;
}
else
{ big=y;
}
while(i<=big)
{ if(x%i==0 && y%i==0)
i++;
else

}
cout<<i;
}
int main()
{ 
lcm(20,10);
}
