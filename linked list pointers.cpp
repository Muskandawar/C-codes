#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
int count=0;
void addnode(node **root)
{
	count++;
	int loc;
	cout<<"enter location: ";
	cin>>loc;
	struct node *temp=new node;
	cout<<"enter data for node: ";
	cin>>temp->data;
	temp->link=NULL;
	if(loc==1)
{
	 if(*root==NULL)
	 *root=temp;
	else
	{ temp->link=*root;
	*root=temp;
	}
}
else if(loc<count)
{    struct node *p=*root;
	 for(int i=1;i<loc-1;i++)
	 { p=p->link;
	 }
	 temp->link=p->link;
	 p->link=temp;
}
else if(loc=count)
{   struct node *p=*root;
	while(p->link!=NULL)
	{ p=p->link;
	}
	p->link=temp;
	}
}
void display(node **root)
{   struct node *temp=*root;
	while(temp!=NULL)
	{ cout<<temp->data<<"->";
	temp=temp->link;
	}
}
void deletenode(node **root)
{   int loc;
    cout<<"enter location to delete: ";
    cin>>loc;
    struct node *temp=*root;
    if(loc==1)
    {
	*root=temp->link;
	}
	else if(loc<=count)
	{ struct node *p;
	for(int i=1;i<loc-1;i++)
	{ temp=temp->link;
	}
	p=temp->link;
	temp->link=p->link;
	delete p;
	}
}
void reverse(node **root)
{
    struct node *current=*root;
     struct node *prev=NULL;
     struct node *next=NULL;
     while(current!=temp)
     {
     next=current->link;
     current->link=prev;
     prev=current;
     current=next;
	 }
	 *root=prev;
}
void search(node **root)
{    struct node *temp=*root;
     int find;
     cout<<"enter no. to find: ";
     cin>>find;
     while(temp!=NULL)
     { if(temp->data==find)
       cout<<"element found ";
       temp=temp->link;

	 }
}
void occurence(node **root)
{    struct node *temp=*root;
     int find,c=0;
     cout<<"enter element to find: ";
     cin>>find;
     while(temp!=NULL)
     { if(temp->data==find)
     c++;
     temp=temp->link;
	 }
	 cout<<"count is: "<<c<<endl;
}
int main()
{   struct node *root=NULL;
	int n;
	cout<<"enter no. of nodes: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	addnode(&root);
}
	display(&root);
	cout<<endl;
	//deletenode(&root);
	//display(&root);
	//cout<<endl;
	reverse(&root,3);
	display(&root);
	//search(&root);
	//occurence(&root);
}
