#include<iostream>
#include<math.h>
using namespace std;
void jumpsearch(int *p,int &n)
{ int i=0,start=0,end=n-1,jump=sqrt(n)-1,find;
for(int i=0;i<n;i++)
{ cout<<"enter value: ";
cin>>p[i];
}
cout<<"enter no. to find: ";
cin>>find;
while(p[jump]<find)
{
start=jump+1;
jump=jump+sqrt(n);
if(jump+sqrt(n)>end)
{ jump=end;
}
}
for(i=jump;i>=start;i--)
{ if(p[i]==find)
 cout<<i;
}
}     
int main()
{ int n;
cout<<"enter no. of elements: ";
cin>>n;
int a[n];
jumpsearch(a,n);
}
