#include<iostream>
using namespace std;
void swap(int *a,int *b)
{ int t;
t=*a;
*a=*b;
*b=t;
}
int main()
{ int i,a[5],j;
for(i=0;i<5;i++)
{ cout<<"enter elements: ";
cin>>a[i];
}
for(i=0;i<5;i++)
{ for(j=0;j<4;j++)
{ if(a[j]>a[j+1])
{ swap(a[j],a[j+1]);
}
}
}
for(i=0;i<5;i++)
{ cout<<"sequence is: "<<a[i];
}
}
