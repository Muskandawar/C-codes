#include<iostream>
using namespace std;
int max=100,top=-1;
int* push(int *stack,int value)
{ stack[top]=value;
top++;
}
int* pop(int *stack)
{ if(top==-1)
{ cout<<"no element";
}
else
{ top--;
}
}
int empty()
{ if(top==-1)
return 0;
else
return 1;
}
int* display(int *stack,int n)
{ int i;
for(i=0;i<n;i++)
{ cout<<stack[i];
}
}
int main()
{ int a[100],*b,e;
b=push(a,5);
b=push(a,6);
b=push(a,7);
b=pop(a);
e=empty();
cout<<e;
b=display(a,2);
}

