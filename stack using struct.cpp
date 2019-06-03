#include<iostream>
#define max 10
using namespace std;
struct stack{
     int top;
     int capacity;
     int *array;
};
struct stack *create()
{    struct stack *s=new (struct stack);
     s->top=-1;
     s->capacity=max;
     s->array=new int[s->capacity];
     return s;
}
void push(stack *s,int val)
{    if(s->top>=max)
    { cout<<"stack overflow"; }
    s->top++;
     s->array[s->top]=val;
}
int pop(stack *s)
{     if(s->top==-1)
      { cout<<"stack underflow";
	  }
	  else
	  {
	  s->top--;
	  return (s->array[s->top+1]);
	  }

}
void display(stack *s)
{     for(int i=s->top;i>=0;i--)
      { cout<<s->array[i]<<endl;
	  }
}
void reverse(stack *s)
{      for(int i=s->top;i>=2;i--)
       { swap(s->array[i],s->array[s->top-i]);
	   }
}
void conversion(stack *s,int val)
{       int r;
        for(int i=0;i<s->capacity;i++)
        { r=val%2;
        push(s,r);
        val=val/2;
		}
		push(s,1);
}
void evaluatepostfix(stack *s)
{   string exp;
    int i;
    getline(cin,exp);
    for(i=0;exp[i];i++)
    {   if(exp[i]==' ')
    continue;
    else if(isdigit(exp[i]))
    {   int num=0;
        while(isdigit(exp[i]))
        {
            num=num*10+(int)(exp[i]-'0');
            i++;
        }
        i--;
        push(s,num);
        //display(s);
    }/*
    else if(exp[i]=='+')
    {
        int r=pop(s);
        int p=pop(s);
        push(s,r+p);
    }

    else if(exp[i]=='-')
    {
        int r=pop(s);
        int p=pop(s);
        push(s,p-r);
    }

    else if(exp[i]=='/')
    {
        int r=pop(s);
        int p=pop(s);
        push(s,p/r);
    }

    else if(exp[i]=='*')
    {
        int r=pop(s);
        int p=pop(s);
        push(s,p*r);
    }*/

    else
    {
        int r,p;
        r=pop(s);
        p=pop(s);
        switch(exp[i])
        {
        case '+':
        push(s,p+r );
        break;
        case '-':
        push(s,p-r );
        break;
        case '*':
        push(s,p*r );
        break;
        case '/':
        push(s,p/r );
        break;
    }
    }
}
display(s);}

int main()
{    struct stack *s;
     s=create();
     push(s,10);
	 push(s,20);
     push(s,30);
     push(s,40);
	 display(s);
     cout<<endl;
     int t=pop(s);
     cout<<"Popped element is "<<t<<endl;
     display(s);
      reverse(s);
      cout<<endl;
      display(s);
      cout<<endl;
      conversion(s,24);
      display(s);*/
      evaluatepostfix(s);
}

