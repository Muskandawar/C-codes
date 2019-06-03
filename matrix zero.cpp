#include<iostream>
using namespace std;
int main()
{ int i,j,a[4][4],m[4][4],k;
for(i=0;i<4;i++)
{ for(j=0;j<4;j++)
{ 
cin>>a[i][j];
}
}
for(i=0;i<4;i++)
{ for(j=0;j<4;j++)
{ if(a[i][j]==0)
for(k=0;k<4;k++)
{ m[k][j]=m[i][k]=0;
}
else
{ m[i][j]=a[i][j];
}
}
}
for(i=0;i<4;i++)
{ for(j=0;j<4;j++)
{ cout<<m[i][j];
}
}
}
