#include<iostream>
using namespace std;
int main()
{ int i,a[5],j,k;
for(i=0;i<5;i++)
{ cout<<"enter values: ";
cin>>a[i];
}
for(i=3;i>0;i--)
{ k=a[i];
j=i+1;
while(k<a[j])
{ a[j]=a[j-1];
j--;
}
a[j+1]=k;
}
for(i=0;i<5;i++)
{ cout<<a[i]<<"\n";
}
}
