#include<iostream>
using namespace std;
int main()
{
int i,a[5],find,count=0;
for(i=0;i<5;i++)
{ cout<<"enter students ";
cin>>a[i];
}
cout<<"enter no. to find";
cin>>find;
for(i=0;i<5;i++)
{  if(a[i]==find)
{
count++;
}
}
cout<<find<<"is present  "<<count<<" time";
}
