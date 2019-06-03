#include<stdio.h>
#include<stdlib.h>
void append();
void addatbegin();
int length();
void display();
void addinbetween();
void del();
struct node
{ int data;
struct node *left;
struct node *right;
};
struct node *root=NULL;
int count=0;
int main()
{ int ch=0,count;
while(ch!=7)
{ printf("double linked lists operations: \n");
printf("1.add at end: \n");
printf("2.add at begin: \n");
printf("3.find length: \n");
printf("4.add in between: \n");
printf("5.display all elements: \n");
printf("6.delete the element: \n");
printf("7.exit \n");
printf("enter value: ");
scanf("%d",&ch);
switch(ch)
{ case 1:
 append();
 break;
 case 2:
 addatbegin();
 break;
 case 3:
int len;
len=length();
printf("%d",len);
break;
case 4:
addinbetween();
break;
case 5:
display();
break;
case 6:
del();
break;
case 7:
printf("exit");
default:
	printf("default");
}
}
}
void append()
{ struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data: ");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
{ root=temp;
}
else
{ struct node *p;
p=root;
while(p->right!=NULL)
{ p=p->right;
}
p->right=temp;
temp->left=p;
}
count++;
}
void addatbegin()
{ struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter data: ");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
{ temp=root;
}
else
{ temp->right=root;
root->left=temp;
root=temp;
}
count++;
}
int length()
{
return count;
}
void display()
{ struct node *temp;
temp=root;
printf("%d->",root->data);
while(temp->right!=NULL)
{ temp=temp->right;
printf("%d->",temp->data);
}
}
void addinbetween()
{ struct node *temp,*p;
p=root;
int i=1,loc;
printf("enter location:");
scanf("%d",&loc);
while(i<loc)
{ p=p->right;
i++;
}
temp=(struct node*)malloc(sizeof(struct node));
printf("enter node data: ");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
temp->right=p->right;
p->right->left=temp;
temp->left=p;
p->right=temp;
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
root=temp->right;
root->left=NULL;
free(temp);
}
else
{ struct node *p=root,*q;
int i=1;
while(i<loc-1)
{ p=p->right;
i++;
}
q=p->right;
if(loc!=count)
q->right->left=p;
p->right=q->right;
free(q);
}
count--;
}
