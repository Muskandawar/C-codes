#include<iostream>
using namespace std;
	class node
	{ 	public:
	int data;
	node *next;
	};
	class linkedlist
	{ public:
		node *head=NULL;
		void append(int n)
		{ 
		for(int i=0;i<n;i++)
		{ node *temp=new node;
		cout<<"enter data: ";
		cin>>temp->data;
		temp->next=NULL;
		node *p=head;
		if(head==NULL)
		{ head=temp;
		}
		else
		{ while(p->next!=NULL)
		{ p=p->next;
		}
		p->next=temp;
		}
		}
		}
		void display()
		{ node *p=head;
		while(p!=NULL)
		{ cout<<p->data<<"->";
		p=p->next;
		}
		}
	    void deletenode(int loc)
{   	node *temp=head;
    	if(loc==1)
	    { 
		head=temp->next;
		}
		else
		{ node *p;
		for(int i=1;i<loc-1;i++)
		{ temp=temp->next;
		}
		p=temp->next;
		temp->next=p->next;
		delete p;
		}
}
		void sumdel(int n)
		{ node *temp=head;
		node *p=head;
		int j,i;
		for(i=1;i<=n;i++)
		{ for(j=i+1;j<=n;j++)
		{ 
		p=p->next;
		if(p->data+temp->data==0)
		{ deletenode(j);
		deletenode(i);
		break;
		}
		}
		n=n-2;
		p=temp->next;
		temp=temp->next;
		}
		}
		
	};
	int main()
	{ linkedlist l;
	int y;
	cout<<"enter no. of elements: ";
	cin>>y;
	l.append(y);
	l.display(); 
	cout<<endl;
	l.sumdel(y);
	l.display();
//	l.deletenode(2);
	//l.display();
	}

