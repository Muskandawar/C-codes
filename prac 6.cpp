#include<iostream>
using namespace std;
int main()
{ long int decnum,rem,quot;
int binnum[100],i=1,j;
cout<<"enter decimal number";
cin>>decnum;
quot=decnum;
while(quot!=0)
{ binnum[i++]=quot%2;
quot=quot/2;
}
cout<<"equivalent binary value is:"<<decnum<<"\n";
for(j=i-1;j>0;j--)
{ cout<<binnum[j];
}
}
