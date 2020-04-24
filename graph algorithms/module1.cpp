#include<iostream>
#include"module1.h"
using namespace std;
struct stack
{
	int a[50];
	int top;
}S;

int arr[50];
void push(int x)
{
	S.top++;
	S.a[S.top]=x;
}
int pop()
{
	int x;
	if(S.top==-1)
		return 0;
	else
	{
		x=S.a[S.top];
		S.top--;
		return x;
	}
}			
	
void DFS::dfs(struct graph G)
{
	S.top=-1;
	int i=0,j=0,k=0;
	
	while(G.visit[i]!=0 && i<G.size)
		i++;
	G.visit[i]=1;
	cout<<i;
	for(j=0;j<G.size;j++)
	{ 
		if(G.adjmatrix[i][j]!=0)
			push(j);
	}
	while(S.top!=-1)
	{		
		i=pop();
		if(G.visit[i]==0)
		{
			G.visit[i]=1;
			cout<<"->"<<i;
		}
		for(j=0;j<G.size;j++)
		{
			if(G.adjmatrix[i][j]!=0)
			{
				if(G.visit[j]==0)
					push(j);
			}
		}
	}
		cout<<"\n";
		for(i=0;i<G.size;i++)
			if(G.visit[i]==0)
			{
					dfs(G,i);	
					
				}			//handling disconnected componenets//						
}
int DFS::dfs(struct graph G,int v)
{ //  int G.extra=0;
	G.extra++;
	S.top=-1;int m;
	//cout<<"\n"<<"G.extra is up " <<  G.extra<<"\n";
 
	int i=v,j=0;
	G.visit[i]=1;
	cout<<i;
	for(j=0;j<G.size;j++)
	{ 
		if(G.adjmatrix[i][j]!=0)
			push(j);
	}
	while(S.top!=-1)
	{	//G.extra=0;	
		i=pop();
		if(G.visit[i]==0)
		{
			G.visit[i]=1;
			cout<<"->"<<i;
			//G.extra=G.extra++;
		}
		for(j=0;j<G.size;j++)
		{
			if(G.adjmatrix[i][j]!=0)
			{
				if(G.visit[j]==0)
					push(j);
				
			}
		}
		
		
	}	
		for(i=0;i<G.size;i++)
		{	
			if(G.visit[i]==0)
				{	
					G.extra=G.extra+dfs(G,i);
					G.visit[i]=1;
					for(j=0;j<G.size;j++)
					 {
						if(G.adjmatrix[i][j]!=0)
						G.visit[j]=1;
					}	
					
				}	//handling disconnected componenets//		
		}
 
 return G.extra;
}
void DFS::dfs(struct graph G,int v,int t)
{	
	S.top=-1;
	int i=v,j=0,k=0,flag=0;
	G.visit[i]=1;
	for(j=0;j<G.size;j++)
	{ 
		if(G.adjmatrix[i][j]!=0)
			push(j);
	}
	while(S.top!=-1)
	{		
		i=pop();
		if(i==t)
		{	
			cout<<"\n"<<t<<"can be reached from "<<v;
			flag=1;
			break;
		}	
			
		if(G.visit[i]==0)
		{
			G.visit[i]=1;
		//	cout<<"->"<<i;
		}
		for(j=0;j<G.size;j++)
		{
			if(G.adjmatrix[i][j]!=0)
			{
				if(G.visit[j]==0)
					push(j);
			}
		}
		cout<<"\n";
				
	}
	if(flag==0)
		cout<<"\n"<<t<<"cant be reached from"<<v<<"\n";		
}

		
	 		
	
	
