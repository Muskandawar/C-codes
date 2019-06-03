#include<iostream>
using namespace std;
int main()
{ int i,n,find,pos,start=0,end;
cout<<"enter no. of elements: ";
cin>>n;
end=n-1;
int mid=(start+end)/2;
int a[n];
for(i=0;i<n;i++)
{ cout<<"enter value: ";
cin>>a[i];
}
cout<<"enter element to find: ";
cin>>find;
while(a[mid]!=find)
{  
if(find==a[end])
 mid=end;
 if(a[mid]>find)
 end=mid;
else
start=mid;
mid=(start+end)/2;
}
cout<<mid;
}
