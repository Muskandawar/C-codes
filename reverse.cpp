#include<iostream>
using namespace std;
void rev(int a)
{ int rem,reverse=0;
while(a!=0)
{
rem=a%10;
reverse=reverse*10+rem;
a=a/10;
}
cout<<reverse;
}
int main()
{ rev(123);
}
