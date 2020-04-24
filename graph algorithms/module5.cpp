#include<iostream>
#include<cstdlib>
#include"module5.h"
#include"list1.cpp"
#include"queue21.cpp"
using namespace std;


int iscycle1(graph* G,int visit[],int i)
{
int par[G->size+1];
for(int i=0;i<G->size;i++){par[i]=-1;}
queue21* q=(queue21*)malloc(sizeof(queue21));
q->front=-1;q->rear=-1;
visit[i]=1;
q->enqueue(i);
int v;
while(q->front!=-1)
{
v=q->dequeue();
for(int i=0;i<G->size;i++)
{
if(G->adjmatrix[v][i]!=0)
{
if(visit[i]!=1)
{
visit[i]=1;
q->enqueue(i);
par[i]=v;
}
else
{
if(par[v]!=i)
return 1;
}
}
}

}
return 0;
}



int cyclecheck1(graph* G)
{
int visited[G->size+1];for(int i=0;i<G->size;i++){visited[i]=0;}
int check=0;
for(int i=0;i<G->size;i++)
{
if(visited[i]!=1)
{
check=iscycle1(G,visited,i);
if(check==1)
{return 1;}
}
}
return 0;
}

int loopcheck(graph* G,list1* a,node* b)
{
graph* pass=(graph*)malloc(sizeof(graph));
pass->size=G->size;
for(int i=0;i<G->size;i++)
for(int j=0;j<G->size;j++)
{pass->adjmatrix[i][j]=0;}
node* temp=a->list1;
while(temp!=NULL)
{
pass->adjmatrix[temp->u][temp->v]=temp->weight;
pass->adjmatrix[temp->v][temp->u]=temp->weight;
temp=temp->nptr;
}
temp=b;
pass->adjmatrix[temp->u][temp->v]=temp->weight;
pass->adjmatrix[temp->v][temp->u]=temp->weight;

return cyclecheck1(pass);
}

void mst:: MST_Kruskal( graph* G)
{
int visit[G->size+1],weight=0;
for(int i=0;i<G->size;i++){visit[i]=0;}
list1* l=(list1*)malloc(sizeof(list1));
l->length=0;
for(int i=0;i<G->size;i++)
{
for(int j=i+1;j<G->size;j++)
{
if(G->adjmatrix[i][j]!=0)
{
l->push(i,j,G->adjmatrix[i][j]);
}
}
}
list1*a=(list1*)malloc(sizeof(list1));
a->length=0;
a->list1=NULL;
l->ascsort();
node* temp=l->list1;
while(temp!=NULL)
{
int check=loopcheck(G,a,temp);

 if(check!=1)
{
  a->push(temp->u,temp->v,temp->weight);
}
temp=temp->nptr;
}
cout<<"edges of spanning tree :\n";

a->display();
}


void mst::MST_Prim(graph G)
{
int visited[G.size+1];int count=G.size-1;
for(int i=0;i<G.size;i++){visited[i]=0;}
visited[1]=1;
list1* result=(list1*)malloc(sizeof(list1));
result->length=0;
result->list1=NULL;

while(count>0)
{
list1*a=(list1*)malloc(sizeof(list1));
a->length=0;
a->list1=NULL;

for(int i=0;i<G.size;i++)
for(int j=0;j<G.size;j++)
{
if((visited[i]==1)&&(visited[j]!=1))
{
if(G.adjmatrix[i][j]!=0)
{a->push(i,j,G.adjmatrix[i][j]);}
}
}

a->ascsort();
node* temp=a->list1;
result->push(temp->u,temp->v,temp->weight);
visited[temp->v]=1;
count--;
}

result->display();

}
int connected(graph G,int visit[])
{
for(int i=0;i<G.size;i++){visit[i]=0;}
queue21* q=(queue21*)malloc(sizeof(queue21));
q->front=-1;q->rear=-1;
visit[0]=1;
q->enqueue(0);
int v;
while(q->front!=-1)
{
int v=q->dequeue();
for(int i=0;i<G.size;i++)
{
if((G.adjmatrix[v][i]!=0)&&(visit[i]!=1))
{
visit[i]=1;
q->enqueue(i);
}
}
}

for(int i=0;i<G.size;i++)
{
if(visit[i]!=1){return 0;}
}
return 1;
}

void mst:: MST_youralgo(graph G)
{
int visited[G.size];
list1*a=(list1*)malloc(sizeof(list1));
a->length=0;
a->list1=NULL;
list1* result=(list1*)malloc(sizeof(list1));
result->length=0;
result->list1=NULL;
for(int i=0;i<G.size;i++)
{
for(int j=i+1;j<G.size;j++)
{
if((G.adjmatrix[i][j])!=0)
{a->push(i,j,G.adjmatrix[i][j]);}

}
}

a->descsort();
node* temp=a->list1;
while(temp!=NULL)
{
G.adjmatrix[temp->u][temp->v]=0;
G.adjmatrix[temp->v][temp->u]=0;
int check=connected(G,visited);
if(check==0)
{
 G.adjmatrix[temp->u][temp->v]=temp->weight;
G.adjmatrix[temp->v][temp->u]=temp->weight;
result->push(temp->u,temp->v,temp->weight);
}
temp=temp->nptr;
}
result->display();

}










