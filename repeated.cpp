#include<iostream>
using namespace std;
int main()
{ int a[50],i,n,j;
cout<<"enter size: ";
cin>>n;
for(i=0;i<n;i++)
{ cin>>a[i];
}
cout<<"repeated numbers are:";
for(i=0;i<n;i++)
{ for(j=i+1;j<n;j++)
{ if(a[i]==a[j])
{ cout<<"\n"<<a[i];
}
}
}
}
