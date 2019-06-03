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
    void append()
    {
        for(int i=1;i<=n;i++)
        {
            node *temp=new node;
            cout<<"enter data: ";
            cin>>temp->data;
            temp->next=NULL;
            if(head==NULL)
            {
                head=temp;
                temp->next=temp;
            }
            else
            {
                node *p=head;
                while(p->next!=NULL)
                {
                    p=p->next;
                }
                p->next=temp;
                temp->next=head;
            }
        }
    }
    void del()
    {

    }
    void joshesphus(int n,int m)
    {

    }
};
int main()
{   linklist l;
int n;
cout<<"enter no. of nodes";
cin>>n;
l.append(n);

}
