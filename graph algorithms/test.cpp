#include"iostream"
#include"module1.h"
#include"module2.h"
#include"module3.h"
#include"module4.h"
#include"module5.h"
using namespace std;
struct graph G;
DFS d;
bfs b;
test t;
mst m;
path p;
int main()
{
	int sel;
	cout<<"enter G.size\n";
	cin>>G.size;
	cout<<"is graph weighted (1)or unweighted(0)?\n";
	cin>>G.type_w;
	if(G.type_w==0)
	G.type_d=1;	
	
	 for(int i=0;i<G.size;i++)
 for(int j=0;j<G.size;j++)
 {
  if(j==i)
  continue;
  cout<<"\n Reltn between "<<i<<"&"<<j<<": ";
  cin>>G.adjmatrix[i][j];
 } 
 for(int i=0;i<G.size;i++)
 G.visit[i]=0;
 cout<<"->module1: dfs\n-module2:bfs\n ->module3: paths\n ->module4:test\n->module5:mst \n";
 cout <<"select module from 1 to 5 ,press 0 to exit\n";
 cin >>sel;
while(sel!=0)
{
 if(sel==1) 
 {
  cout<<"\n"<<"dfs:"<<"\n";
  d.dfs(G);
  d.dfs(G,1);
  d.dfs(G,0,2);
}
 if(sel==2)
{		
 cout<<"\n"<<"bfs:"<<"\n";
  b.BFS(G);
  b.BFS(G,1);
  b.BFS(G,1,2);
}
if(sel==3)
{ int flag=0;
  if(G.type_w==1)
  flag=1;
cout<<"\n"<<"mod3\n";
  p.BFS_SPATH(G,0,flag);
  p.LPATH(G,flag);
  p.MAX_Weight_MST(G);
}
if(sel==4)
{
  cout<<"\n"<<"test:"<<"\n";
  t.Test_bipartite(G);
  t.Test_articulationpoints(G);
  t.Test_bridges(G);
}
if(sel==5)
{
  cout<<"\n"<<"mst:"<<"\n";
  cout<<"using krushkals:\n";
  m.MST_Kruskal(&G);
  cout<<"using prims:\n";
  m.MST_Prim(G);
  cout<<"using your algo:\n";
  m.MST_youralgo(G);
 }
 cout <<"\nselect module from 1 to 5 ,press 0 to exit\n";
 cin >>sel;
}
  return 0;
}	
