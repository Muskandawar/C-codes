#include<iostream>
using namespace std;
int main()
{ int i,j,count;
for(i=1;i<=100;i++)
{ count=0;
for(j=1;j<=100;j++)
{ if(i%j==0)
 count++;
}
if(count==2)
{ cout<<i<<" ";
}
}
}
