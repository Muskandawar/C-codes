#include<iostream>
using namespace std;
class node
{  public: 
int data;
node *link;
};
class queue
{ node *head;
public:
	 queue()
	 { head=NULL;
	 }
	 void enqueue(int value)
	 { node *temp,*p=head;
	 temp=new node;
	 temp->data=value;
	 temp->link=NULL;
	 if(head==NULL)
	 { head=temp;
	 }
	 else
	 { while(p->link!=NULL)
	 { p=p->link;
	 }
	 p->link=temp;
	 }
	 }
	 void dequeue()
	 { node *temp;
	 temp=head;
	 head=temp->link;
	 delete temp;
	 }
	 void display()
	 { node *temp=head;
	 while(temp!=NULL)
	 { cout<<temp->data<<endl;
	 temp=temp->link;
	 }
	 }
};
int main()
{  queue q;
q.enqueue(5);
q.enqueue(6);
q.enqueue(7);
q.display();
q.dequeue();
q.display();
}
