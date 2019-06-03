#include<iostream>
using namespace std;
class pq
{
    public:
    int rear;
    int front;
    int size;
    int *array;
    int *priority;
    public:
        pq()
        {
            rear=-1;
            front=-1;
            size=20;
            array=new int[size];
            priority=new int[size];
        }
        void enqueue(int data,int prior)
        {
            if(front==-1)
            {   front++;
            }
            rear++;
            array[rear]=data;
            priority[rear]=prior;
            for(int i=0;i<=rear;i++)
            {
                for(int j=0;j<=rear;j++)
                {   if(priority[i]>priority[j])
                {   swap(priority[i],priority[j]);
                swap(array[i],array[j]);
                }
                }
            }

        }
        void dequeue()
        {   int i,max=0,min=0;
            for(i=0;i<=rear;i++)
            {
                min=i;
                if(priority[max]<=priority[min])
                {
                    max=min;
                }
            }
            swap(array[max],array[rear]);
            swap(priority[max],priority[rear]);
            rear--;
        }
        void display()
        {
            for(int i=0;i<=rear;i++)
            {
                cout<<array[i]<<" "<<priority[i]<<endl;
            }
        }
};
int main()
{
    pq p;
    p.enqueue(10,5);
    p.enqueue(20,4);
    p.enqueue(30,2);
    p.enqueue(40,3);
    p.enqueue(50,1);
    p.display();
    cout<<endl;
    p.dequeue();
    p.display();
    cout<<endl;
    p.enqueue(10,5);
    p.display();
}

