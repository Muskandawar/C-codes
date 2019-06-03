#include<iostream>
#include<cmath>
using namespace std;
int main()
	{  int a,r,n=0,max=0,count=0;
	cout<<"enter value of a: ";
	cin>>a;
	while(a!=0)
	{ 
	r=a%2;
	a=a/2;
	if(r==0)
	{ count=0;
	}
	else
	{ count++;
	if(count>=max)
	{ max=count;
	}
	}
	}	
	cout<<max;
	}
