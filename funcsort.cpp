#include<iostream>
using namespace std;
void swap(int *a,int *b)
{ int t;
t=*a;
*a=*b;
*b=t;
}
int* selsort(int *s,int size )
{ int i,j;
for(i=0;i<size;i++)
{ cout<<"enter elements: ";
cin>>s[i];
}
for(i=0;i<size;i++)
{ for(j=i+1;j<size;j++)
{ if(s[i]>s[j])
 swap(s[i],s[j]);
}
}
return s;
}
int main()
{ int a[100],*b;
b=selsort(a,6);
for(int i=0;i<6;i++)
{ cout<<b[i];
}
}

