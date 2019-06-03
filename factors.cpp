#include<iostream>
using namespace std;
void factors(int a)
{ for(int i=2;i<=a;i++)
{ if(a%i==0)
cout<<i<<endl;
}
}
int main()
{ factors(20);
}
