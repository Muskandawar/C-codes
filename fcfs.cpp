#include<iostream>
using namespace std;
void swap(int &a,int &b)
{ int t;
t=a;
a=b;
b=t;
}
int main()
{ int i,j,n,a[n],b[n],sum;
cout<<"enter no. of processes: ";
cin>>n;
for(i=0;i<n;i++)
{ cout<<"enter arrival time for process  "<<i<<endl;
cin>>a[i];
cout<<"enter burst time for process  "<<i<<endl;
cin>>b[i];
}
for(i=0;i<n;i++)
{ for(j=i;j<n;j++)
{ if(a[i]>a[j])
{ swap(a[i],a[j]);
swap(b[i],b[j]);
}
}
cout<<a[i];
}
for(i=0;i<n;i++)
{ sum+=b[i];
cout<<"tat for process  "<<i<<" is: "<<sum-a[i]<<"waiting process of  "<<i<<" is: "<<sum-a[i]-b[i];
}
}
