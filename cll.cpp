#include<stdio.h>
#include<stdlib.h>
void append();
void display();
int length();
void addbegin();
void del();
struct node
{ int data;
struct node* link;
};
struct node* root=NULL;
int count=0;
void append()
{ struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data: ");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL)
{ temp->link=temp;
root=temp;
}
else
{ struct node* p;
p=root;
while(p->link!=root)
{ p=p->link; 
}
temp->link=p->link;
p->link=temp;
}
count++;
}
void addbegin()
{ struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data: ");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL)
{ temp->link=temp;
}
else
{ temp->link=root;
struct node* p=root;
while(p->link!=root)
{ p=p->link;
}
p->link=temp;
root=temp;
}
count++;
}
void addinbetween()
{ struct node *temp,*p;
int loc,i=1;
printf("enter location: ");
scanf("%d",&loc);
p=root;
while(i<loc-1)
{ p=p->link;
i++;
}
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data: ");
scanf("%d",&temp->data);
temp->link=NULL;
temp->link=p->link;
p->link=temp;
count++;
}
void del()
{ struct node *temp;
int loc;
printf("enter the location: ");
scanf("%d",&loc);
if(loc>length())
{ printf("invalid location");
}
else if(loc==1)
{ temp=root;
struct node* p;
while(p->link!=root)
{ p=p->link;
}
root=temp->link;
p->link=root;
temp->link=NULL;
free(temp);
}
else
{ struct node *p=root,*q;
int i=1;
while(i<loc-1)
{ p=p->link;
i++;
}
q=p->link;
p->link=q->link;
q->link=NULL;
free(q);
}
}
void display()
{ struct node* temp;
temp=root;
do
{ printf("%d->",temp->data);
temp=temp->link;
} while(temp!=root);
}
int length()
{ return count;
}
int main()
{ int n,count=0;
printf("enter n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
append();
}
addbegin();
addinbetween();
display();
del();
display();
int len;
len=length();
printf("%d",len);
}
