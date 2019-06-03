#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class linkedlist
{
public:
    node *head=NULL;
    void append(int n)
    {
        for(int i=0;i<n;i++)
        {
            node *temp=new node;
            node *p;
            p=head;
            cout<<"enter data: ";
            cin>>temp->data;
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
            }
            else
            {
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=temp;
        }
        }
    }
    void deletenode(int loc,int n)
    {

     node *temp=head;
    if(loc==1)
    {
	head=temp->next;
	}
	else if(loc<=n)
	{  node *p;
	for(int i=1;i<loc-1;i++)
	{ temp=temp->next;
	}
	p=temp->next;
	temp->next=p->next;
	delete p;
    }
    }
    void deleteduplicates(int n)
    {
        node *temp=head;
        node *p;
        for(int i=1;i<=n;i++)
        {   p=temp->next;
            for(int j=i+1;j<=n;j++)
            {   if(temp->data==p->data)
            {   p=p->next;
                deletenode(j,n);
                j--;
                n--;
            }
            else
            {
                p=p->next;
            }
            }
            temp=temp->next;
        }
    }
    void display()
    {
    node *temp=head;
	while(temp!=NULL)
	{ cout<<temp->data<<"->";
	temp=temp->next;
	}
    }
    void adjacentnodes()
    {
        node *prev=head;
        node *current=head->next->next;
        head=head->next;
        head->next=prev;
        while(current!=NULL && current->next!=NULL)
        {
           prev->next=current->next;
           prev=current;
           node *next=current->next->next;
           current->next->next=current;
           current=next;
        }
        prev->next=current;
    }
};
int main()
{
    linkedlist l;
    node *head=NULL;
    int n;
    cout<<"enter nodes: ";
    cin>>n;
    l.append(n);
   // l.deletenode(3,n);
    //l.deleteduplicates(n);
    //l.display();
    l.adjacentnodes();
    l.display();
}
