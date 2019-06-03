#include<iostream>
using namespace std;
class queue
{ public: int front;
int rear;
int size;
int *array;
public:
queue()
{ rear=-1;
front=-1;
size=20;
array=new int[size];
}
void enqueue(int data)
{ rear++;
if(front==-1)
{ front++;
}
array[rear]=data;
}
void dequeue()
{ front++;
}
void display()
{ for(int i=front;i<=rear;i++)
{ cout<<array[i]<<endl;
}
}
};
int main()
{ queue q;
q.enqueue(5);
q.enqueue(6);
q.enqueue(7);
q.display();
cout<<endl;
q.dequeue();
q.display();
}
