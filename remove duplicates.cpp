#include<iostream>
using namespace std;
void dup(int *p,int n)
{ int i,j,k;
for(i=0;i<n;i++)
{ cout<<"enter value: ";
cin>>p[i];
}
for(i=0;i<n;i++)
{ for(j=i+1;j<n;j++)
{ if(p[i]==p[j])
 { for(k=j;k<n;k++)
 { p[k]=p[k+1];
 }
 n--;
}
}
}
for(i=0;i<n;i++)
{ cout<<p[i]<<endl;
}
}
int main()
{ int a[10];
dup(a,6);
}
