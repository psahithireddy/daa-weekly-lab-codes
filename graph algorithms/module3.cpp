#include<iostream>
#include"stack.cpp"
#include"queue.cpp"
#include"module3.h"
#include"list.cpp"
#include<iostream>
#include<cstdlib>
using namespace std;
#define infinite 2147483647


void modbfs::bfs(graph G,int source)
{

queue* q=(queue*)malloc(sizeof(queue));
q->front=-1;q->rear=-1;q->size=0;
for(int x=0;x<50;x++)
{ pred[x]=-1; visited[x]=0; dist[x]=infinite; q->queuearr[x]=0;}
//cout<<source<<"  ";
visited[source]=1;dist[source]=0;
q->enqueue(source);
int v;

while(q->front!=-1)
{
v=q->dequeue();
visited[v]=1;

for(int i=0;i<G.size;i++)
{

if((G.adjmatrix[v][i]!=0)&&(visited[i]!=1))
{
//cout<<i<<"  ";

visited[i]=1;
dist[i]=dist[v]+G.adjmatrix[v][i];
pred[i]=v;
q->enqueue(i);
}
}

}
}
int iscycle(graph* G,int visit[],int i)
{
int par[G->size];
for(int i=0;i<G->size;i++){par[i]=-1;}
queue* q=(queue*)malloc(sizeof(queue));
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



int cyclecheck(graph* G)
{
int visited[G->size];for(int i=0;i<G->size;i++){visited[i]=0;}
int check=0;
for(int i=0;i<G->size;i++)
{
if(visited[i]!=1)
{
check=iscycle(G,visited,i);
if(check==1)
{return 1;}
}
}
return 0;
}

int loopcheck(graph G,list* a,node* b)
{
graph* pass=(graph*)malloc(sizeof(graph));
pass->size=G.size;
for(int i=0;i<G.size;i++)
for(int j=0;j<G.size;j++)
{pass->adjmatrix[i][j]=0;}
node* temp=a->list;
while(temp!=NULL)
{
pass->adjmatrix[temp->u][temp->v]=temp->weight;
pass->adjmatrix[temp->v][temp->u]=temp->weight;
temp=temp->nptr;
}
temp=b;
pass->adjmatrix[temp->u][temp->v]=temp->weight;
pass->adjmatrix[temp->v][temp->u]=temp->weight;

return cyclecheck(pass);
}

void path:: MAX_Weight_MST(graph G)
{
int visit[G.size],weight=0;
for(int i=0;i<G.size;i++){visit[i]=0;}
list* l=(list*)malloc(sizeof(list));
l->length=0;
for(int i=0;i<G.size;i++)
{
for(int j=i+1;j<G.size;j++)
{
if(G.adjmatrix[i][j]!=0)
{
l->push(i,j,G.adjmatrix[i][j]);
}
}
}
list* a=(list*)malloc(sizeof(list));
a->length=0;
a->list=NULL;
l->descsort();
node* temp=l->list;
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


void order(graph G,int visit[],int dist[],int source)
{
 visit[source]=1;
 for(int i=0;i<G.size;i++)
{
if((G.adjmatrix[source][i]!=0))
{
if(visit[i]!=1)
{order(G,visit,dist,i);}}

if(dist[source]<dist[i]+G.adjmatrix[source][i])
{dist[source]=dist[i]+G.adjmatrix[source][i];}

}
}


void path::BFS_SPATH(graph G,int s,int flag)
{int source=s;
if(flag==0)
{
modbfs* a=(modbfs*)malloc(sizeof(modbfs));

a->bfs(G,source);
for(int i=0;i<G.size;i++)
{
if(i!=source)
{
if(a->pred[i]==-1)
{cout<<source<<"  and  "<<i<<" are not connected\n";}
else
{
stack* s=(stack*)malloc(sizeof(stack));
s->top=-1;
s->size=0;
int j=i;
while(j!=-1)
{s->push(j);j=a->pred[j];}
cout<<"shortest path between "<< source <<"  and  "<<i<<" is \n";
s->display();
cout<<"distance : "<<a->dist[i]<<"\n";
}
}
}
}
else if(flag==1)
{
int dist[G.size+1],visited[G.size+1];
queue* q=(queue*)malloc(sizeof(queue));
q->front=-1;
q->rear=-1;
for(int i=0;i<G.size;i++){dist[i]=infinite;visited[i]=0;}
dist[source]=0;
//bfs(G,dist,q,source);
visited[source]=1;
q->enqueue(source);
int v;
cout<<source<<"  ";

while(q->front!=-1)
{
v=q->dequeue();

for(int i=0;i<G.size;i++)
{
if(G.adjmatrix[v][i]!=0)
{
if(visited[i]!=1){visited[i]=1;q->enqueue(i);cout<<i<<"  ";}
if(dist[i]>dist[v]+G.adjmatrix[v][i])
{
dist[i]=dist[v]+G.adjmatrix[v][i];
}
}  
}
}
for(int i=0;i<G.size;i++)
{
cout<<"shortest path from "<<source<<" to "<<i<<" is :"<<dist[i]<<"\n";
}
}
}



void path::LPATH(graph G,int flag)
{
if(flag==0)
{
modbfs* b=(modbfs*)malloc(sizeof(modbfs));
b->bfs(G,0);
int index=0,max=b->dist[0];
for(int x=1;x<G.size;x++)
{
if(max<b->dist[x])
{max=b->dist[x];index=x;}
}
modbfs* c=(modbfs*)malloc(sizeof(modbfs));
c->bfs(G,index);
int index2=index;max=c->dist[index];
for(int x=0;x<G.size;x++)
{
if(max<c->dist[x])
{max=c->dist[x];index2=x;}
}
int j=index2;
stack* s=(stack*)malloc(sizeof(stack));s->top=-1;
while(j!=-1)
{
s->push(j);
j=c->pred[j];
}
cout<<"longest path in tree \n";
s->display();
cout<<"distance : "<<c->dist[index2]; 
}
else if(flag==1)
{
 stack* s=(stack*)malloc(sizeof(stack));
  s->top=-1;
  int visited[G.size];
  int distance[G.size];
  for(int i=0;i<G.size;i++){visited[i]=0;distance[i]=0;}
  
 for(int i=0;i<G.size;i++)
{
if(visited[i]!=1)
{order(G,visited,distance,i);}
}

int max=distance[1],index=1;
for(int i=0;i<G.size;i++)
{
if(max<distance[i]){max=distance[i];index=i;}
}

cout<<"maxdistance : "<<max<<"\n";

int temp=max,tempindex=index,tmax,tindex;

while(temp>=0)
{
cout<<" "<<tempindex<<" ";
int tmax=-1;
for(int i=0;i<G.size;i++)
{
if(G.adjmatrix[tempindex][i]!=0)
{

if(tmax<distance[i])
{
tmax=distance[i];tindex=i;
}
}
}

temp--;
tempindex=tindex;
}

}
}


/*

void path::LPATH2(graph *G)
{

  stack* s=(stack*)malloc(sizeof(stack));
  s->top=-1;
  int visited[G->size+1];
  int distance[G->size+1];
  for(int i=0;i<=G->size;i++){visited[i]=0;distance[i]=0;}
  
 for(int i=0;i<=G->size;i++)
{
if(visited[i]!=1)
{order(G,visited,distance,i);}
}

int max=distance[1],index=1;
for(int i=0;i<=G->size;i++)
{
if(max<distance[i]){max=distance[i];index=i;}
}

cout<<"maxdistance : "<<max<<"\n";

int temp=max,tempindex=index,tmax,tindex;

while(temp>=0)
{
cout<<" "<<tempindex<<" ";
int tmax=-1;
for(int i=0;i<=G->size;i++)
{
if(G->adjmatrix[tempindex][i]!=0)
{

if(tmax<distance[i])
{
tmax=distance[i];tindex=i;
}
}
}

temp--;
tempindex=tindex;
}

}


void path::LPATH(graph *G)
{
modbfs* b=(modbfs*)malloc(sizeof(modbfs));
b->bfs(G,1);
int index=1,max=b->dist[1];
for(int x=2;x<=G->size;x++)
{
if(max<b->dist[x])
{max=b->dist[x];index=x;}
}
modbfs* c=(modbfs*)malloc(sizeof(modbfs));
c->bfs(G,index);
int index2=index;max=c->dist[index];
for(int x=1;x<=G->size;x++)
{
if(max<c->dist[x])
{max=c->dist[x];index2=x;}
}
int j=index2;
stack* s=(stack*)malloc(sizeof(stack));s->top=-1;
while(j!=-1)
{
s->push(j);
j=c->pred[j];
}
cout<<"longest path in tree \n";
s->display();
cout<<"distance : "<<c->dist[index2]; 
}



void path::BFS_SPATH(graph* G,int source)
{

modbfs* a=(modbfs*)malloc(sizeof(modbfs));

a->bfs(G,source);
for(int i=0;i<=G->size;i++)
{
if(i!=source)
{
if(a->pred[i]==-1)
{cout<<source<<"  and  "<<i<<" are not connected\n";}
else
{
stack* s=(stack*)malloc(sizeof(stack));
s->top=-1;
s->size=0;
int j=i;
while(j!=-1)
{s->push(j);j=a->pred[j];}
cout<<"shortest path between "<< source <<"  and  "<<i<<" is \n";
s->display();
cout<<"distance : "<<a->dist[i]<<"\n";
}
}
}
}

*/
