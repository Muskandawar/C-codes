#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    };
class linklist{
    node *head;
public:
    linklist()
    {
        head=NULL;
    }
    void append(int n)
    {
        for(int i=1;i<=n;i++)
        {
            node *temp=new node;
            temp->data=i;
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
                temp->next=head;
            }
            else
            {
                node *p=head;
                while(p->next!=head)
                {
                    p=p->next;
                }
                p->next=temp;
                temp->next=head;
            }
        }
    }
    void del(int loc)
    {
    node *temp=head;
    node *p=head;
    if(loc==1)
    {
        while(p->next!=head)
        {
            p=p->next;
        }
        head=temp->next;
        p->next=head;
        delete(temp);
    }
    else
    {   for(int i=1;i<loc-1;i++)
    {
        temp=temp->next;
    }
    p=temp->next;
    temp->next=p->next;
    delete p;

    }

    }
    void display()
    {
        node *temp=head;
        while(temp->next!=head)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
    void joshesphus(int n,int m)
    {   node *temp=head;
    node *p;
    int count=n;
    int t;
    while(count!=1)
    {
        if(count==n)
        {
            for(int i=1;i<m;i++)
            {
                temp=temp->next;
            }
            t=temp->data;
            del(t);
            n--;
        }
        else
        {
        for(int i=1;i<m;i++)
        {
            temp=temp->next;

        }
        t=temp->data;
        temp=temp->next;
        del(t);
         n--;
        }
    }
    cout<<temp->data;
    }
};
int main()
{   linklist l;
int n;
cout<<"enter no. of nodes";
cin>>n;
l.append(n);
//l.display();
//cout<<endl;
//l.del(6);
//l.display();
l.joshesphus(6,2);
}
