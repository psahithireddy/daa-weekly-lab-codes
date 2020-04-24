#include<iostream>
using namespace std;
class queue21
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





void queue21::enqueue(int x)
{
if(size==50)
{
cout<<"queue21 is full\n";
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
int queue21::dequeue()
{
if(front==-1)
{cout<<"queue21 is empty\n";}
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
void queue21::display()
{
for(int i=front;i<=rear;i++)
{
cout<<queuearr[i]<<"  ";
}
cout<<"\n";
}   

/*int main()
{
queue21* q=(queue21*)malloc(sizeof(queue21));
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
