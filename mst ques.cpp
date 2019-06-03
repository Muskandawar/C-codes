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
    void createl2(node *x)
    { node *p;
    for(int i=0;i<2;i++)
    {
	node *temp=new node;
	temp->data=x->data+x->next->next->data;
	x=x->next->next;
    temp->next=NULL;
     if(head==NULL)
    head=temp;
    else
    { p=head;
    while(p->next!=NULL)
    { p=p->next;
	}
	p->next=temp;
	}
    }
	}
	void createl3(node *y)
	{ node *p;
	for(int i=0;i<2;i++)
	{ node *temp=new node;
	temp->data=y->next->data+y->next->next->next->data;
	y=y->next->next;
	temp->next=NULL;
	if(head==NULL)
	head=temp;
	else
	{ p=head;
	while(p->next!=NULL)
	{
	p=p->next;
	}
	p->next=temp;
	}
	}
}
    void createl(node *x,node *y,node *z)
    { node *p;
	for(int i=0;i<10;i++)
    { node *temp=new node;
    if(i<5)
    { if(i%2==0)
   { temp->data=x->data;
   x=x->next;
	}
    else
    {temp->data=y->data;
    y=y->next;
	}
	} 
	if(i>5)
	{ if(i%2==0)
	{temp->data=x->data;
	x=x->next;
	}
	else
	{temp->data=z->data;
	z=z->next;
	}
	}
    temp->next=NULL;
    if(head==NULL)
    head=temp;
    else
    { p=head;
    while(p->next!=NULL)
    { p=p->next;
	}
	p->next=temp;
	}
	}
}
	void insert(node *x)
	{ node *temp=x;
	node *p=head;
	while(temp->next!=NULL)
	{ temp=temp->next;
	}
	for(int i=0;i<5;i++)
    { 
	p=p->next;
	}
	p->data=x->data+temp->data;
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
{ linkedlist l1,l2,l3,l;
l1.append();
l1.display();
cout<<endl;
l2.createl2(l1.head);
l2.display();
cout<<endl;
l3.createl3(l1.head);
l3.display();
cout<<endl;
l.createl(l1.head,l2.head,l3.head);
l.insert(l1.head);
l.display();
}
