#include<iostream>
using namespace std;
void swap(int *a,int *b)
{ int t;
t=*a;
*a=*b;
*b=t;
}
int main()
{ int i,j,a[5];
for(i=0;i<5;i++)
{ cout<<"enter elements: ";
cin>>a[i];
}
for(i=0;i<5;i++)
{ for(j=i+1;j<5;j++)
{ if(a[i]>a[j])
{ swap(a[i],a[j]);
}
}
}
for(i=0;i<5;i++)
{ cout<<"sequence is: "<<a[i];
}
}
