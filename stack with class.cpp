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
  void print()
  { for(int i=top;i>=0;i--)
  { cout<<array[i];
  }
  }
  int precedence(char p)
  {
      if(p=='^')
        return 3;
      if(p=='*' || p=='/')
        return 2;
      if(p=='+' || p=='-')
        return 1;
      else
        return 0;
  }
  char peek()
  {
      return(array[top]);
  }
  void infixtopostfix(string in)
  { stack s;
      string post;
      int i;
      int l=in.length();
        s.push('N');
  for(i=0;i<l;i++)
  {
      if((in[i]>='a' && in[i]<='z' )|| (in[i]>='A' && in[i]<='Z'))
      {
          post=post+in[i];
      }
      else if(in[i]=='(')
      {
          s.push('(');
      }
      else if(in[i]==')')
      {
          while(s.peek()!='N' || s.peek()!='(')
          {
              char c=s.peek();
              s.pop();
              post=post+c;
          }
          if(s.peek()=='(')
          {
              char c=s.peek();
              s.pop();

          }
      }
      else
      {
          /*while(s.peek()!='N' && precedence(in[i])<=precedence(s.peek()))
          {
                char c=s.peek();
                s.pop();
                post=post+c;
          }*/
          s.push(in[i]);
      }
      while(s.peek()!='N')
      {
          char c=s.peek();
          s.pop();
          post=post+c;
      }
      cout<<post<<endl;
  }

  }
};
int main()
{ stack s;
string infix="a+b*(c^d-e)^(f+g*h)-i";
//s.push(5);
//s.push(6);
//s.push(7);
//s.print();
//s.pop();
//s.print();
//s.del();
s.infixtopostfix(infix);
}
