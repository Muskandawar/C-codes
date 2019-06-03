#include<iostream>
using namespace std;
int main()
{ int m[3][3],i,j,n[3][3],s[3][3];
cout<<"enter elements for matrix 1:";
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
{ cin>>m[i][j];
}
}
cout<<"enter elements for matrix 2:";
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
{ cin>>n[i][j];
}
}
cout<<"by adding two matrices:";
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
{ s[i][j]=m[i][j]+n[i][j];
}
}
cout<<"displaying sum matrix";
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
{ cout<<s[i][j];
}
}

}
