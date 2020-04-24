/*class graph
{
public:
int adjmatrix[50][50];
int size;
int extra;
int type_d;
int type_w;
int visit[50];
};*/

class bfs
{
    public:
	void BFS(struct graph G);
	int BFS(struct graph G, int s);
	void BFS(struct graph G, int s, int t);
};

