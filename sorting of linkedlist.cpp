#include<iostream>
using namespace std;
class node
{ public:
int data;
node *next;
};
class linkedlist
{  public:
	node *head=NULL;
	void append()
	{ int n;
	cout<<"enter no. of nodes: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	node *temp;
	temp=new node;
	temp->next=NULL;
	cout<<"enter data: ";
	cin>>temp->data;
	if(head==NULL)
	{ head=temp;
	}
	else
	{ node *p=head;
	while(p->next!=NULL)
	{ p=p->next;
	}
	p->next=temp;
}
}
}    
     void sort()
     { node *temp=head;
     node *p;
     node *q=head->next;
     if(head==NULL || head->data>=q->data)
     { q->next=head;
     head=q;
	 }
	 else
	 { while(temp->next!=NULL && temp->next->data<q->data)
	 { 
	 }
	 }
	 }
	 void display()
	 { node *p;
    p=head;
    while(p!=NULL)
    { cout<<p->data<<"->";
    p=p->next;
	}
	}
	 };
	 int main()
	 { linkedlist l;
	 l.append();
	 l.display();
	 l.sort();
	 }
