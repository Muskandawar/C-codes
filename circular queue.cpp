#include<iostream>
#define max 6
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
       if(q->rear>max)
       { cout<<"queue overflow";
	   }
	   else
	   q->rear=(q->rear+1)%q->capacity;
	   q->array[q->rear]=val;
	   
}
void dequeue(queue *q)
{       if(q->front==-1 && q->rear==-1)
        { cout<<"queue is empty";
		}
	    q->front=(q->front+1)%q->capacity;
}
void display(queue *q)
{       int i=q->front+1;
        while(i!=q->rear)
        { cout<<q->array[i]<<endl;
        i++;
        i=i%q->capacity;
		}
        cout<<q->array[i]<<endl;
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
         enqueue(q,60);
         display(q);
         cout<<endl;
         dequeue(q);
         dequeue(q);
         display(q);
         cout<<endl;
         enqueue(q,80);
         enqueue(q,90);
         display(q);
}
