#include<iostream>
using namespace std;
class queue
{
public:
int queuearr[50];
int rear;
int front;
int size;
void enqueue(int x);
int dequeue();
void display();
};





void queue::enqueue(int x)
{
if(size==50)
{
cout<<"queue is full\n";
}
else
{
if(front==-1)
{
front=0;rear=0;queuearr[0]=x;
}
else
{queuearr[++rear]=x;}
size++;
}
}
int queue::dequeue()
{
if(front==-1)
{cout<<"queue is empty\n";}
else
{
if(rear==front)
{int z=queuearr[rear];rear=-1;front=-1;size--;return z;}
else
{
size--;
return queuearr[front++];}
}
}
void queue::display()
{
for(int i=front;i<=rear;i++)
{
cout<<queuearr[i]<<"  ";
}
cout<<"\n";
}   

/*int main()
{
queue* q=(queue*)malloc(sizeof(queue));
q->front=-1;
q->rear=-1;

q->enqueue(1);
q->enqueue(3);
q->display();
q->enqueue(2);
cout<<q->dequeue()<<"\n";
q->display();
q->enqueue(4);
cout<<q->dequeue()<<"\n";
q->display();
cout<<q->dequeue()<<"\n";
q->display();
cout<<q->dequeue()<<"\n";
q->display();


}*/
