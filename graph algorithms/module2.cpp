#include"iostream"
#include"module2.h"
using namespace std;

class queeee1
{
public:
int queuearr[100];
int rear;
int front;
int size;
void enqueue11(int x);
int dequeue11();
void display();
};


void queeee1::enqueue11(int x)
{
	if(size==100)
	{
		cout<<"queeee1 is full\n";
	}
	else
	{
		if(front==-1)
		{
			front=0;
			rear=0;
			queuearr[0]=x;
		}
		else
		{
			queuearr[++rear]=x;
		}
	size++;
	}
}
int queeee1::dequeue11()
{
if(front==-1)
{cout<<"queeee1 is empty\n";}
else
{
if(rear==front)
{
	int z=queuearr[0];
	rear=-1;
	front=-1;
	size--;
	return z;
	}
else
{
size--;
return queuearr[front++];}
}
}
void queeee1::display()
{
for(int i=front;i<=rear;i++)
{
cout<<queuearr[i]<<"  ";
}
cout<<"\n";
}

int bfs::BFS(struct graph G,int s)
{
	queeee1 *q=(queeee1*)malloc(sizeof(queeee1));
	q->rear=-1;
	q->front=-1;
	q->size=0;
	int count=0;
    	//int colour1[50],colour2[50];
	int i,j=0;
	//cout<<"flag is"<<G.extra;
	for(int i=0;i<100;i++)
	{
		q->queuearr[i]=0;
	}
	for(int i=0;i<50;i++)
	{
		G.visit[i]=0;
	}
	cout<<s;
	q->enqueue11(s);
	int v;
	while(q->front!=-1)
{
	v=q->dequeue11();
	count++;
	G.visit[v]=1;
	for(i=0;i<G.size;i++)
	{			

		if((G.adjmatrix[v][i]!=0)&&(G.visit[i]!=1))
		{

			q->enqueue11(i);
			//q->display();
			if(G.extra!=1)
			cout<<"->"<<i;
			G.visit[i]=1;
			count++;
			
		}
}
}  	
	
for(int i=0;i<G.size;i++)
{
	if(G.visit[i]!=1)
	{
		cout<<"graph is not connected , complete traversal didn't occur\n";
		break;
	}
}
}
void bfs::BFS(struct graph G)
{
// for(int i=1;i<=G.size;i++)
 int i=0;
{
	BFS(G,i);
	cout<<"\n";
}
}
void bfs::BFS(struct graph G,int s,int t)
{
cout<<"\n";
queeee1 *q=(queeee1*)malloc(sizeof(queeee1));
	q->rear=-1;
	q->front=-1;
	q->size=0;

	int i;
	for(int i=0;i<100;i++)
	{
		q->queuearr[i]=0;
	}
	for(int i=0;i<50;i++)
	{
		G.visit[i]=0;
	}
	//cout<<s;
	q->enqueue11(s);
	int v;
	while(q->front!=-1)
{
	v=q->dequeue11();
	G.visit[v]=1;
	for(i=0;i<G.size;i++)
	{
		if((G.adjmatrix[v][i]!=0)&&(G.visit[i]!=1))
		{

			q->enqueue11(i);
			//q->display();
			//cout<<"->"<<i;
			G.visit[i]=1;
		}
	}
}
cout<<"\n";
if(G.visit[t]!=1)
{cout<<t<<" is not reachable from "<<s<<"\n";}
else
{cout<<t<<" is  reachable from "<<s<<"\n";}
}

