class graph 
{
public:
	int adjmatrix[50][50];
	int size;
	int extra;
	int type_d;
	int type_w;
    int visit[50];
};

class DFS
{
 public:
     	void dfs(graph G);
       	int dfs(graph G,int v);
        void dfs(graph G,int v,int t);
};
