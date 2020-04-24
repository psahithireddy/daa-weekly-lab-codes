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
class mst
{
public:
	void MST_Prim(struct graph G);
	void MST_Kruskal( graph* G);
	void MST_youralgo(struct graph G);
};
