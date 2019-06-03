#include<iostream>
#include<math.h>
using namespace std;
void sort(int *p)
{ int i,j,t;
for(i=0;i<750;i++)
{ for(j=i+1;j<750;j++)
{ if(p[i]>p[j])
{
t=p[i];
p[i]=p[j];
p[j]=t;
}
}
}
}
void random(int a,int c,int &x,int *s)
{ int m=100,i,x1,arr[750],q1,q3,iq,lf,uf;
float mean=0,median=0,sd=0;
for(i=0;i<750;i++)
{ x1=(a*x+c)%m;
mean=mean+x1;
x=x1;
arr[i]=x1;
s[i]=s[i]+x1;
cout<<x1<<" ";
}
cout<<endl;
mean=mean/750;
cout<<"mean is: "<<mean<<endl;
sort(arr);
cout<<"median is: "<<arr[375]<<endl;
q1=arr[187];
q3=arr[549];
iq=q3-q1;
lf=q1-(1.5*iq);
uf=q3+(1.5*iq);
cout<<"lf is: "<<lf<<" "<<"uf is: "<<uf<<endl;
for(i=0;i<750;i++)
{ 
sd=sd+pow(arr[i]-mean,2);
if(arr[i]<lf || arr[i]>uf)
{ cout<<arr[i]<<endl;
}
}
sd=pow(sd/750,0.5);
cout<<"sd is: "<<sd;
}
int main()
{ int a[6]={11,12,13,14,15,16},c[6]={37,38,39,40,41,42},i,x=1,s[750];
float total=0,st=0;
for(i=0;i<750;i++)
{ s[i]=0;
}
for(i=0;i<6;i++)
{ cout<<"data for subject "<<i+1<<"is:-"<<endl;
random(a[i],c[i],x,s);
}
cout<<"marks are: "<<endl;
int sum=0;
for(i=0;i<750;i++)
{ sum=sum+s[i];
}
cout<<sum/750<<endl;
sort(s);
for(i=0;i<750;i++)
{ st=st+pow(s[i]-sum/750,2);
}
st=pow(st/750,0.5);
cout<<st;
}
