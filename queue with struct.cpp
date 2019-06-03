#include<iostream>
#define max 10
using namespace std;
struct queue{ 
       int front;
       int rear;
       int *array;
       int capacity;
};
struct queue *create()
{      struct queue *q=new (struct queue);
       q->front=-1;
       q->rear=-1;
       q->capacity=max;
       q->array=new int[q->capacity];
	   return q; 
}
void enqueue(queue *q,int val)
{      
       if(q->rear>=max)
       { cout<<"queue overflow";
	   }
	   q->rear++;
	   q->array[q->rear]=val;
	   
}
void dequeue(queue *q)
{       if(q->front==-1 && q->rear==-1)
        { cout<<"queue is empty";
		}
		else
		 { q->front++;
		 }
         
}
void display(queue *q)
{       for(int i=q->front+1;i<=q->rear;i++)
         { cout<<q->array[i]<<endl;
		 }
}
int main()
{       struct queue *q;
         int t;
         q=create();
         enqueue(q,10);
         enqueue(q,20);
         enqueue(q,30);
         enqueue(q,40);
         enqueue(q,50);
         display(q);
         dequeue(q);
         cout<<endl;
         display(q);
         enqueue(q,60);
         cout<<endl;
         display(q);
         cout<<endl;
         dequeue(q);
         display(q);
}
