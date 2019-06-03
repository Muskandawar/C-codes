#include<iostream>
using namespace std;
class stack
{ public:
	int top;
	int capacity;
	char *array;
	public:
  stack()
  {  top=-1;
   capacity=20;
   array=new char[capacity];
  }
  void push(char data)
  { top++;
  array[top]=data;
  }
  char pop()
{ top--;
 return(array[top+1]);
  }
  char peek()
  {
      return(array[top]);
  }
  void print()
  { for(int i=top;i>=0;i--)
  { cout<<array[i];
  }
  }
  void check(string exp)
  {  stack s;
  for(int i=0;exp[i];i++)
  { if(exp[i]=='[' || exp[i]=='{' || exp[i]=='(')
        s.push(exp[i]);
      else
      {     char x;
            x=s.peek();
          switch(exp[i])
          {
          case ')':
            if(x=='(')
            pop();
            break;
          case ']':
            if(x=='[')
                pop();
            break;
          case '}':
            if(x=='{')
                pop();
            break;
      }
  }
  }
  if(top==-1)
  {
      cout<<"true";
  }
else
{
    cout<<"false";
}
  }
  };
  int main()
  {
      stack s;
      string exp="[(])";
      s.check(exp);
  }
