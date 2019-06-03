#include<iostream>
using namespace std;
void create(int *p,int *n)
{ cout<<"enter elements: ";
cin>>*n;
for(int i=0;i<*n;i++)
{ cin>>p[i];
}
}
void insert(int *p,int *n)
{ int i,pos,value;
cout<<"enter value to insert: ";
cin>>value;
cout<<"enter pos: ";
cin>>pos;
(*n)++;
for(i=*n;i>pos;i--)
{ p[i]=p[i-1];
}
p[pos]=value;
}
void display(int *p,int *n)
{ for(int i=0;i<*n;i++)
{ cout<<p[i]<<endl;
}
}
int main()
{ 
int a[100],r;
create(a,&r);
display(a,&r);
insert(a,&r);
display(a,&r);
}
