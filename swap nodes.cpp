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
	void swap(int x,int y)
	{ 	node *temp=head;
	node *p=NULL;
	node *q=head;
	node *r=NULL;
	while(temp->data!=x)
	{ p=temp;
	temp=temp->next;
	}
	while(q->data!=y)
	{ r=q;
	q=q->next;
	}
	if(p!=NULL)
	{ p->next=q;
	}
	else
	{ head=q;
	}
	if(r!=NULL)
	{ r->next=temp;
	}
	else
	{ head=temp;
	}
	node *z=q->next;
	q->next=temp->next;
	temp->next=z;
	}
	void display()
	{ node *p=head;
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
	cout<<endl;
	l.swap(20,40);
	l.display();
	}
