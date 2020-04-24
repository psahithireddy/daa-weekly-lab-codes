/*class graph
{
public:
int adjmatrix[50][50];
int size;
int type_d;
int type_w;
};
*/
class modbfs
{
public:
int visited[50];
int dist[50];
int pred[50];
void bfs(graph g,int source);
};
class path
{
public:
void BFS_SPATH(graph G,int s,int flag);
void LPATH(graph G,int flag);
void MAX_Weight_MST(graph G);

};
