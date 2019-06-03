#include<iostream>
using namespace std;
int main()
{ int n,i,find;
cout<<"enter no. of elements: ";
cin>>n;
int a[n];
for(i=0;i<n;i++)
{ cout<<"data for element "<<i+1<<"is ";
cin>>a[i];
}
cout<<"enter value to find: ";
cin>>find;
i=0;
while(a[i]!=find)
{ i++;
}
cout<<i;
}

