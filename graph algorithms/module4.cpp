#include"iostream"
#include<queue>
#include"module4.h"
#include"module1.h"
DFS d1;
using namespace std;

int bipartite(struct graph G)
{
    int V=G.size;	  
    int colorArr[V]; 
    for (int i = 0; i < V; ++i) 
        colorArr[i] = -1; 
    int src=0;
    colorArr[src] = 1; 
 
    queue <int> q; 
    q.push(src); 
  
    while (!q.empty()) 
    {  
        int u = q.front(); 
        q.pop(); 
  
        //  if there is a self-loop  
        if (G.adjmatrix[u][u] == 1) 
        return 0;  
  
        // Find all non-colored adjacent vertices 
        for (int v = 0; v < V; ++v) 
        { 
            if (G.adjmatrix[u][v]!=0 && colorArr[v] == -1) 
            { 
               
                colorArr[v] = 1 - colorArr[u]; 
                q.push(v); 
            } 
            else if (G.adjmatrix[u][v]==1 && colorArr[v] == colorArr[u]) 
                return 0; 
        } 
  }
    return 1; 
} 
void test:: Test_bipartite(struct graph G)
{
         int n=bipartite(G);
	if(n==1)
		cout<<"graph is bipartite\n";
	else
		cout<<"graph is not bipartite\n";
	}



void test::Test_articulationpoints(struct graph G)
{
	int R[50][50],n,flag=0;
	for(int i=0;i<G.size;i++)
	for(int j=0;j<G.size;j++)
	R[i][j]=G.adjmatrix[i][j];

	for(int k=0;k<G.size;k++)
	{

		for(int i=0;i<G.size;i++)
 		{
			G.adjmatrix[k][i]=G.adjmatrix[i][k]=0;
        	
		}
		G.extra=0;
		n=d1.dfs(G,k);
		
		cout<< " \n ";
		if(n>3)	
		{	
			cout<<k<<"is articulation point\n";
			flag=1;
		}
		for(int i=0;i<G.size;i++)
		for(int j=0;j<G.size;j++)
		G.adjmatrix[i][j]=R[i][j];
	}
	if(flag==0)
	{
		cout<<"graph G has no articulation points\n";
	}	
}
void test:: Test_bridges(struct graph G)
{
	int R[50][50],n,flag=0;
	for(int i=0;i<G.size;i++)
	for(int j=0;j<G.size;j++)
	R[i][j]=G.adjmatrix[i][j];

	for(int k=0;k<G.size;k++)
	{
		for(int h=k;h<G.size;h++)
		{
			if(G.adjmatrix[k][h]!=0)
			{	
				G.adjmatrix[k][h]=G.adjmatrix[k][h]=0;
			}
			n=d1.dfs(G,k);
			//cout<< " \n n is  "<<n;
			if(n>=3)	
			{	
				cout<<"\n"<<h<<"--"<<k<<"is  bridge\n";
				flag=1;
			}
			for(int i=0;i<G.size;i++)
			for(int j=0;j<G.size;j++)
			G.adjmatrix[i][j]=R[i][j];
		} 
	}
	if(flag==0)
	{
		cout<<"graph G has no bridges\n";
	}	
}






























	
