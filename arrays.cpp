#include<iostream>
#include<math.h>
using namespace std;
void digits(int *p)
{   int digitsno,i,sum=0;
    cout<<"enter no. of digits you want to enter: ";
    cin>>digitsno;
    for(i=0;i<digitsno;i++)
    { cout<<"enter value: ";
    cin>>p[i];
	}
	for(i=0;i<digitsno;i++)
	{ sum=sum+p[i]*pow(10,digitsno-i-1);
	}
	cout<<"sum is: "<<sum;
}
void oddfreq(int *p)
{    int i,j,count=0,n;
     cout<<"enter no. of elements: ";
     cin>>n;
    for(i=0;i<n;i++)
    { cout<<"enter elements: ";
    cin>>p[i];
}
     for(i=0;i<n;i++)
     { for(j=0;j<n;j++)
     { if(p[i]<=p[j])
      swap(p[i],p[j]);
	 }
	 }
     for(i=0;i<n;i++)
     { 
	 count=0;
	 for(j=0;j<n;j++)
     { if(p[i]==p[j])
	 count++;
	 }
	 if(count%2!=0)
	 { cout<<p[i];
	 }
	 if(p[i]==p[i+1])
	 { i=i+count;
	 }
	 }
	 }
void mode(int *p)
{     int i,j,count=1,max=1,pos=p[0],n;
     cout<<"enter no. of elements: ";
     cin>>n;
    for(i=0;i<n;i++)
    { cout<<"enter elements: ";
    cin>>p[i];
    }
    for(i=0;i<n;i++)
    { for(j=0;j<n;j++)
    { if(p[i]<=p[j])
    swap(p[i],p[j]);
	 }
	 }
	 for(i=1;i<n;i++)
     {
     if(p[i]==p[i-1])
	 count++;
	 else
	 { if(count>max)
	 { max=count;
	pos=p[i-1];
	 }
	 count=1;
	 }
}
if(count>max)
{ max=count;
pos=p[n-1];
}
cout<<pos;
}
int main()
{  int a[10];
   //digits(a);
   //oddfreq(a);
   mode(a);
}
