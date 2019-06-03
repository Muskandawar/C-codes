#include<iostream>
using namespace std;
int main()
{ int a[10]={1,2,3,4,5,6,7,8,9,0},i,temp;
for(i=0;i<5;i++)
{ swap(a[i],a[9-i]);
}
for(i=0;i<10;i++)
{ cout<<a[i];
}
}
