#include<iostream>
using namespace std;
int main()
{ int i,j,a[5][5],b[5][5],mul[5][5],n;
cout<<"enter n: ";
cin>>n;
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
cout<<"enter elements for row: "<<i<<j;
cin>>a[i][j];
}
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
cout<<"enter elements: "<<i<<j;
cin>>b[i][j];
}
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{ for(int k=0;k<n;k++)
mul[i][j]+=a[i][k]*b[j][k];
}
}
}
